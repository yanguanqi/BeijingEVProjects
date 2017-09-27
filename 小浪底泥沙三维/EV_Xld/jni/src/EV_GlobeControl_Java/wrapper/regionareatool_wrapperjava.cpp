/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/regionareatool.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Controls
			{
			}
			namespace SystemUI
			{
				class JCRegionAreaListenerProxy : public EarthView::World::Spatial3D::SystemUI::CRegionAreaListener
				{
				 private:
					EarthView::World::Core::ev_string m_onOperateStart_CRegionAreaTool_callback;
					EarthView::World::Core::ev_string m_onOperateEnd_CRegionAreaTool_callback;
				public:
					JCRegionAreaListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionAreaListener(pList)
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
					void register_onOperateStart_CRegionAreaTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onOperateStart_CRegionAreaTool_callback = __method;
					}
					void register_onOperateEnd_CRegionAreaTool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onOperateEnd_CRegionAreaTool_callback = __method;
					}
					virtual void onOperateStart(EarthView::World::Spatial3D::SystemUI::CRegionAreaTool* tool)
					{
						if (this->_gRef != NULL && this->m_onOperateStart_CRegionAreaTool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong tool_j = (jlong) tool;
							jmethodID __method = __gr->getMethod("onOperateStart_CRegionAreaTool_callback");
							__env->CallVoidMethod(__obj, __method , tool_j);
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
							return this->CRegionAreaListener::onOperateStart(tool);
						}
					}
					virtual void onOperateEnd(EarthView::World::Spatial3D::SystemUI::CRegionAreaTool* tool)
					{
						if (this->_gRef != NULL && this->m_onOperateEnd_CRegionAreaTool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong tool_j = (jlong) tool;
							jmethodID __method = __gr->getMethod("onOperateEnd_CRegionAreaTool_callback");
							__env->CallVoidMethod(__obj, __method , tool_j);
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
							return this->CRegionAreaListener::onOperateEnd(tool);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRegionAreaListenerProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaListener_onOperateStart_1CRegionAreaTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *tool = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) tool_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaListener::onOperateStart(tool);
					}
					else
					{
						pObjectX->onOperateStart(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaListener_register_1onOperateStart_1CRegionAreaTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaListenerProxy *pObjectX = (JCRegionAreaListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onOperateStart_CRegionAreaTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onOperateStart_CRegionAreaTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaListener_onOperateStart_1CRegionAreaTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *tool = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) tool_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaListener::onOperateStart(tool);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaListener_onOperateEnd_1CRegionAreaTool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *tool = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) tool_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaListener*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaListenerProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaListener::onOperateEnd(tool);
					}
					else
					{
						pObjectX->onOperateEnd(tool);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaListener_register_1onOperateEnd_1CRegionAreaTool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaListenerProxy *pObjectX = (JCRegionAreaListenerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onOperateEnd_CRegionAreaTool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onOperateEnd_CRegionAreaTool_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaListener_onOperateEnd_1CRegionAreaTool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tool_j)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *tool = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) tool_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaListener *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaListener*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaListener::onOperateEnd(tool);
				}
				class JCRegionAreaManualObjectProxy : public EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject
				{
				 private:
					EarthView::World::Core::ev_string m_getAnimableObjectPtr_void_callback;
					EarthView::World::Core::ev_string m_getRenderQueueId_void_callback;
					EarthView::World::Core::ev_string m__notifyCreator_CMovableObjectFactory_callback;
					EarthView::World::Core::ev_string m__getCreator_void_callback;
					EarthView::World::Core::ev_string m__notifyManager_CSceneManager_callback;
					EarthView::World::Core::ev_string m__getManager_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getMovableType_void_callback;
					EarthView::World::Core::ev_string m_getParentNode_void_callback;
					EarthView::World::Core::ev_string m_getParentSceneNode_void_callback;
					EarthView::World::Core::ev_string m_isParentTagPoint_void_callback;
					EarthView::World::Core::ev_string m__notifyAttached_CNode_ev_bool_callback;
					EarthView::World::Core::ev_string m__notifyAttached_CNode_callback;
					EarthView::World::Core::ev_string m_isAttached_void_callback;
					EarthView::World::Core::ev_string m_detachFromParent_void_callback;
					EarthView::World::Core::ev_string m_isInScene_void_callback;
					EarthView::World::Core::ev_string m__notifyMoved_void_callback;
					EarthView::World::Core::ev_string m__notifyLightsQueried_LightList_callback;
					EarthView::World::Core::ev_string m_setLightQueriedListener_CLightQueriedListener_callback;
					EarthView::World::Core::ev_string m_getLightQueriedListener_void_callback;
					EarthView::World::Core::ev_string m_getLightListUpdated_void_callback;
					EarthView::World::Core::ev_string m_setLightListUpdated_ev_uint32_callback;
					EarthView::World::Core::ev_string m__notifyCurrentCamera_CCamera_callback;
					EarthView::World::Core::ev_string m_getBoundingBox_void_callback;
					EarthView::World::Core::ev_string m_getBoundingRadius_void_callback;
					EarthView::World::Core::ev_string m_getWorldBoundingSphere_ev_bool_callback;
					EarthView::World::Core::ev_string m_getWorldBoundingSphere_void_callback;
					EarthView::World::Core::ev_string m__updateRenderQueue_CRenderQueue_callback;
					EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
					EarthView::World::Core::ev_string m_getVisible_void_callback;
					EarthView::World::Core::ev_string m_isVisible_void_callback;
					EarthView::World::Core::ev_string m_setRenderingMaxDistance_Real_callback;
					EarthView::World::Core::ev_string m_getRenderingMaxDistance_void_callback;
					EarthView::World::Core::ev_string m_setRenderingMinDistance_Real_callback;
					EarthView::World::Core::ev_string m_getRenderingMinDistance_void_callback;
					EarthView::World::Core::ev_string m_setRenderingMinPixelSize_Real_callback;
					EarthView::World::Core::ev_string m_getRenderingMinPixelSize_void_callback;
					EarthView::World::Core::ev_string m_setSelectionColour_CColourValue_callback;
					EarthView::World::Core::ev_string m_setSelected_IntVector_callback;
					EarthView::World::Core::ev_string m_getSelected_void_callback;
					EarthView::World::Core::ev_string m_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback;
					EarthView::World::Core::ev_string m_selectBy_CAxisAlignedBox_ev_bool_IntVector_callback;
					EarthView::World::Core::ev_string m_selectBy_CSphere_ev_bool_IntVector_callback;
					EarthView::World::Core::ev_string m_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback;
					EarthView::World::Core::ev_string m_renderSelection_void_callback;
					EarthView::World::Core::ev_string m_clearSelection_void_callback;
					EarthView::World::Core::ev_string m_startEditing_ev_uint32_callback;
					EarthView::World::Core::ev_string m_endEditing_void_callback;
					EarthView::World::Core::ev_string m_getEditBoundingBox_void_callback;
					EarthView::World::Core::ev_string m_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback;
					EarthView::World::Core::ev_string m_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback;
					EarthView::World::Core::ev_string m_setRenderQueueGroup_ev_uint8_callback;
					EarthView::World::Core::ev_string m_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback;
					EarthView::World::Core::ev_string m_getRenderQueueGroup_void_callback;
					EarthView::World::Core::ev_string m__getParentNodeFullTransform_void_callback;
					EarthView::World::Core::ev_string m_setQueryFlags_ev_uint32_callback;
					EarthView::World::Core::ev_string m_addQueryFlags_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeQueryFlags_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getQueryFlags_void_callback;
					EarthView::World::Core::ev_string m_setVisibilityFlags_ev_uint32_callback;
					EarthView::World::Core::ev_string m_addVisibilityFlags_ev_uint32_callback;
					EarthView::World::Core::ev_string m_removeVisibilityFlags_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getVisibilityFlags_void_callback;
					EarthView::World::Core::ev_string m_addListener_CMovableObjectListener_callback;
					EarthView::World::Core::ev_string m_removeListener_CMovableObjectListener_callback;
					EarthView::World::Core::ev_string m_existListener_CMovableObjectListener_callback;
					EarthView::World::Core::ev_string m_getListenerCount_void_callback;
					EarthView::World::Core::ev_string m_getListener_ev_uint32_callback;
					EarthView::World::Core::ev_string m_queryLights_void_callback;
					EarthView::World::Core::ev_string m_getLightMask_void_callback;
					EarthView::World::Core::ev_string m_setLightMask_ev_uint32_callback;
					EarthView::World::Core::ev_string m__getLightList_void_callback;
					EarthView::World::Core::ev_string m_setCastShadows_ev_bool_callback;
					EarthView::World::Core::ev_string m_getReceivesShadows_void_callback;
					EarthView::World::Core::ev_string m_getTypeFlags_void_callback;
					EarthView::World::Core::ev_string m_visitRenderables_CVisitor_ev_bool_callback;
					EarthView::World::Core::ev_string m_visitRenderables_CVisitor_callback;
					EarthView::World::Core::ev_string m_setDebugDisplayEnabled_ev_bool_callback;
					EarthView::World::Core::ev_string m_isDebugDisplayEnabled_void_callback;
					EarthView::World::Core::ev_string m_getCastShadows_void_callback;
					EarthView::World::Core::ev_string m_getEdgeList_void_callback;
					EarthView::World::Core::ev_string m_hasEdgeList_void_callback;
					EarthView::World::Core::ev_string m_getWorldBoundingBox_ev_bool_callback;
					EarthView::World::Core::ev_string m_getWorldBoundingBox_void_callback;
					EarthView::World::Core::ev_string m_getLightCapBounds_void_callback;
					EarthView::World::Core::ev_string m_getDarkCapBounds_CLight_Real_callback;
					EarthView::World::Core::ev_string m_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback;
					EarthView::World::Core::ev_string m_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback;
					EarthView::World::Core::ev_string m_getPointExtrusionDistance_CLight_callback;
					EarthView::World::Core::ev_string m_updateEdgeListLightFacing_CEdgeData_CVector4_callback;
					EarthView::World::Core::ev_string m_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback;
					EarthView::World::Core::ev_string m_extrudeBounds_CAxisAlignedBox_CVector4_Real_callback;
				public:
					JCRegionAreaManualObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionAreaManualObject(pList)
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
					void register_getAnimableObjectPtr_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getAnimableObjectPtr_void_callback = __method;
					}
					void register_getRenderQueueId_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderQueueId_void_callback = __method;
					}
					void register__notifyCreator_CMovableObjectFactory_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyCreator_CMovableObjectFactory_callback = __method;
					}
					void register__getCreator_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__getCreator_void_callback = __method;
					}
					void register__notifyManager_CSceneManager_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyManager_CSceneManager_callback = __method;
					}
					void register__getManager_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__getManager_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getMovableType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getMovableType_void_callback = __method;
					}
					void register_getParentNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParentNode_void_callback = __method;
					}
					void register_getParentSceneNode_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getParentSceneNode_void_callback = __method;
					}
					void register_isParentTagPoint_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isParentTagPoint_void_callback = __method;
					}
					void register__notifyAttached_CNode_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyAttached_CNode_ev_bool_callback = __method;
					}
					void register__notifyAttached_CNode_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyAttached_CNode_callback = __method;
					}
					void register_isAttached_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isAttached_void_callback = __method;
					}
					void register_detachFromParent_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_detachFromParent_void_callback = __method;
					}
					void register_isInScene_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isInScene_void_callback = __method;
					}
					void register__notifyMoved_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyMoved_void_callback = __method;
					}
					void register__notifyLightsQueried_LightList_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyLightsQueried_LightList_callback = __method;
					}
					void register_setLightQueriedListener_CLightQueriedListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLightQueriedListener_CLightQueriedListener_callback = __method;
					}
					void register_getLightQueriedListener_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLightQueriedListener_void_callback = __method;
					}
					void register_getLightListUpdated_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLightListUpdated_void_callback = __method;
					}
					void register_setLightListUpdated_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLightListUpdated_ev_uint32_callback = __method;
					}
					void register__notifyCurrentCamera_CCamera_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__notifyCurrentCamera_CCamera_callback = __method;
					}
					void register_getBoundingBox_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBoundingBox_void_callback = __method;
					}
					void register_getBoundingRadius_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getBoundingRadius_void_callback = __method;
					}
					void register_getWorldBoundingSphere_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWorldBoundingSphere_ev_bool_callback = __method;
					}
					void register_getWorldBoundingSphere_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWorldBoundingSphere_void_callback = __method;
					}
					void register__updateRenderQueue_CRenderQueue_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__updateRenderQueue_CRenderQueue_callback = __method;
					}
					void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisible_ev_bool_callback = __method;
					}
					void register_getVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisible_void_callback = __method;
					}
					void register_isVisible_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isVisible_void_callback = __method;
					}
					void register_setRenderingMaxDistance_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRenderingMaxDistance_Real_callback = __method;
					}
					void register_getRenderingMaxDistance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingMaxDistance_void_callback = __method;
					}
					void register_setRenderingMinDistance_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRenderingMinDistance_Real_callback = __method;
					}
					void register_getRenderingMinDistance_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingMinDistance_void_callback = __method;
					}
					void register_setRenderingMinPixelSize_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRenderingMinPixelSize_Real_callback = __method;
					}
					void register_getRenderingMinPixelSize_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderingMinPixelSize_void_callback = __method;
					}
					void register_setSelectionColour_CColourValue_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectionColour_CColourValue_callback = __method;
					}
					void register_setSelected_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelected_IntVector_callback = __method;
					}
					void register_getSelected_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelected_void_callback = __method;
					}
					void register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback = __method;
					}
					void register_selectBy_CAxisAlignedBox_ev_bool_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_selectBy_CAxisAlignedBox_ev_bool_IntVector_callback = __method;
					}
					void register_selectBy_CSphere_ev_bool_IntVector_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_selectBy_CSphere_ev_bool_IntVector_callback = __method;
					}
					void register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback = __method;
					}
					void register_renderSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_renderSelection_void_callback = __method;
					}
					void register_clearSelection_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_clearSelection_void_callback = __method;
					}
					void register_startEditing_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_startEditing_ev_uint32_callback = __method;
					}
					void register_endEditing_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_endEditing_void_callback = __method;
					}
					void register_getEditBoundingBox_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEditBoundingBox_void_callback = __method;
					}
					void register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback = __method;
					}
					void register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback = __method;
					}
					void register_setRenderQueueGroup_ev_uint8_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRenderQueueGroup_ev_uint8_callback = __method;
					}
					void register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback = __method;
					}
					void register_getRenderQueueGroup_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderQueueGroup_void_callback = __method;
					}
					void register__getParentNodeFullTransform_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__getParentNodeFullTransform_void_callback = __method;
					}
					void register_setQueryFlags_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setQueryFlags_ev_uint32_callback = __method;
					}
					void register_addQueryFlags_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addQueryFlags_ev_uint32_callback = __method;
					}
					void register_removeQueryFlags_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeQueryFlags_ev_uint32_callback = __method;
					}
					void register_getQueryFlags_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getQueryFlags_void_callback = __method;
					}
					void register_setVisibilityFlags_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setVisibilityFlags_ev_uint32_callback = __method;
					}
					void register_addVisibilityFlags_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addVisibilityFlags_ev_uint32_callback = __method;
					}
					void register_removeVisibilityFlags_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeVisibilityFlags_ev_uint32_callback = __method;
					}
					void register_getVisibilityFlags_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getVisibilityFlags_void_callback = __method;
					}
					void register_addListener_CMovableObjectListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_addListener_CMovableObjectListener_callback = __method;
					}
					void register_removeListener_CMovableObjectListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_removeListener_CMovableObjectListener_callback = __method;
					}
					void register_existListener_CMovableObjectListener_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_existListener_CMovableObjectListener_callback = __method;
					}
					void register_getListenerCount_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getListenerCount_void_callback = __method;
					}
					void register_getListener_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getListener_ev_uint32_callback = __method;
					}
					void register_queryLights_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_queryLights_void_callback = __method;
					}
					void register_getLightMask_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLightMask_void_callback = __method;
					}
					void register_setLightMask_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setLightMask_ev_uint32_callback = __method;
					}
					void register__getLightList_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m__getLightList_void_callback = __method;
					}
					void register_setCastShadows_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setCastShadows_ev_bool_callback = __method;
					}
					void register_getReceivesShadows_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getReceivesShadows_void_callback = __method;
					}
					void register_getTypeFlags_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getTypeFlags_void_callback = __method;
					}
					void register_visitRenderables_CVisitor_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_visitRenderables_CVisitor_ev_bool_callback = __method;
					}
					void register_visitRenderables_CVisitor_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_visitRenderables_CVisitor_callback = __method;
					}
					void register_setDebugDisplayEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setDebugDisplayEnabled_ev_bool_callback = __method;
					}
					void register_isDebugDisplayEnabled_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isDebugDisplayEnabled_void_callback = __method;
					}
					void register_getCastShadows_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCastShadows_void_callback = __method;
					}
					void register_getEdgeList_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEdgeList_void_callback = __method;
					}
					void register_hasEdgeList_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_hasEdgeList_void_callback = __method;
					}
					void register_getWorldBoundingBox_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWorldBoundingBox_ev_bool_callback = __method;
					}
					void register_getWorldBoundingBox_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getWorldBoundingBox_void_callback = __method;
					}
					void register_getLightCapBounds_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getLightCapBounds_void_callback = __method;
					}
					void register_getDarkCapBounds_CLight_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getDarkCapBounds_CLight_Real_callback = __method;
					}
					void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback = __method;
					}
					void register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback = __method;
					}
					void register_getPointExtrusionDistance_CLight_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getPointExtrusionDistance_CLight_callback = __method;
					}
					void register_updateEdgeListLightFacing_CEdgeData_CVector4_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_updateEdgeListLightFacing_CEdgeData_CVector4_callback = __method;
					}
					void register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback = __method;
					}
					void register_extrudeBounds_CAxisAlignedBox_CVector4_Real_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_extrudeBounds_CAxisAlignedBox_CVector4_Real_callback = __method;
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getBoundingBox() const
					{
						if (this->_gRef != NULL && this->m_getBoundingBox_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBoundingBox_void_callback");
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
							return this->CRegionAreaManualObject::getBoundingBox();
						}
					}
					virtual Real getBoundingRadius() const
					{
						if (this->_gRef != NULL && this->m_getBoundingRadius_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getBoundingRadius_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
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
							return this->CRegionAreaManualObject::getBoundingRadius();
						}
					}
					virtual void _updateRenderQueue(EarthView::World::Graphic::CRenderQueue* queue)
					{
						if (this->_gRef != NULL && this->m__updateRenderQueue_CRenderQueue_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("_updateRenderQueue_CRenderQueue_callback");
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
							return this->CRegionAreaManualObject::_updateRenderQueue(queue);
						}
					}
					virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor)
					{
						if (this->_gRef != NULL && this->m_visitRenderables_CVisitor_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong visitor_j = (jlong) visitor;
							jmethodID __method = __gr->getMethod("visitRenderables_CVisitor_callback");
							__env->CallVoidMethod(__obj, __method , visitor_j);
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
							return this->CRegionAreaManualObject::visitRenderables(visitor);
						}
					}
					virtual void visitRenderables(EarthView::World::Graphic::CRenderable::CVisitor* visitor, ev_bool debugRenderables)
					{
						if (this->_gRef != NULL && this->m_visitRenderables_CVisitor_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong visitor_j = (jlong) visitor;
							jboolean debugRenderables_j = (jboolean) debugRenderables;
							jmethodID __method = __gr->getMethod("visitRenderables_CVisitor_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , visitor_j, debugRenderables_j);
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
							return this->CRegionAreaManualObject::visitRenderables(visitor, debugRenderables);
						}
					}
					virtual EVString getMovableType() const
					{
						if (this->_gRef != NULL && this->m_getMovableType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getMovableType_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getMovableType();
						}
					}
					virtual const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject* getAnimableObjectPtr()
					{
						if (this->_gRef != NULL && this->m_getAnimableObjectPtr_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getAnimableObjectPtr_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject *__values1 = (const EarthView::World::Graphic::CMovableObject::CMovableObjectInternalAnimableObject*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getAnimableObjectPtr();
						}
					}
					virtual ev_uint8 getRenderQueueId() const
					{
						if (this->_gRef != NULL && this->m_getRenderQueueId_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderQueueId_void_callback");
							jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint8 __values1 = (ev_uint8) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getRenderQueueId();
						}
					}
					virtual void _notifyCreator(EarthView::World::Graphic::CMovableObjectFactory* ref_fact)
					{
						if (this->_gRef != NULL && this->m__notifyCreator_CMovableObjectFactory_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_fact_j = (jlong) ref_fact;
							jmethodID __method = __gr->getMethod("_notifyCreator_CMovableObjectFactory_callback");
							__env->CallVoidMethod(__obj, __method , ref_fact_j);
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
							return this->CRegionAreaManualObject::_notifyCreator(ref_fact);
						}
					}
					virtual EarthView::World::Graphic::CMovableObjectFactory* _getCreator() const
					{
						if (this->_gRef != NULL && this->m__getCreator_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("_getCreator_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CMovableObjectFactory *__values1 = (EarthView::World::Graphic::CMovableObjectFactory*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::_getCreator();
						}
					}
					virtual void _notifyManager(EarthView::World::Graphic::CSceneManager* ref_mgr)
					{
						if (this->_gRef != NULL && this->m__notifyManager_CSceneManager_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_mgr_j = (jlong) ref_mgr;
							jmethodID __method = __gr->getMethod("_notifyManager_CSceneManager_callback");
							__env->CallVoidMethod(__obj, __method , ref_mgr_j);
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
							return this->CRegionAreaManualObject::_notifyManager(ref_mgr);
						}
					}
					virtual EarthView::World::Graphic::CSceneManager* _getManager() const
					{
						if (this->_gRef != NULL && this->m__getManager_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("_getManager_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CSceneManager *__values1 = (EarthView::World::Graphic::CSceneManager*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::_getManager();
						}
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getName();
						}
					}
					virtual EarthView::World::Graphic::CNode* getParentNode() const
					{
						if (this->_gRef != NULL && this->m_getParentNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getParentNode_void_callback");
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
							return this->CRegionAreaManualObject::getParentNode();
						}
					}
					virtual EarthView::World::Graphic::CSceneNode* getParentSceneNode() const
					{
						if (this->_gRef != NULL && this->m_getParentSceneNode_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getParentSceneNode_void_callback");
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
							return this->CRegionAreaManualObject::getParentSceneNode();
						}
					}
					virtual ev_bool isParentTagPoint() const
					{
						if (this->_gRef != NULL && this->m_isParentTagPoint_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isParentTagPoint_void_callback");
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
							return this->CRegionAreaManualObject::isParentTagPoint();
						}
					}
					virtual void _notifyAttached(EarthView::World::Graphic::CNode* ref_parent, ev_bool isTagPoint)
					{
						if (this->_gRef != NULL && this->m__notifyAttached_CNode_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jboolean isTagPoint_j = (jboolean) isTagPoint;
							jmethodID __method = __gr->getMethod("_notifyAttached_CNode_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , ref_parent_j, isTagPoint_j);
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
							return this->CRegionAreaManualObject::_notifyAttached(ref_parent, isTagPoint);
						}
					}
					virtual void _notifyAttached(EarthView::World::Graphic::CNode* ref_parent)
					{
						if (this->_gRef != NULL && this->m__notifyAttached_CNode_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("_notifyAttached_CNode_callback");
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
							return this->CRegionAreaManualObject::_notifyAttached(ref_parent);
						}
					}
					virtual ev_bool isAttached() const
					{
						if (this->_gRef != NULL && this->m_isAttached_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isAttached_void_callback");
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
							return this->CRegionAreaManualObject::isAttached();
						}
					}
					virtual void detachFromParent()
					{
						if (this->_gRef != NULL && this->m_detachFromParent_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("detachFromParent_void_callback");
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
							return this->CRegionAreaManualObject::detachFromParent();
						}
					}
					virtual ev_bool isInScene() const
					{
						if (this->_gRef != NULL && this->m_isInScene_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isInScene_void_callback");
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
							return this->CRegionAreaManualObject::isInScene();
						}
					}
					virtual void _notifyMoved()
					{
						if (this->_gRef != NULL && this->m__notifyMoved_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("_notifyMoved_void_callback");
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
							return this->CRegionAreaManualObject::_notifyMoved();
						}
					}
					virtual void _notifyLightsQueried(const EarthView::World::Graphic::LightList* lightList)
					{
						if (this->_gRef != NULL && this->m__notifyLightsQueried_LightList_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong lightList_j = (jlong) lightList;
							jmethodID __method = __gr->getMethod("_notifyLightsQueried_LightList_callback");
							__env->CallVoidMethod(__obj, __method , lightList_j);
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
							return this->CRegionAreaManualObject::_notifyLightsQueried(lightList);
						}
					}
					virtual void setLightQueriedListener(EarthView::World::Graphic::CMovableObject::CLightQueriedListener* listener)
					{
						if (this->_gRef != NULL && this->m_setLightQueriedListener_CLightQueriedListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setLightQueriedListener_CLightQueriedListener_callback");
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
							return this->CRegionAreaManualObject::setLightQueriedListener(listener);
						}
					}
					virtual EarthView::World::Graphic::CMovableObject::CLightQueriedListener* getLightQueriedListener()
					{
						if (this->_gRef != NULL && this->m_getLightQueriedListener_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLightQueriedListener_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CMovableObject::CLightQueriedListener *__values1 = (EarthView::World::Graphic::CMovableObject::CLightQueriedListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getLightQueriedListener();
						}
					}
					virtual ev_uint32 getLightListUpdated() const
					{
						if (this->_gRef != NULL && this->m_getLightListUpdated_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLightListUpdated_void_callback");
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
							return this->CRegionAreaManualObject::getLightListUpdated();
						}
					}
					virtual void setLightListUpdated(ev_uint32 frame)
					{
						if (this->_gRef != NULL && this->m_setLightListUpdated_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong frame_j = (jlong) frame;
							jmethodID __method = __gr->getMethod("setLightListUpdated_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , frame_j);
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
							return this->CRegionAreaManualObject::setLightListUpdated(frame);
						}
					}
					virtual void _notifyCurrentCamera(EarthView::World::Graphic::CCamera* ref_cam)
					{
						if (this->_gRef != NULL && this->m__notifyCurrentCamera_CCamera_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_cam_j = (jlong) ref_cam;
							jmethodID __method = __gr->getMethod("_notifyCurrentCamera_CCamera_callback");
							__env->CallVoidMethod(__obj, __method , ref_cam_j);
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
							return this->CRegionAreaManualObject::_notifyCurrentCamera(ref_cam);
						}
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox(ev_bool derive) const
					{
						if (this->_gRef != NULL && this->m_getWorldBoundingBox_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean derive_j = (jboolean) derive;
							jmethodID __method = __gr->getMethod("getWorldBoundingBox_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , derive_j);
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
							return this->CRegionAreaManualObject::getWorldBoundingBox(derive);
						}
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getWorldBoundingBox() const
					{
						if (this->_gRef != NULL && this->m_getWorldBoundingBox_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getWorldBoundingBox_void_callback");
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
							return this->CRegionAreaManualObject::getWorldBoundingBox();
						}
					}
					virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere(ev_bool derive) const
					{
						if (this->_gRef != NULL && this->m_getWorldBoundingSphere_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean derive_j = (jboolean) derive;
							jmethodID __method = __gr->getMethod("getWorldBoundingSphere_ev_bool_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , derive_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Math::CSphere &__values1 = *(const EarthView::World::Spatial::Math::CSphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getWorldBoundingSphere(derive);
						}
					}
					virtual const EarthView::World::Spatial::Math::CSphere& getWorldBoundingSphere() const
					{
						if (this->_gRef != NULL && this->m_getWorldBoundingSphere_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getWorldBoundingSphere_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							const EarthView::World::Spatial::Math::CSphere &__values1 = *(const EarthView::World::Spatial::Math::CSphere*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getWorldBoundingSphere();
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
							return this->CRegionAreaManualObject::setVisible(visible);
						}
					}
					virtual ev_bool getVisible() const
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
							return this->CRegionAreaManualObject::getVisible();
						}
					}
					virtual ev_bool isVisible() const
					{
						if (this->_gRef != NULL && this->m_isVisible_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isVisible_void_callback");
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
							return this->CRegionAreaManualObject::isVisible();
						}
					}
					virtual void setRenderingMaxDistance(Real dist)
					{
						if (this->_gRef != NULL && this->m_setRenderingMaxDistance_Real_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble dist_j = (jdouble) dist;
							jmethodID __method = __gr->getMethod("setRenderingMaxDistance_Real_callback");
							__env->CallVoidMethod(__obj, __method , dist_j);
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
							return this->CRegionAreaManualObject::setRenderingMaxDistance(dist);
						}
					}
					virtual Real getRenderingMaxDistance() const
					{
						if (this->_gRef != NULL && this->m_getRenderingMaxDistance_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderingMaxDistance_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
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
							return this->CRegionAreaManualObject::getRenderingMaxDistance();
						}
					}
					virtual void setRenderingMinDistance(Real dist)
					{
						if (this->_gRef != NULL && this->m_setRenderingMinDistance_Real_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble dist_j = (jdouble) dist;
							jmethodID __method = __gr->getMethod("setRenderingMinDistance_Real_callback");
							__env->CallVoidMethod(__obj, __method , dist_j);
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
							return this->CRegionAreaManualObject::setRenderingMinDistance(dist);
						}
					}
					virtual Real getRenderingMinDistance() const
					{
						if (this->_gRef != NULL && this->m_getRenderingMinDistance_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderingMinDistance_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
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
							return this->CRegionAreaManualObject::getRenderingMinDistance();
						}
					}
					virtual void setRenderingMinPixelSize(Real pixelSize)
					{
						if (this->_gRef != NULL && this->m_setRenderingMinPixelSize_Real_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jdouble pixelSize_j = (jdouble) pixelSize;
							jmethodID __method = __gr->getMethod("setRenderingMinPixelSize_Real_callback");
							__env->CallVoidMethod(__obj, __method , pixelSize_j);
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
							return this->CRegionAreaManualObject::setRenderingMinPixelSize(pixelSize);
						}
					}
					virtual Real getRenderingMinPixelSize() const
					{
						if (this->_gRef != NULL && this->m_getRenderingMinPixelSize_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderingMinPixelSize_void_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
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
							return this->CRegionAreaManualObject::getRenderingMinPixelSize();
						}
					}
					virtual void setSelectionColour(const EarthView::World::Graphic::CColourValue& colour)
					{
						if (this->_gRef != NULL && this->m_setSelectionColour_CColourValue_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong colour_j = (jlong) &colour;
							jmethodID __method = __gr->getMethod("setSelectionColour_CColourValue_callback");
							__env->CallVoidMethod(__obj, __method , colour_j);
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
							return this->CRegionAreaManualObject::setSelectionColour(colour);
						}
					}
					virtual ev_bool setSelected(const EarthView::World::Core::IntVector& objIndics)
					{
						if (this->_gRef != NULL && this->m_setSelected_IntVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong objIndics_j = (jlong) &objIndics;
							jmethodID __method = __gr->getMethod("setSelected_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , objIndics_j);
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
							return this->CRegionAreaManualObject::setSelected(objIndics);
						}
					}
					virtual EarthView::World::Core::IntVector getSelected() const
					{
						if (this->_gRef != NULL && this->m_getSelected_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSelected_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Core::IntVector __values1 = *(EarthView::World::Core::IntVector*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getSelected();
						}
					}
					virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CRay& ray, const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, ev_int32& objIndex, EarthView::World::Spatial::Math::CVector3& point)
					{
						if (this->_gRef != NULL && this->m_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ray_j = (jlong) &ray;
							jlong viewport_j = (jlong) viewport;
							jboolean prepareToRenderSelection_j = (jboolean) prepareToRenderSelection;
							jlong objIndex_j = (jlong) &objIndex;
							jlong point_j = (jlong) &point;
							jmethodID __method = __gr->getMethod("selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ray_j, viewport_j, prepareToRenderSelection_j, objIndex_j, point_j);
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
							return this->CRegionAreaManualObject::selectBy(ray, viewport, prepareToRenderSelection, objIndex, point);
						}
					}
					virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CAxisAlignedBox& aabb, ev_bool prepareToRenderSelection, EarthView::World::Core::IntVector& indexVec)
					{
						if (this->_gRef != NULL && this->m_selectBy_CAxisAlignedBox_ev_bool_IntVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong aabb_j = (jlong) &aabb;
							jboolean prepareToRenderSelection_j = (jboolean) prepareToRenderSelection;
							jlong indexVec_j = (jlong) &indexVec;
							jmethodID __method = __gr->getMethod("selectBy_CAxisAlignedBox_ev_bool_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , aabb_j, prepareToRenderSelection_j, indexVec_j);
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
							return this->CRegionAreaManualObject::selectBy(aabb, prepareToRenderSelection, indexVec);
						}
					}
					virtual ev_bool selectBy(const EarthView::World::Spatial::Math::CSphere& sphere, ev_bool prepareToRenderSelection, EarthView::World::Core::IntVector& indexVec)
					{
						if (this->_gRef != NULL && this->m_selectBy_CSphere_ev_bool_IntVector_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong sphere_j = (jlong) &sphere;
							jboolean prepareToRenderSelection_j = (jboolean) prepareToRenderSelection;
							jlong indexVec_j = (jlong) &indexVec;
							jmethodID __method = __gr->getMethod("selectBy_CSphere_ev_bool_IntVector_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , sphere_j, prepareToRenderSelection_j, indexVec_j);
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
							return this->CRegionAreaManualObject::selectBy(sphere, prepareToRenderSelection, indexVec);
						}
					}
					virtual ev_bool selectComponentBy(const EarthView::World::Spatial::Math::CRay& ray, const EarthView::World::Graphic::CViewport* viewport, ev_bool prepareToRenderSelection, ev_int32& objIndex, ev_int32& submeshIndex, ev_int32& instanceIndex, ev_int32& segmentIndex, EarthView::World::Spatial::Math::CVector3& point)
					{
						if (this->_gRef != NULL && this->m_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ray_j = (jlong) &ray;
							jlong viewport_j = (jlong) viewport;
							jboolean prepareToRenderSelection_j = (jboolean) prepareToRenderSelection;
							jlong objIndex_j = (jlong) &objIndex;
							jlong submeshIndex_j = (jlong) &submeshIndex;
							jlong instanceIndex_j = (jlong) &instanceIndex;
							jlong segmentIndex_j = (jlong) &segmentIndex;
							jlong point_j = (jlong) &point;
							jmethodID __method = __gr->getMethod("selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ray_j, viewport_j, prepareToRenderSelection_j, objIndex_j, submeshIndex_j, instanceIndex_j, segmentIndex_j, point_j);
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
							return this->CRegionAreaManualObject::selectComponentBy(ray, viewport, prepareToRenderSelection, objIndex, submeshIndex, instanceIndex, segmentIndex, point);
						}
					}
					virtual void renderSelection()
					{
						if (this->_gRef != NULL && this->m_renderSelection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("renderSelection_void_callback");
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
							return this->CRegionAreaManualObject::renderSelection();
						}
					}
					virtual void clearSelection()
					{
						if (this->_gRef != NULL && this->m_clearSelection_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("clearSelection_void_callback");
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
							return this->CRegionAreaManualObject::clearSelection();
						}
					}
					virtual ev_bool startEditing(ev_uint32 objectIndex)
					{
						if (this->_gRef != NULL && this->m_startEditing_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong objectIndex_j = (jlong) objectIndex;
							jmethodID __method = __gr->getMethod("startEditing_ev_uint32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , objectIndex_j);
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
							return this->CRegionAreaManualObject::startEditing(objectIndex);
						}
					}
					virtual void endEditing()
					{
						if (this->_gRef != NULL && this->m_endEditing_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("endEditing_void_callback");
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
							return this->CRegionAreaManualObject::endEditing();
						}
					}
					virtual EarthView::World::Graphic::CEditBoundingBox* getEditBoundingBox()
					{
						if (this->_gRef != NULL && this->m_getEditBoundingBox_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getEditBoundingBox_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CEditBoundingBox *__values1 = (EarthView::World::Graphic::CEditBoundingBox*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getEditBoundingBox();
						}
					}
					virtual ev_bool getSelectedObjectWorldMatrix(ev_uint32 objectIndex, EarthView::World::Spatial::Math::CMatrix4& matrix)
					{
						if (this->_gRef != NULL && this->m_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong objectIndex_j = (jlong) objectIndex;
							jlong matrix_j = (jlong) &matrix;
							jmethodID __method = __gr->getMethod("getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , objectIndex_j, matrix_j);
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
							return this->CRegionAreaManualObject::getSelectedObjectWorldMatrix(objectIndex, matrix);
						}
					}
					virtual ev_bool setSelectedObjectWorldMatrix(ev_uint32 objectIndex, const EarthView::World::Spatial::Math::CMatrix4& matrix)
					{
						if (this->_gRef != NULL && this->m_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong objectIndex_j = (jlong) objectIndex;
							jlong matrix_j = (jlong) &matrix;
							jmethodID __method = __gr->getMethod("setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , objectIndex_j, matrix_j);
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
							return this->CRegionAreaManualObject::setSelectedObjectWorldMatrix(objectIndex, matrix);
						}
					}
					virtual void setRenderQueueGroup(ev_uint8 queueID)
					{
						if (this->_gRef != NULL && this->m_setRenderQueueGroup_ev_uint8_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jshort queueID_j = (jshort) queueID;
							jmethodID __method = __gr->getMethod("setRenderQueueGroup_ev_uint8_callback");
							__env->CallVoidMethod(__obj, __method , queueID_j);
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
							return this->CRegionAreaManualObject::setRenderQueueGroup(queueID);
						}
					}
					virtual void setRenderQueueGroupAndPriority(ev_uint8 queueID, ev_uint16 priority)
					{
						if (this->_gRef != NULL && this->m_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jshort queueID_j = (jshort) queueID;
							jint priority_j = (jint) priority;
							jmethodID __method = __gr->getMethod("setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback");
							__env->CallVoidMethod(__obj, __method , queueID_j, priority_j);
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
							return this->CRegionAreaManualObject::setRenderQueueGroupAndPriority(queueID, priority);
						}
					}
					virtual ev_uint8 getRenderQueueGroup() const
					{
						if (this->_gRef != NULL && this->m_getRenderQueueGroup_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderQueueGroup_void_callback");
							jshort __values1_j = (jshort)__env->CallShortMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_uint8 __values1 = (ev_uint8) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getRenderQueueGroup();
						}
					}
					virtual const EarthView::World::Spatial::Math::CMatrix4& _getParentNodeFullTransform() const
					{
						if (this->_gRef != NULL && this->m__getParentNodeFullTransform_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("_getParentNodeFullTransform_void_callback");
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
							return this->CRegionAreaManualObject::_getParentNodeFullTransform();
						}
					}
					virtual void setQueryFlags(ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_setQueryFlags_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("setQueryFlags_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , flags_j);
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
							return this->CRegionAreaManualObject::setQueryFlags(flags);
						}
					}
					virtual void addQueryFlags(ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_addQueryFlags_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("addQueryFlags_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , flags_j);
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
							return this->CRegionAreaManualObject::addQueryFlags(flags);
						}
					}
					virtual void removeQueryFlags(ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_removeQueryFlags_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("removeQueryFlags_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , flags_j);
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
							return this->CRegionAreaManualObject::removeQueryFlags(flags);
						}
					}
					virtual ev_uint32 getQueryFlags() const
					{
						if (this->_gRef != NULL && this->m_getQueryFlags_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getQueryFlags_void_callback");
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
							return this->CRegionAreaManualObject::getQueryFlags();
						}
					}
					virtual void setVisibilityFlags(ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_setVisibilityFlags_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("setVisibilityFlags_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , flags_j);
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
							return this->CRegionAreaManualObject::setVisibilityFlags(flags);
						}
					}
					virtual void addVisibilityFlags(ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_addVisibilityFlags_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("addVisibilityFlags_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , flags_j);
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
							return this->CRegionAreaManualObject::addVisibilityFlags(flags);
						}
					}
					virtual void removeVisibilityFlags(ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_removeVisibilityFlags_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("removeVisibilityFlags_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , flags_j);
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
							return this->CRegionAreaManualObject::removeVisibilityFlags(flags);
						}
					}
					virtual ev_uint32 getVisibilityFlags() const
					{
						if (this->_gRef != NULL && this->m_getVisibilityFlags_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getVisibilityFlags_void_callback");
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
							return this->CRegionAreaManualObject::getVisibilityFlags();
						}
					}
					virtual void addListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener* ref_listener)
					{
						if (this->_gRef != NULL && this->m_addListener_CMovableObjectListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("addListener_CMovableObjectListener_callback");
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
							return this->CRegionAreaManualObject::addListener(ref_listener);
						}
					}
					virtual void removeListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener)
					{
						if (this->_gRef != NULL && this->m_removeListener_CMovableObjectListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("removeListener_CMovableObjectListener_callback");
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
							return this->CRegionAreaManualObject::removeListener(listener);
						}
					}
					virtual ev_bool existListener(EarthView::World::Graphic::CMovableObject::CMovableObjectListener* listener) const
					{
						if (this->_gRef != NULL && this->m_existListener_CMovableObjectListener_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("existListener_CMovableObjectListener_callback");
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
							return this->CRegionAreaManualObject::existListener(listener);
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
							return this->CRegionAreaManualObject::getListenerCount();
						}
					}
					virtual EarthView::World::Graphic::CMovableObject::CMovableObjectListener* getListener(ev_uint32 index) const
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
							EarthView::World::Graphic::CMovableObject::CMovableObjectListener *__values1 = (EarthView::World::Graphic::CMovableObject::CMovableObjectListener*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getListener(index);
						}
					}
					virtual const EarthView::World::Graphic::LightList& queryLights() const
					{
						if (this->_gRef != NULL && this->m_queryLights_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("queryLights_void_callback");
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
							return this->CRegionAreaManualObject::queryLights();
						}
					}
					virtual ev_uint32 getLightMask() const
					{
						if (this->_gRef != NULL && this->m_getLightMask_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLightMask_void_callback");
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
							return this->CRegionAreaManualObject::getLightMask();
						}
					}
					virtual void setLightMask(ev_uint32 lightMask)
					{
						if (this->_gRef != NULL && this->m_setLightMask_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong lightMask_j = (jlong) lightMask;
							jmethodID __method = __gr->getMethod("setLightMask_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , lightMask_j);
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
							return this->CRegionAreaManualObject::setLightMask(lightMask);
						}
					}
					virtual EarthView::World::Graphic::LightList* _getLightList()
					{
						if (this->_gRef != NULL && this->m__getLightList_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("_getLightList_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::LightList *__values1 = (EarthView::World::Graphic::LightList*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::_getLightList();
						}
					}
					virtual EarthView::World::Graphic::CEdgeData* getEdgeList()
					{
						if (this->_gRef != NULL && this->m_getEdgeList_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getEdgeList_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CEdgeData *__values1 = (EarthView::World::Graphic::CEdgeData*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getEdgeList();
						}
					}
					virtual ev_bool hasEdgeList()
					{
						if (this->_gRef != NULL && this->m_hasEdgeList_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("hasEdgeList_void_callback");
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
							return this->CRegionAreaManualObject::hasEdgeList();
						}
					}
					virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, ev_bool extrudeVertices, Real extrusionDist, ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint shadowTechnique_j = (jint) shadowTechnique;
							jlong light_j = (jlong) light;
							jlong indexBuffer_j = (jlong) indexBuffer;
							jboolean extrudeVertices_j = (jboolean) extrudeVertices;
							jdouble extrusionDist_j = (jdouble) extrusionDist;
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , shadowTechnique_j, light_j, indexBuffer_j, extrudeVertices_j, extrusionDist_j, flags_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator __values1 = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist, flags);
						}
					}
					virtual EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator getShadowVolumeRenderableIterator(EarthView::World::Graphic::ShadowTechnique shadowTechnique, const EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CHardwareIndexBufferSharedPtr* indexBuffer, ev_bool extrudeVertices, Real extrusionDist)
					{
						if (this->_gRef != NULL && this->m_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint shadowTechnique_j = (jint) shadowTechnique;
							jlong light_j = (jlong) light;
							jlong indexBuffer_j = (jlong) indexBuffer;
							jboolean extrudeVertices_j = (jboolean) extrudeVertices;
							jdouble extrusionDist_j = (jdouble) extrusionDist;
							jmethodID __method = __gr->getMethod("getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , shadowTechnique_j, light_j, indexBuffer_j, extrudeVertices_j, extrusionDist_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator __values1 = *(EarthView::World::Graphic::CShadowCaster::ShadowRenderableListIterator*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getShadowVolumeRenderableIterator(shadowTechnique, light, indexBuffer, extrudeVertices, extrusionDist);
						}
					}
					virtual const EarthView::World::Spatial::Math::CAxisAlignedBox& getLightCapBounds() const
					{
						if (this->_gRef != NULL && this->m_getLightCapBounds_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getLightCapBounds_void_callback");
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
							return this->CRegionAreaManualObject::getLightCapBounds();
						}
					}
					virtual EarthView::World::Spatial::Math::CAxisAlignedBox getDarkCapBounds(const EarthView::World::Graphic::CLight& light, Real dirLightExtrusionDist) const
					{
						if (this->_gRef != NULL && this->m_getDarkCapBounds_CLight_Real_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong light_j = (jlong) &light;
							jdouble dirLightExtrusionDist_j = (jdouble) dirLightExtrusionDist;
							jmethodID __method = __gr->getMethod("getDarkCapBounds_CLight_Real_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , light_j, dirLightExtrusionDist_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaManualObject::getDarkCapBounds(light, dirLightExtrusionDist);
						}
					}
					virtual void setCastShadows(ev_bool enabled)
					{
						if (this->_gRef != NULL && this->m_setCastShadows_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setCastShadows_ev_bool_callback");
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
							return this->CRegionAreaManualObject::setCastShadows(enabled);
						}
					}
					virtual ev_bool getCastShadows() const
					{
						if (this->_gRef != NULL && this->m_getCastShadows_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getCastShadows_void_callback");
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
							return this->CRegionAreaManualObject::getCastShadows();
						}
					}
					virtual ev_bool getReceivesShadows()
					{
						if (this->_gRef != NULL && this->m_getReceivesShadows_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getReceivesShadows_void_callback");
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
							return this->CRegionAreaManualObject::getReceivesShadows();
						}
					}
					virtual Real getPointExtrusionDistance(const EarthView::World::Graphic::CLight* l) const
					{
						if (this->_gRef != NULL && this->m_getPointExtrusionDistance_CLight_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong l_j = (jlong) l;
							jmethodID __method = __gr->getMethod("getPointExtrusionDistance_CLight_callback");
							jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , l_j);
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
							return this->CRegionAreaManualObject::getPointExtrusionDistance(l);
						}
					}
					virtual ev_uint32 getTypeFlags() const
					{
						if (this->_gRef != NULL && this->m_getTypeFlags_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getTypeFlags_void_callback");
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
							return this->CRegionAreaManualObject::getTypeFlags();
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
							return this->CRegionAreaManualObject::setDebugDisplayEnabled(enabled);
						}
					}
					virtual ev_bool isDebugDisplayEnabled() const
					{
						if (this->_gRef != NULL && this->m_isDebugDisplayEnabled_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isDebugDisplayEnabled_void_callback");
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
							return this->CRegionAreaManualObject::isDebugDisplayEnabled();
						}
					}
					virtual void updateEdgeListLightFacing(EarthView::World::Graphic::CEdgeData* edgeData, const EarthView::World::Spatial::Math::CVector4& lightPos)
					{
						if (this->_gRef != NULL && this->m_updateEdgeListLightFacing_CEdgeData_CVector4_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong edgeData_j = (jlong) edgeData;
							jlong lightPos_j = (jlong) &lightPos;
							jmethodID __method = __gr->getMethod("updateEdgeListLightFacing_CEdgeData_CVector4_callback");
							__env->CallVoidMethod(__obj, __method , edgeData_j, lightPos_j);
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
							return this->CRegionAreaManualObject::updateEdgeListLightFacing(edgeData, lightPos);
						}
					}
					virtual void generateShadowVolume(EarthView::World::Graphic::CEdgeData* edgeData, const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr& indexBuffer, const EarthView::World::Graphic::CLight* light, EarthView::World::Graphic::CShadowCaster::ShadowRenderableList& shadowRenderables, ev_uint32 flags)
					{
						if (this->_gRef != NULL && this->m_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong edgeData_j = (jlong) edgeData;
							jlong indexBuffer_j = (jlong) &indexBuffer;
							jlong light_j = (jlong) light;
							jlong shadowRenderables_j = (jlong) &shadowRenderables;
							jlong flags_j = (jlong) flags;
							jmethodID __method = __gr->getMethod("generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback");
							__env->CallVoidMethod(__obj, __method , edgeData_j, indexBuffer_j, light_j, shadowRenderables_j, flags_j);
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
							return this->CRegionAreaManualObject::generateShadowVolume(edgeData, indexBuffer, light, shadowRenderables, flags);
						}
					}
					virtual void extrudeBounds(EarthView::World::Spatial::Math::CAxisAlignedBox& box, const EarthView::World::Spatial::Math::CVector4& lightPos, Real extrudeDist) const
					{
						if (this->_gRef != NULL && this->m_extrudeBounds_CAxisAlignedBox_CVector4_Real_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong box_j = (jlong) &box;
							jlong lightPos_j = (jlong) &lightPos;
							jdouble extrudeDist_j = (jdouble) extrudeDist;
							jmethodID __method = __gr->getMethod("extrudeBounds_CAxisAlignedBox_CVector4_Real_callback");
							__env->CallVoidMethod(__obj, __method , box_j, lightPos_j, extrudeDist_j);
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
							return this->CRegionAreaManualObject::extrudeBounds(box, lightPos, extrudeDist);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRegionAreaManualObjectProxy);
				class JCSubRenderableProxy : public EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable
				{
				 private:
					EarthView::World::Core::ev_string m_getRenderOperation_void_callback;
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
					JCSubRenderableProxy(EarthView::World::Core::CNameValuePairList *pList) : CSubRenderable(pList)
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
					void register_getRenderOperation_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getRenderOperation_void_callback = __method;
					}
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
							return this->CSubRenderable::preRender(sm, rsys);
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
							return this->CSubRenderable::postRender(sm, rsys);
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
							return this->CSubRenderable::getMovableObject();
						}
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
							return this->CSubRenderable::getMaterial();
						}
					}
					virtual EarthView::World::Graphic::CRenderOperation* getRenderOperation()
					{
						if (this->_gRef != NULL && this->m_getRenderOperation_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getRenderOperation_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Graphic::CRenderOperation *__values1 = (EarthView::World::Graphic::CRenderOperation*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSubRenderable::getRenderOperation();
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
							return this->CSubRenderable::getRenderOperation(op);
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
							return this->CSubRenderable::getWorldTransforms(xform);
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
							return this->CSubRenderable::getLights();
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
							return this->CSubRenderable::getTechnique();
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
							return this->CSubRenderable::getNumWorldTransforms();
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
							return this->CSubRenderable::getSquaredViewDepth(cam);
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
							return this->CSubRenderable::getCastsShadows();
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
							return this->CSubRenderable::_updateCustomGpuParameter(constantEntry, params);
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
							return this->CSubRenderable::setPolygonModeOverrideable(override);
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
							return this->CSubRenderable::getPolygonModeOverrideable();
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
							return this->CSubRenderable::setCustomAmbient(ambient);
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
							return this->CSubRenderable::getCustomAmbient();
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
							return this->CSubRenderable::getCustomAmbientEnabled();
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
							return this->CSubRenderable::setCustomAmbientEnabled(enabled);
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
							return this->CSubRenderable::addListener(ref_listener);
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
							return this->CSubRenderable::removeListener(listener);
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
							return this->CSubRenderable::existListener(listener);
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
							return this->CSubRenderable::getListenerCount();
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
							return this->CSubRenderable::getListener(index);
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
							return this->CSubRenderable::getRenderSystemData();
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
							return this->CSubRenderable::setRenderSystemData(ref_val);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSubRenderableProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_preRender_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
				{
					EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
					EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::preRender(sm, rsys);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->preRender(sm, rsys);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1preRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_preRender_1CSceneManager_1CRenderSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
				{
					EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
					EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::preRender(sm, rsys);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_postRender_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
				{
					EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
					EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::postRender(sm, rsys);
					}
					else
					{
						pObjectX->postRender(sm, rsys);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1postRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_postRender_1CSceneManager_1CRenderSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
				{
					EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
					EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::postRender(sm, rsys);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getMovableObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getMovableObject();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->getMovableObject();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getMovableObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getMovableObject_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					EarthView::World::Graphic::CMovableObject* __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getMovableObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_setMaterial_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
					#else
					const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
					#endif
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					pObjectX->setMaterial(matName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getMaterial();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getMaterial_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getMaterial();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getRenderOperation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						EarthView::World::Graphic::CRenderOperation* __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getRenderOperation();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Graphic::CRenderOperation* __values1 = pObjectX->getRenderOperation();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getRenderOperation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderOperation_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderOperation_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getRenderOperation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					EarthView::World::Graphic::CRenderOperation* __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getRenderOperation();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getRenderOperation_1CRenderOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
				{
					EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getRenderOperation(op);
					}
					else
					{
						pObjectX->getRenderOperation(op);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getRenderOperation_1CRenderOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getRenderOperation_1CRenderOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
				{
					EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getRenderOperation(op);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getWorldTransforms_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
				{
					EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getWorldTransforms(xform);
					}
					else
					{
						pObjectX->getWorldTransforms(xform);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getWorldTransforms_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getWorldTransforms_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
				{
					EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getWorldTransforms(xform);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getLights_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSubRenderableProxy))
					{
						const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getLights();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getLights_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_getLights_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable*) pObjXXXX;
					const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::CSubRenderable::getLights();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getTechnique_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getNumWorldTransforms_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getSquaredViewDepth_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getCastsShadows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1_1updateCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1setPolygonModeOverrideable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getPolygonModeOverrideable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1setCustomAmbient_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getCustomAmbient_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getCustomAmbientEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1setCustomAmbientEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1addListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1removeListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1existListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1getRenderSystemData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_00024SubRenderable_register_1setRenderSystemData_1CRenderSystemData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSubRenderableProxy *pObjectX = (JCSubRenderableProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_begin_1EVString_1OperationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j, jint ro_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
					#else
					const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
					const EVString materialName = materialName_ch;
					__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
					#endif
					const EarthView::World::Graphic::CRenderOperation::OperationType ro = (const EarthView::World::Graphic::CRenderOperation::OperationType) ro_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->begin(materialName, ro);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_end_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->end();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_addPoint_1CVector3_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong color_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
					const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->addPoint(pos, color);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_addIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong idx_j)
				{
					ev_uint32 idx = (ev_uint32) idx_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->addIndex(idx);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_setMaterial_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
					#else
					const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
					const EVString matName = matName_ch;
					__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
					#endif
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->setMaterial(matName);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_getBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaManualObjectProxy))
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::getBoundingBox();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
					else
					{
						const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getBoundingBox();
						jlong __values1_j = (jlong) &__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBoundingBox_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBoundingBox_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_getBoundingBox_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::getBoundingBox();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_getBoundingRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaManualObjectProxy))
					{
						Real __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::getBoundingRadius();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
					else
					{
						Real __values1 = pObjectX->getBoundingRadius();
						jdouble __values1_j = (jdouble)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getBoundingRadius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getBoundingRadius_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getBoundingRadius_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_getBoundingRadius_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					Real __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::getBoundingRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject__1updateRenderQueue_1CRenderQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
				{
					EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaManualObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::_updateRenderQueue(queue);
					}
					else
					{
						pObjectX->_updateRenderQueue(queue);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1updateRenderQueue_1CRenderQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__updateRenderQueue_CRenderQueue_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_updateRenderQueue_CRenderQueue_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject__1updateRenderQueue_1CRenderQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
				{
					EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::_updateRenderQueue(queue);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_visitRenderables_1CVisitor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j)
				{
					EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaManualObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::visitRenderables(visitor);
					}
					else
					{
						pObjectX->visitRenderables(visitor);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1visitRenderables_1CVisitor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_visitRenderables_CVisitor_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"visitRenderables_CVisitor_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_visitRenderables_1CVisitor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j)
				{
					EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::visitRenderables(visitor);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_visitRenderables_1CVisitor_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j, jboolean debugRenderables_j)
				{
					EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
					ev_bool debugRenderables = (ev_bool) debugRenderables_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaManualObjectProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::visitRenderables(visitor, debugRenderables);
					}
					else
					{
						pObjectX->visitRenderables(visitor, debugRenderables);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1visitRenderables_1CVisitor_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_visitRenderables_CVisitor_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"visitRenderables_CVisitor_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_visitRenderables_1CVisitor_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j, jboolean debugRenderables_j)
				{
					EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
					ev_bool debugRenderables = (ev_bool) debugRenderables_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::visitRenderables(visitor, debugRenderables);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_getMovableType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaManualObjectProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::getMovableType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getMovableType();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getMovableType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getMovableType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getMovableType_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_getMovableType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaManualObject::getMovableType();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getAnimableObjectPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getAnimableObjectPtr_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getAnimableObjectPtr_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getRenderQueueId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderQueueId_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderQueueId_void_callback", "()S");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1notifyCreator_1CMovableObjectFactory(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyCreator_CMovableObjectFactory_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyCreator_CMovableObjectFactory_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1getCreator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__getCreator_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_getCreator_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1notifyManager_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyManager_CSceneManager_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyManager_CSceneManager_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1getManager_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__getManager_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_getManager_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getParentNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParentNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParentNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getParentSceneNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getParentSceneNode_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getParentSceneNode_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1isParentTagPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isParentTagPoint_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isParentTagPoint_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1notifyAttached_1CNode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyAttached_CNode_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyAttached_CNode_ev_bool_callback", "(JZ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1notifyAttached_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyAttached_CNode_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyAttached_CNode_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1isAttached_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isAttached_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isAttached_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1detachFromParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_detachFromParent_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"detachFromParent_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1isInScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isInScene_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isInScene_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1notifyMoved_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyMoved_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyMoved_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1notifyLightsQueried_1LightList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyLightsQueried_LightList_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyLightsQueried_LightList_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setLightQueriedListener_1CLightQueriedListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLightQueriedListener_CLightQueriedListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLightQueriedListener_CLightQueriedListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getLightQueriedListener_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLightQueriedListener_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLightQueriedListener_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getLightListUpdated_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLightListUpdated_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLightListUpdated_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setLightListUpdated_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLightListUpdated_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLightListUpdated_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1notifyCurrentCamera_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__notifyCurrentCamera_CCamera_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_notifyCurrentCamera_CCamera_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getWorldBoundingSphere_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWorldBoundingSphere_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWorldBoundingSphere_ev_bool_callback", "(Z)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getWorldBoundingSphere_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWorldBoundingSphere_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWorldBoundingSphere_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1isVisible_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isVisible_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isVisible_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setRenderingMaxDistance_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRenderingMaxDistance_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRenderingMaxDistance_Real_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getRenderingMaxDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingMaxDistance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingMaxDistance_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setRenderingMinDistance_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRenderingMinDistance_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRenderingMinDistance_Real_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getRenderingMinDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingMinDistance_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingMinDistance_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setRenderingMinPixelSize_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRenderingMinPixelSize_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRenderingMinPixelSize_Real_callback", "(D)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getRenderingMinPixelSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderingMinPixelSize_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderingMinPixelSize_void_callback", "()D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setSelectionColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectionColour_CColourValue_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectionColour_CColourValue_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setSelected_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelected_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelected_IntVector_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getSelected_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelected_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelected_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1selectBy_1CRay_1CViewport_1ev_1bool_1ev_1int32_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"selectBy_CRay_CViewport_ev_bool_ev_int32_CVector3_callback", "(JJZJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1selectBy_1CAxisAlignedBox_1ev_1bool_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_selectBy_CAxisAlignedBox_ev_bool_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"selectBy_CAxisAlignedBox_ev_bool_IntVector_callback", "(JZJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1selectBy_1CSphere_1ev_1bool_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_selectBy_CSphere_ev_bool_IntVector_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"selectBy_CSphere_ev_bool_IntVector_callback", "(JZJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1selectComponentBy_1CRay_1CViewport_1ev_1bool_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"selectComponentBy_CRay_CViewport_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CVector3_callback", "(JJZJJJJJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1renderSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_renderSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"renderSelection_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1clearSelection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_clearSelection_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"clearSelection_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1startEditing_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_startEditing_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"startEditing_ev_uint32_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1endEditing_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_endEditing_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"endEditing_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getEditBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEditBoundingBox_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEditBoundingBox_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getSelectedObjectWorldMatrix_1ev_1uint32_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setSelectedObjectWorldMatrix_1ev_1uint32_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setSelectedObjectWorldMatrix_ev_uint32_CMatrix4_callback", "(JJ)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setRenderQueueGroup_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRenderQueueGroup_ev_uint8_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRenderQueueGroup_ev_uint8_callback", "(S)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setRenderQueueGroupAndPriority_1ev_1uint8_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setRenderQueueGroupAndPriority_ev_uint8_ev_uint16_callback", "(SI)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getRenderQueueGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getRenderQueueGroup_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getRenderQueueGroup_void_callback", "()S");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1getParentNodeFullTransform_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__getParentNodeFullTransform_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_getParentNodeFullTransform_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setQueryFlags_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setQueryFlags_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setQueryFlags_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1addQueryFlags_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addQueryFlags_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addQueryFlags_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1removeQueryFlags_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeQueryFlags_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeQueryFlags_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getQueryFlags_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getQueryFlags_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getQueryFlags_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setVisibilityFlags_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setVisibilityFlags_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setVisibilityFlags_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1addVisibilityFlags_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addVisibilityFlags_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addVisibilityFlags_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1removeVisibilityFlags_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeVisibilityFlags_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeVisibilityFlags_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getVisibilityFlags_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getVisibilityFlags_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getVisibilityFlags_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1addListener_1CMovableObjectListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_addListener_CMovableObjectListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CMovableObjectListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1removeListener_1CMovableObjectListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_removeListener_CMovableObjectListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CMovableObjectListener_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1existListener_1CMovableObjectListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_existListener_CMovableObjectListener_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"existListener_CMovableObjectListener_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1queryLights_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_queryLights_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"queryLights_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getLightMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLightMask_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLightMask_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setLightMask_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setLightMask_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setLightMask_ev_uint32_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1_1getLightList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register__getLightList_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"_getLightList_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setCastShadows_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setCastShadows_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setCastShadows_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getReceivesShadows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getReceivesShadows_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getReceivesShadows_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getTypeFlags_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getTypeFlags_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getTypeFlags_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1setDebugDisplayEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1isDebugDisplayEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isDebugDisplayEnabled_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isDebugDisplayEnabled_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getCastShadows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCastShadows_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCastShadows_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getEdgeList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEdgeList_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEdgeList_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1hasEdgeList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_hasEdgeList_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"hasEdgeList_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getWorldBoundingBox_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWorldBoundingBox_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWorldBoundingBox_ev_bool_callback", "(Z)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getWorldBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getWorldBoundingBox_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getWorldBoundingBox_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getLightCapBounds_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getLightCapBounds_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getLightCapBounds_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getDarkCapBounds_1CLight_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getDarkCapBounds_CLight_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getDarkCapBounds_CLight_Real_callback", "(JD)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getShadowVolumeRenderableIterator_1ShadowTechnique_1CLight_1CHardwareIndexBufferSharedPtr_1ev_1bool_1Real_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_ev_uint32_callback", "(IJJZDJ)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getShadowVolumeRenderableIterator_1ShadowTechnique_1CLight_1CHardwareIndexBufferSharedPtr_1ev_1bool_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getShadowVolumeRenderableIterator_ShadowTechnique_CLight_CHardwareIndexBufferSharedPtr_ev_bool_Real_callback", "(IJJZD)J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1getPointExtrusionDistance_1CLight(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getPointExtrusionDistance_CLight_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getPointExtrusionDistance_CLight_callback", "(J)D");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1updateEdgeListLightFacing_1CEdgeData_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_updateEdgeListLightFacing_CEdgeData_CVector4_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"updateEdgeListLightFacing_CEdgeData_CVector4_callback", "(JJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1generateShadowVolume_1CEdgeData_1CHardwareIndexBufferSharedPtr_1CLight_1ShadowRenderableList_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"generateShadowVolume_CEdgeData_CHardwareIndexBufferSharedPtr_CLight_ShadowRenderableList_ev_uint32_callback", "(JJJJJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaManualObject_register_1extrudeBounds_1CAxisAlignedBox_1CVector4_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaManualObjectProxy *pObjectX = (JCRegionAreaManualObjectProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_extrudeBounds_CAxisAlignedBox_CVector4_Real_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"extrudeBounds_CAxisAlignedBox_CVector4_Real_callback", "(JJD)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				class JCRegionAreaToolProxy : public EarthView::World::Spatial3D::SystemUI::CRegionAreaTool
				{
				 private:
					EarthView::World::Core::ev_string m_run_void_callback;
					EarthView::World::Core::ev_string m_reset_void_callback;
					EarthView::World::Core::ev_string m_activate_void_callback;
					EarthView::World::Core::ev_string m_deactivate_void_callback;
					EarthView::World::Core::ev_string m_getCursor_void_callback;
					EarthView::World::Core::ev_string m_onContextMenu_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onDoubleClick_void_callback;
					EarthView::World::Core::ev_string m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyDown_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onKeyUp_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback;
					EarthView::World::Core::ev_string m_onTouchDown_MotionEvent_callback;
					EarthView::World::Core::ev_string m_onTouchUp_MotionEvent_callback;
					EarthView::World::Core::ev_string m_onTouchMove_MotionEvent_callback;
					EarthView::World::Core::ev_string m_getToolBarType_void_callback;
					EarthView::World::Core::ev_string m_getType_void_callback;
					EarthView::World::Core::ev_string m_getName_void_callback;
					EarthView::World::Core::ev_string m_getCategory_void_callback;
					EarthView::World::Core::ev_string m_getToolTip_void_callback;
					EarthView::World::Core::ev_string m_getIcon_void_callback;
					EarthView::World::Core::ev_string m_isCheckable_void_callback;
					EarthView::World::Core::ev_string m_onClicked_void_callback;
					EarthView::World::Core::ev_string m_getChecked_void_callback;
					EarthView::World::Core::ev_string m_setChecked_ev_bool_callback;
					EarthView::World::Core::ev_string m_getEnabled_void_callback;
					EarthView::World::Core::ev_string m_setEnabled_ev_bool_callback;
					EarthView::World::Core::ev_string m_create_ISpatialControl_callback;
					EarthView::World::Core::ev_string m_update_CEvent_callback;
				public:
					JCRegionAreaToolProxy(EarthView::World::Core::CNameValuePairList *pList) : CRegionAreaTool(pList)
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
					void register_run_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_run_void_callback = __method;
					}
					void register_reset_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_reset_void_callback = __method;
					}
					void register_activate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_activate_void_callback = __method;
					}
					void register_deactivate_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_deactivate_void_callback = __method;
					}
					void register_getCursor_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCursor_void_callback = __method;
					}
					void register_onContextMenu_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onContextMenu_ev_int32_ev_int32_callback = __method;
					}
					void register_onDoubleClick_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDoubleClick_void_callback = __method;
					}
					void register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onKeyDown_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyDown_ev_int32_ev_int32_callback = __method;
					}
					void register_onKeyUp_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onKeyUp_ev_int32_ev_int32_callback = __method;
					}
					void register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback = __method;
					}
					void register_onTouchDown_MotionEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTouchDown_MotionEvent_callback = __method;
					}
					void register_onTouchUp_MotionEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTouchUp_MotionEvent_callback = __method;
					}
					void register_onTouchMove_MotionEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onTouchMove_MotionEvent_callback = __method;
					}
					void register_getToolBarType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getToolBarType_void_callback = __method;
					}
					void register_getType_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getType_void_callback = __method;
					}
					void register_getName_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getName_void_callback = __method;
					}
					void register_getCategory_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getCategory_void_callback = __method;
					}
					void register_getToolTip_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getToolTip_void_callback = __method;
					}
					void register_getIcon_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getIcon_void_callback = __method;
					}
					void register_isCheckable_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isCheckable_void_callback = __method;
					}
					void register_onClicked_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_onClicked_void_callback = __method;
					}
					void register_getChecked_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getChecked_void_callback = __method;
					}
					void register_setChecked_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setChecked_ev_bool_callback = __method;
					}
					void register_getEnabled_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getEnabled_void_callback = __method;
					}
					void register_setEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEnabled_ev_bool_callback = __method;
					}
					void register_create_ISpatialControl_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_create_ISpatialControl_callback = __method;
					}
					void register_update_CEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_update_CEvent_callback = __method;
					}
					virtual ev_uint32 getType() const
					{
						if (this->_gRef != NULL && this->m_getType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getType_void_callback");
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
							return this->CRegionAreaTool::getType();
						}
					}
					virtual ev_bool onMouseDown(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
							return this->CRegionAreaTool::onMouseDown(button, shift, x, y);
						}
					}
					virtual ev_bool onMouseUp(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
							return this->CRegionAreaTool::onMouseUp(button, shift, x, y);
						}
					}
					virtual ev_bool onMouseMove(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
							return this->CRegionAreaTool::onMouseMove(button, shift, x, y);
						}
					}
					virtual void run()
					{
						if (this->_gRef != NULL && this->m_run_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("run_void_callback");
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
							return this->CRegionAreaTool::run();
						}
					}
					virtual void reset()
					{
						if (this->_gRef != NULL && this->m_reset_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("reset_void_callback");
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
							return this->CRegionAreaTool::reset();
						}
					}
					virtual ev_uint32 getToolBarType() const
					{
						if (this->_gRef != NULL && this->m_getToolBarType_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getToolBarType_void_callback");
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
							return this->CRegionAreaTool::getToolBarType();
						}
					}
					virtual EVString getName() const
					{
						if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getName_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CRegionAreaTool::getName();
						}
					}
					virtual EVString getCategory() const
					{
						if (this->_gRef != NULL && this->m_getCategory_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getCategory_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CRegionAreaTool::getCategory();
						}
					}
					virtual EVString getToolTip() const
					{
						if (this->_gRef != NULL && this->m_getToolTip_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getToolTip_void_callback");
							jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringUTFChars(__values1_j,values_ch);
							#else
							const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
							EVString __values1 = values_ch;
							__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
							#endif
							return __values1;
						}
						else
						{
							return this->CRegionAreaTool::getToolTip();
						}
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if (this->_gRef != NULL && this->m_getIcon_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getIcon_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Display::IBitmap *__values1 = (EarthView::World::Display::IBitmap*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaTool::getIcon();
						}
					}
					virtual ev_bool isCheckable() const
					{
						if (this->_gRef != NULL && this->m_isCheckable_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("isCheckable_void_callback");
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
							return this->CRegionAreaTool::isCheckable();
						}
					}
					virtual void onClicked()
					{
						if (this->_gRef != NULL && this->m_onClicked_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("onClicked_void_callback");
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
							return this->CRegionAreaTool::onClicked();
						}
					}
					virtual ev_bool getChecked() const
					{
						if (this->_gRef != NULL && this->m_getChecked_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getChecked_void_callback");
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
							return this->CRegionAreaTool::getChecked();
						}
					}
					virtual void setChecked(ev_bool checked)
					{
						if (this->_gRef != NULL && this->m_setChecked_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jboolean checked_j = (jboolean) checked;
							jmethodID __method = __gr->getMethod("setChecked_ev_bool_callback");
							__env->CallVoidMethod(__obj, __method , checked_j);
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
							return this->CRegionAreaTool::setChecked(checked);
						}
					}
					virtual ev_bool getEnabled() const
					{
						if (this->_gRef != NULL && this->m_getEnabled_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getEnabled_void_callback");
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
							return this->CRegionAreaTool::getEnabled();
						}
					}
					virtual void setEnabled(ev_bool enabled)
					{
						if (this->_gRef != NULL && this->m_setEnabled_ev_bool_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("setEnabled_ev_bool_callback");
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
							return this->CRegionAreaTool::setEnabled(enabled);
						}
					}
					virtual void create(EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if (this->_gRef != NULL && this->m_create_ISpatialControl_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ref_ctrl_j = (jlong) ref_ctrl;
							jmethodID __method = __gr->getMethod("create_ISpatialControl_callback");
							__env->CallVoidMethod(__obj, __method , ref_ctrl_j);
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
							return this->CRegionAreaTool::create(ref_ctrl);
						}
					}
					virtual ev_bool update(EarthView::World::Core::CEvent* e)
					{
						if (this->_gRef != NULL && this->m_update_CEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong e_j = (jlong) e;
							jmethodID __method = __gr->getMethod("update_CEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , e_j);
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
							return this->CRegionAreaTool::update(e);
						}
					}
					virtual void activate()
					{
						if (this->_gRef != NULL && this->m_activate_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("activate_void_callback");
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
							return this->CRegionAreaTool::activate();
						}
					}
					virtual void deactivate()
					{
						if (this->_gRef != NULL && this->m_deactivate_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("deactivate_void_callback");
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
							return this->CRegionAreaTool::deactivate();
						}
					}
					virtual ev_int32 getCursor()
					{
						if (this->_gRef != NULL && this->m_getCursor_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getCursor_void_callback");
							jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_int32 __values1 = (ev_int32) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRegionAreaTool::getCursor();
						}
					}
					virtual ev_bool onContextMenu(ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onContextMenu_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onContextMenu_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , x_j, y_j);
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
							return this->CRegionAreaTool::onContextMenu(x, y);
						}
					}
					virtual ev_bool onDoubleClick()
					{
						if (this->_gRef != NULL && this->m_onDoubleClick_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("onDoubleClick_void_callback");
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
							return this->CRegionAreaTool::onDoubleClick();
						}
					}
					virtual ev_bool onDoubleClick(ev_int32 button, ev_int32 shift, ev_int32 x, ev_int32 y)
					{
						if (this->_gRef != NULL && this->m_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint button_j = (jint) button;
							jint shift_j = (jint) shift;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jmethodID __method = __gr->getMethod("onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , button_j, shift_j, x_j, y_j);
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
							return this->CRegionAreaTool::onDoubleClick(button, shift, x, y);
						}
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
							return this->CRegionAreaTool::onKeyDown(keyCode, shift);
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
							return this->CRegionAreaTool::onKeyUp(keyCode, shift);
						}
					}
					virtual ev_bool onMouseWheel(ev_int32 delta, ev_int32 x, ev_int32 y, ev_int32 flag)
					{
						if (this->_gRef != NULL && this->m_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jint delta_j = (jint) delta;
							jint x_j = (jint) x;
							jint y_j = (jint) y;
							jint flag_j = (jint) flag;
							jmethodID __method = __gr->getMethod("onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , delta_j, x_j, y_j, flag_j);
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
							return this->CRegionAreaTool::onMouseWheel(delta, x, y, flag);
						}
					}
					virtual ev_bool onTouchDown(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if (this->_gRef != NULL && this->m_onTouchDown_MotionEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong touchEvent_j = (jlong) &touchEvent;
							jmethodID __method = __gr->getMethod("onTouchDown_MotionEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
							return this->CRegionAreaTool::onTouchDown(touchEvent);
						}
					}
					virtual ev_bool onTouchUp(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if (this->_gRef != NULL && this->m_onTouchUp_MotionEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong touchEvent_j = (jlong) &touchEvent;
							jmethodID __method = __gr->getMethod("onTouchUp_MotionEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
							return this->CRegionAreaTool::onTouchUp(touchEvent);
						}
					}
					virtual ev_bool onTouchMove(const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
					{
						if (this->_gRef != NULL && this->m_onTouchMove_MotionEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong touchEvent_j = (jlong) &touchEvent;
							jmethodID __method = __gr->getMethod("onTouchMove_MotionEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , touchEvent_j);
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
							return this->CRegionAreaTool::onTouchMove(touchEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRegionAreaToolProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaToolProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::getType();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getType();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getType_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::getType();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::onMouseDown(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseDown(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseDown_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::onMouseDown(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::onMouseUp(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseUp(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseUp_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::onMouseUp(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::onMouseMove(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseMove(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseMove_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::onMouseMove(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_run_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaToolProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::run();
					}
					else
					{
						pObjectX->run();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1run_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_run_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"run_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_run_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::run();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRegionAreaToolProxy))
					{
						pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::reset();
					}
					else
					{
						pObjectX->reset();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_reset_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"reset_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_reset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial3D::SystemUI::CRegionAreaTool::reset();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_createMoveCircle_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong beginPt_j, jlong endPt_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &beginPt = *(EarthView::World::Spatial::Math::CVector3*) beginPt_j;
					const EarthView::World::Spatial::Math::CVector3 &endPt = *(EarthView::World::Spatial::Math::CVector3*) endPt_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->createMoveCircle(beginPt, endPt);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_createCircle_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat radius_j)
				{
					ev_real32 radius = (ev_real32) radius_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->createCircle(radius);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_setCircleAreaListener_1CRegionAreaListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong listener_j)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaListener *listener = (EarthView::World::Spatial3D::SystemUI::CRegionAreaListener*) listener_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->setCircleAreaListener(listener);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_splitCircle2WorldPosition_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1int32_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lati_j, jdouble longi_j, jdouble radius_j, jint insertNum_j, jlong outPoints_j)
				{
					ev_real64 lati = (ev_real64) lati_j;
					ev_real64 longi = (ev_real64) longi_j;
					ev_real64 radius = (ev_real64) radius_j;
					ev_int32 insertNum = (ev_int32) insertNum_j;
					EarthView::World::Spatial::Math::VertexList &outPoints = *(EarthView::World::Spatial::Math::VertexList*) outPoints_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->splitCircle2WorldPosition(lati, longi, radius, insertNum, outPoints);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_setRadius_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
				{
					Real radius = (Real) radius_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->setRadius(radius);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_getRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					Real __values1 = pObjectX->getRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_setCenterPosition_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble lon_j, jdouble lat_j)
				{
					ev_real64 lon = (ev_real64) lon_j;
					ev_real64 lat = (ev_real64) lat_j;
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->setCenterPosition(lon, lat);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_getCenterPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX->getCenterPosition();
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_getArea_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope __values1 = pObjectX->getArea();
					EarthView::World::Spatial::Geometry::CEnvelope *returnvalues = new EarthView::World::Spatial::Geometry::CEnvelope(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_getCenterAltitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCenterAltitude();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_drawCenter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::SystemUI::CRegionAreaTool *pObjectX = (EarthView::World::Spatial3D::SystemUI::CRegionAreaTool*) pObjXXXX;
					pObjectX->drawCenter();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1activate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_activate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"activate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1deactivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_deactivate_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"deactivate_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getCursor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCursor_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCursor_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onContextMenu_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onContextMenu_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onContextMenu_ev_int32_ev_int32_callback", "(II)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onDoubleClick_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDoubleClick_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onDoubleClick_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onMouseWheel_ev_int32_ev_int32_ev_int32_ev_int32_callback", "(IIII)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onTouchDown_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTouchDown_MotionEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTouchDown_MotionEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onTouchUp_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTouchUp_MotionEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTouchUp_MotionEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onTouchMove_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onTouchMove_MotionEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onTouchMove_MotionEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getToolBarType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getToolBarType_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getToolBarType_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getName_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getCategory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getCategory_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getCategory_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getToolTip_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getToolTip_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getToolTip_void_callback", "()Ljava/lang/String;");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getIcon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getIcon_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getIcon_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1isCheckable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isCheckable_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isCheckable_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1onClicked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_onClicked_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"onClicked_void_callback", "()V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getChecked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getChecked_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getChecked_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1setChecked_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setChecked_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setChecked_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1getEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getEnabled_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getEnabled_void_callback", "()Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEnabled_ev_bool_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEnabled_ev_bool_callback", "(Z)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1create_1ISpatialControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_create_ISpatialControl_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"create_ISpatialControl_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_systemui_RegionAreaTool_register_1update_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRegionAreaToolProxy *pObjectX = (JCRegionAreaToolProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_update_CEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"update_CEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
			}
		}
	}
}
