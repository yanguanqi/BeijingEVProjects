/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlayelement.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GuiMetricsModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					GMM_RELATIVE,
					GMM_PIXELS,
					GMM_RELATIVE_ASPECT_ADJUSTED
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GuiHorizontalAlignmentHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					GHA_LEFT,
					GHA_CENTER,
					GHA_RIGHT
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_GuiVerticalAlignmentHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					GVA_TOP,
					GVA_CENTER,
					GVA_BOTTOM
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			class JCOverlayElementProxy : public EarthView::World::Graphic::COverlayElement
			{
			 private:
				EarthView::World::Core::ev_string m_updatePositionGeometry_void_callback;
				EarthView::World::Core::ev_string m_updateTextureGeometry_void_callback;
				EarthView::World::Core::ev_string m_addBaseParameters_void_callback;
				EarthView::World::Core::ev_string m_initialise_void_callback;
				EarthView::World::Core::ev_string m_show_void_callback;
				EarthView::World::Core::ev_string m_hide_void_callback;
				EarthView::World::Core::ev_string m_setEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getMaterialName_void_callback;
				EarthView::World::Core::ev_string m_setMaterialName_EVString_callback;
				EarthView::World::Core::ev_string m__positionsOutOfDate_void_callback;
				EarthView::World::Core::ev_string m__update_void_callback;
				EarthView::World::Core::ev_string m__updateFromParent_void_callback;
				EarthView::World::Core::ev_string m__notifyParent_COverlayContainer_COverlay_callback;
				EarthView::World::Core::ev_string m__getDerivedLeft_void_callback;
				EarthView::World::Core::ev_string m__getDerivedTop_void_callback;
				EarthView::World::Core::ev_string m__getRelativeWidth_void_callback;
				EarthView::World::Core::ev_string m__getRelativeHeight_void_callback;
				EarthView::World::Core::ev_string m__getClippingRegion_Rectangle_callback;
				EarthView::World::Core::ev_string m__notifyZOrder_ev_uint16_callback;
				EarthView::World::Core::ev_string m__notifyWorldTransforms_CMatrix4_callback;
				EarthView::World::Core::ev_string m__notifyViewport_void_callback;
				EarthView::World::Core::ev_string m__updateRenderQueue_CRenderQueue_callback;
				EarthView::World::Core::ev_string m_visitRenderables_CVisitor_ev_bool_callback;
				EarthView::World::Core::ev_string m_getTypeName_void_callback;
				EarthView::World::Core::ev_string m_setCaption_EarthView_World_Core_DisplayString_callback;
				EarthView::World::Core::ev_string m_getCaption_void_callback;
				EarthView::World::Core::ev_string m_setColour_CColourValue_callback;
				EarthView::World::Core::ev_string m_getColour_void_callback;
				EarthView::World::Core::ev_string m_setMetricsMode_GuiMetricsMode_callback;
				EarthView::World::Core::ev_string m_getMetricsMode_void_callback;
				EarthView::World::Core::ev_string m_setHorizontalAlignment_GuiHorizontalAlignment_callback;
				EarthView::World::Core::ev_string m_getHorizontalAlignment_void_callback;
				EarthView::World::Core::ev_string m_setVerticalAlignment_GuiVerticalAlignment_callback;
				EarthView::World::Core::ev_string m_getVerticalAlignment_void_callback;
				EarthView::World::Core::ev_string m_contains_Real_Real_callback;
				EarthView::World::Core::ev_string m_findElementAt_Real_Real_callback;
				EarthView::World::Core::ev_string m_isContainer_void_callback;
				EarthView::World::Core::ev_string m_isKeyEnabled_void_callback;
				EarthView::World::Core::ev_string m_isCloneable_void_callback;
				EarthView::World::Core::ev_string m_setCloneable_ev_bool_callback;
				EarthView::World::Core::ev_string m_copyFromTemplate_COverlayElement_callback;
				EarthView::World::Core::ev_string m_ev_clone_EVString_callback;
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
				JCOverlayElementProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlayElement(pList)
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
				void register_updatePositionGeometry_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updatePositionGeometry_void_callback = __method;
				}
				void register_updateTextureGeometry_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updateTextureGeometry_void_callback = __method;
				}
				void register_addBaseParameters_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addBaseParameters_void_callback = __method;
				}
				void register_initialise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialise_void_callback = __method;
				}
				void register_show_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_show_void_callback = __method;
				}
				void register_hide_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hide_void_callback = __method;
				}
				void register_setEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEnabled_ev_bool_callback = __method;
				}
				void register_getMaterialName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaterialName_void_callback = __method;
				}
				void register_setMaterialName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaterialName_EVString_callback = __method;
				}
				void register__positionsOutOfDate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__positionsOutOfDate_void_callback = __method;
				}
				void register__update_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__update_void_callback = __method;
				}
				void register__updateFromParent_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateFromParent_void_callback = __method;
				}
				void register__notifyParent_COverlayContainer_COverlay_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyParent_COverlayContainer_COverlay_callback = __method;
				}
				void register__getDerivedLeft_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getDerivedLeft_void_callback = __method;
				}
				void register__getDerivedTop_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getDerivedTop_void_callback = __method;
				}
				void register__getRelativeWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getRelativeWidth_void_callback = __method;
				}
				void register__getRelativeHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getRelativeHeight_void_callback = __method;
				}
				void register__getClippingRegion_Rectangle_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getClippingRegion_Rectangle_callback = __method;
				}
				void register__notifyZOrder_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyZOrder_ev_uint16_callback = __method;
				}
				void register__notifyWorldTransforms_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyWorldTransforms_CMatrix4_callback = __method;
				}
				void register__notifyViewport_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyViewport_void_callback = __method;
				}
				void register__updateRenderQueue_CRenderQueue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__updateRenderQueue_CRenderQueue_callback = __method;
				}
				void register_visitRenderables_CVisitor_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_visitRenderables_CVisitor_ev_bool_callback = __method;
				}
				void register_getTypeName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTypeName_void_callback = __method;
				}
				void register_setCaption_EarthView_World_Core_DisplayString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCaption_EarthView_World_Core_DisplayString_callback = __method;
				}
				void register_getCaption_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCaption_void_callback = __method;
				}
				void register_setColour_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setColour_CColourValue_callback = __method;
				}
				void register_getColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getColour_void_callback = __method;
				}
				void register_setMetricsMode_GuiMetricsMode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMetricsMode_GuiMetricsMode_callback = __method;
				}
				void register_getMetricsMode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMetricsMode_void_callback = __method;
				}
				void register_setHorizontalAlignment_GuiHorizontalAlignment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setHorizontalAlignment_GuiHorizontalAlignment_callback = __method;
				}
				void register_getHorizontalAlignment_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHorizontalAlignment_void_callback = __method;
				}
				void register_setVerticalAlignment_GuiVerticalAlignment_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVerticalAlignment_GuiVerticalAlignment_callback = __method;
				}
				void register_getVerticalAlignment_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getVerticalAlignment_void_callback = __method;
				}
				void register_contains_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_contains_Real_Real_callback = __method;
				}
				void register_findElementAt_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findElementAt_Real_Real_callback = __method;
				}
				void register_isContainer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isContainer_void_callback = __method;
				}
				void register_isKeyEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isKeyEnabled_void_callback = __method;
				}
				void register_isCloneable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isCloneable_void_callback = __method;
				}
				void register_setCloneable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCloneable_ev_bool_callback = __method;
				}
				void register_copyFromTemplate_COverlayElement_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyFromTemplate_COverlayElement_callback = __method;
				}
				void register_ev_clone_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_ev_clone_EVString_callback = __method;
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
				virtual void updatePositionGeometry()
				{
					if (this->_gRef != NULL && this->m_updatePositionGeometry_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("updatePositionGeometry_void_callback");
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
						return this->COverlayElement::updatePositionGeometry();
					}
				}
				virtual void updateTextureGeometry()
				{
					if (this->_gRef != NULL && this->m_updateTextureGeometry_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("updateTextureGeometry_void_callback");
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
						return this->COverlayElement::updateTextureGeometry();
					}
				}
				virtual void addBaseParameters()
				{
					if (this->_gRef != NULL && this->m_addBaseParameters_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("addBaseParameters_void_callback");
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
						return this->COverlayElement::addBaseParameters();
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
						return this->COverlayElement::preRender(sm, rsys);
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
						return this->COverlayElement::postRender(sm, rsys);
					}
				}
				virtual void initialise()
				{
					if (this->_gRef != NULL && this->m_initialise_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("initialise_void_callback");
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
						return this->COverlayElement::initialise();
					}
				}
				virtual void show()
				{
					if (this->_gRef != NULL && this->m_show_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("show_void_callback");
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
						return this->COverlayElement::show();
					}
				}
				virtual void hide()
				{
					if (this->_gRef != NULL && this->m_hide_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("hide_void_callback");
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
						return this->COverlayElement::hide();
					}
				}
				virtual void setEnabled(ev_bool b)
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
						jboolean b_j = (jboolean) b;
						jmethodID __method = __gr->getMethod("setEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , b_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setEnabled(b);
					}
				}
				virtual EVString getMaterialName() const
				{
					if (this->_gRef != NULL && this->m_getMaterialName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMaterialName_void_callback");
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
						return this->COverlayElement::getMaterialName();
					}
				}
				virtual void setMaterialName(const EVString& matName)
				{
					if (this->_gRef != NULL && this->m_setMaterialName_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring matName_wch = matName;
						jstring matName_j = __env->NewString((const jchar*)matName_wch.getString(), matName_wch.size());
						jmethodID __method = __gr->getMethod("setMaterialName_EVString_callback");
						__env->CallVoidMethod(__obj, __method , matName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setMaterialName(matName);
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
						return this->COverlayElement::getMaterial();
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
						return this->COverlayElement::getWorldTransforms(xform);
					}
				}
				virtual void _positionsOutOfDate()
				{
					if (this->_gRef != NULL && this->m__positionsOutOfDate_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_positionsOutOfDate_void_callback");
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
						return this->COverlayElement::_positionsOutOfDate();
					}
				}
				virtual void _update()
				{
					if (this->_gRef != NULL && this->m__update_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_update_void_callback");
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
						return this->COverlayElement::_update();
					}
				}
				virtual void _updateFromParent()
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
						return this->COverlayElement::_updateFromParent();
					}
				}
				virtual void _notifyParent(EarthView::World::Graphic::COverlayContainer* ref_parent, EarthView::World::Graphic::COverlay* ref_overlay)
				{
					if (this->_gRef != NULL && this->m__notifyParent_COverlayContainer_COverlay_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jlong ref_overlay_j = (jlong) ref_overlay;
						jmethodID __method = __gr->getMethod("_notifyParent_COverlayContainer_COverlay_callback");
						__env->CallVoidMethod(__obj, __method , ref_parent_j, ref_overlay_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::_notifyParent(ref_parent, ref_overlay);
					}
				}
				virtual Real _getDerivedLeft()
				{
					if (this->_gRef != NULL && this->m__getDerivedLeft_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getDerivedLeft_void_callback");
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
						return this->COverlayElement::_getDerivedLeft();
					}
				}
				virtual Real _getDerivedTop()
				{
					if (this->_gRef != NULL && this->m__getDerivedTop_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getDerivedTop_void_callback");
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
						return this->COverlayElement::_getDerivedTop();
					}
				}
				virtual Real _getRelativeWidth()
				{
					if (this->_gRef != NULL && this->m__getRelativeWidth_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getRelativeWidth_void_callback");
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
						return this->COverlayElement::_getRelativeWidth();
					}
				}
				virtual Real _getRelativeHeight()
				{
					if (this->_gRef != NULL && this->m__getRelativeHeight_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_getRelativeHeight_void_callback");
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
						return this->COverlayElement::_getRelativeHeight();
					}
				}
				virtual void _getClippingRegion(EarthView::World::Graphic::Rectangle& clippingRegion)
				{
					if (this->_gRef != NULL && this->m__getClippingRegion_Rectangle_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong clippingRegion_j = (jlong) &clippingRegion;
						jmethodID __method = __gr->getMethod("_getClippingRegion_Rectangle_callback");
						__env->CallVoidMethod(__obj, __method , clippingRegion_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::_getClippingRegion(clippingRegion);
					}
				}
				virtual ev_uint16 _notifyZOrder(ev_uint16 newZOrder)
				{
					if (this->_gRef != NULL && this->m__notifyZOrder_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint newZOrder_j = (jint) newZOrder;
						jmethodID __method = __gr->getMethod("_notifyZOrder_ev_uint16_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , newZOrder_j);
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
						return this->COverlayElement::_notifyZOrder(newZOrder);
					}
				}
				virtual void _notifyWorldTransforms(const EarthView::World::Spatial::Math::CMatrix4& xform)
				{
					if (this->_gRef != NULL && this->m__notifyWorldTransforms_CMatrix4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong xform_j = (jlong) &xform;
						jmethodID __method = __gr->getMethod("_notifyWorldTransforms_CMatrix4_callback");
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
						return this->COverlayElement::_notifyWorldTransforms(xform);
					}
				}
				virtual void _notifyViewport()
				{
					if (this->_gRef != NULL && this->m__notifyViewport_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_notifyViewport_void_callback");
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
						return this->COverlayElement::_notifyViewport();
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
						return this->COverlayElement::_updateRenderQueue(queue);
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
						return this->COverlayElement::visitRenderables(visitor, debugRenderables);
					}
				}
				virtual EVString getTypeName() const
				{
					if (this->_gRef != NULL && this->m_getTypeName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getTypeName_void_callback");
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
						return this->COverlayElement::getTypeName();
					}
				}
				virtual void setCaption(const EarthView::World::Core::DisplayString& text)
				{
					if (this->_gRef != NULL && this->m_setCaption_EarthView_World_Core_DisplayString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring text_wch = text;
						jstring text_j = __env->NewString((const jchar*)text_wch.getString(), text_wch.size());
						jmethodID __method = __gr->getMethod("setCaption_EarthView_World_Core_DisplayString_callback");
						__env->CallVoidMethod(__obj, __method , text_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setCaption(text);
					}
				}
				virtual EarthView::World::Core::DisplayString getCaption() const
				{
					if (this->_gRef != NULL && this->m_getCaption_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getCaption_void_callback");
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
						EarthView::World::Core::DisplayString __values1 = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						#else
						const ev_wchar* values_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
						EarthView::World::Core::DisplayString __values1 = values_ch;
						__env->ReleaseStringChars(__values1_j,(const jchar *)values_ch);
						#endif
						return __values1;
					}
					else
					{
						return this->COverlayElement::getCaption();
					}
				}
				virtual void setColour(const EarthView::World::Graphic::CColourValue& col)
				{
					if (this->_gRef != NULL && this->m_setColour_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong col_j = (jlong) &col;
						jmethodID __method = __gr->getMethod("setColour_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , col_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setColour(col);
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getColour() const
				{
					if (this->_gRef != NULL && this->m_getColour_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getColour_void_callback");
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
						return this->COverlayElement::getColour();
					}
				}
				virtual void setMetricsMode(EarthView::World::Graphic::GuiMetricsMode gmm)
				{
					if (this->_gRef != NULL && this->m_setMetricsMode_GuiMetricsMode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint gmm_j = (jint) gmm;
						jmethodID __method = __gr->getMethod("setMetricsMode_GuiMetricsMode_callback");
						__env->CallVoidMethod(__obj, __method , gmm_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setMetricsMode(gmm);
					}
				}
				virtual EarthView::World::Graphic::GuiMetricsMode getMetricsMode() const
				{
					if (this->_gRef != NULL && this->m_getMetricsMode_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMetricsMode_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::GuiMetricsMode __values1 = (EarthView::World::Graphic::GuiMetricsMode) __values1_j;
						return __values1;
					}
					else
					{
						return this->COverlayElement::getMetricsMode();
					}
				}
				virtual void setHorizontalAlignment(EarthView::World::Graphic::GuiHorizontalAlignment gha)
				{
					if (this->_gRef != NULL && this->m_setHorizontalAlignment_GuiHorizontalAlignment_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint gha_j = (jint) gha;
						jmethodID __method = __gr->getMethod("setHorizontalAlignment_GuiHorizontalAlignment_callback");
						__env->CallVoidMethod(__obj, __method , gha_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setHorizontalAlignment(gha);
					}
				}
				virtual EarthView::World::Graphic::GuiHorizontalAlignment getHorizontalAlignment() const
				{
					if (this->_gRef != NULL && this->m_getHorizontalAlignment_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getHorizontalAlignment_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::GuiHorizontalAlignment __values1 = (EarthView::World::Graphic::GuiHorizontalAlignment) __values1_j;
						return __values1;
					}
					else
					{
						return this->COverlayElement::getHorizontalAlignment();
					}
				}
				virtual void setVerticalAlignment(EarthView::World::Graphic::GuiVerticalAlignment gva)
				{
					if (this->_gRef != NULL && this->m_setVerticalAlignment_GuiVerticalAlignment_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint gva_j = (jint) gva;
						jmethodID __method = __gr->getMethod("setVerticalAlignment_GuiVerticalAlignment_callback");
						__env->CallVoidMethod(__obj, __method , gva_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setVerticalAlignment(gva);
					}
				}
				virtual EarthView::World::Graphic::GuiVerticalAlignment getVerticalAlignment() const
				{
					if (this->_gRef != NULL && this->m_getVerticalAlignment_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getVerticalAlignment_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::GuiVerticalAlignment __values1 = (EarthView::World::Graphic::GuiVerticalAlignment) __values1_j;
						return __values1;
					}
					else
					{
						return this->COverlayElement::getVerticalAlignment();
					}
				}
				virtual ev_bool contains(Real x, Real y) const
				{
					if (this->_gRef != NULL && this->m_contains_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("contains_Real_Real_callback");
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
						return this->COverlayElement::contains(x, y);
					}
				}
				virtual EarthView::World::Graphic::COverlayElement* findElementAt(Real x, Real y)
				{
					if (this->_gRef != NULL && this->m_findElementAt_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("findElementAt_Real_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , x_j, y_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::COverlayElement *__values1 = (EarthView::World::Graphic::COverlayElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COverlayElement::findElementAt(x, y);
					}
				}
				virtual ev_bool isContainer() const
				{
					if (this->_gRef != NULL && this->m_isContainer_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isContainer_void_callback");
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
						return this->COverlayElement::isContainer();
					}
				}
				virtual ev_bool isKeyEnabled() const
				{
					if (this->_gRef != NULL && this->m_isKeyEnabled_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isKeyEnabled_void_callback");
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
						return this->COverlayElement::isKeyEnabled();
					}
				}
				virtual ev_bool isCloneable() const
				{
					if (this->_gRef != NULL && this->m_isCloneable_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isCloneable_void_callback");
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
						return this->COverlayElement::isCloneable();
					}
				}
				virtual void setCloneable(ev_bool c)
				{
					if (this->_gRef != NULL && this->m_setCloneable_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean c_j = (jboolean) c;
						jmethodID __method = __gr->getMethod("setCloneable_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , c_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::setCloneable(c);
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
						return this->COverlayElement::getSquaredViewDepth(cam);
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
						return this->COverlayElement::getLights();
					}
				}
				virtual void copyFromTemplate(EarthView::World::Graphic::COverlayElement* ref_templateOverlay)
				{
					if (this->_gRef != NULL && this->m_copyFromTemplate_COverlayElement_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_templateOverlay_j = (jlong) ref_templateOverlay;
						jmethodID __method = __gr->getMethod("copyFromTemplate_COverlayElement_callback");
						__env->CallVoidMethod(__obj, __method , ref_templateOverlay_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElement::copyFromTemplate(ref_templateOverlay);
					}
				}
				virtual EarthView::World::Graphic::COverlayElement* clone(const EVString& instanceName)
				{
					if (this->_gRef != NULL && this->m_ev_clone_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring instanceName_wch = instanceName;
						jstring instanceName_j = __env->NewString((const jchar*)instanceName_wch.getString(), instanceName_wch.size());
						jmethodID __method = __gr->getMethod("ev_clone_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , instanceName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::COverlayElement *__values1 = (EarthView::World::Graphic::COverlayElement*) __values1_j;
						return __values1;
					}
					else
					{
						return this->COverlayElement::clone(instanceName);
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
						return this->COverlayElement::getTechnique();
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
						return this->COverlayElement::getRenderOperation(op);
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
						return this->COverlayElement::getNumWorldTransforms();
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
						return this->COverlayElement::getCastsShadows();
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
						return this->COverlayElement::_updateCustomGpuParameter(constantEntry, params);
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
						return this->COverlayElement::setPolygonModeOverrideable(override);
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
						return this->COverlayElement::getPolygonModeOverrideable();
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
						return this->COverlayElement::setCustomAmbient(ambient);
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
						return this->COverlayElement::getCustomAmbient();
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
						return this->COverlayElement::getCustomAmbientEnabled();
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
						return this->COverlayElement::setCustomAmbientEnabled(enabled);
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
						return this->COverlayElement::getMovableObject();
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
						return this->COverlayElement::addListener(ref_listener);
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
						return this->COverlayElement::removeListener(listener);
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
						return this->COverlayElement::existListener(listener);
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
						return this->COverlayElement::getListenerCount();
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
						return this->COverlayElement::getListener(index);
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
						return this->COverlayElement::getRenderSystemData();
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
						return this->COverlayElement::setRenderSystemData(ref_val);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOverlayElementProxy);
			class JCOverlayElementInternalStringInterfaceProxy : public EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface
			{
			 private:
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCOverlayElementInternalStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlayElementInternalStringInterface(pList)
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
				void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_EVString_callback = __method;
				}
				void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameterList_CommonStringPairList_callback = __method;
				}
				void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParameter_EVString_callback = __method;
				}
				void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyParametersTo_CStringInterface_callback = __method;
				}
				virtual ev_bool setParameter(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
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
						return this->COverlayElementInternalStringInterface::setParameter(name, value);
					}
				}
				virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jboolean readOnly_j = (jboolean) readOnly;
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
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
						return this->COverlayElementInternalStringInterface::setParameter(name, readOnly, enable);
					}
				}
				virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong paramList_j = (jlong) &paramList;
						jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , paramList_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElementInternalStringInterface::setParameterList(paramList);
					}
				}
				virtual EVString getParameter(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->COverlayElementInternalStringInterface::getParameter(name);
					}
				}
				virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
				{
					if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong dest_j = (jlong) dest;
						jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
						__env->CallVoidMethod(__obj, __method , dest_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
					}
					else
					{
						return this->COverlayElementInternalStringInterface::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOverlayElementInternalStringInterfaceProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_00024OverlayElementInternalStringInterface_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementInternalStringInterfaceProxy *pObjectX = (JCOverlayElementInternalStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_00024OverlayElementInternalStringInterface_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementInternalStringInterfaceProxy *pObjectX = (JCOverlayElementInternalStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_00024OverlayElementInternalStringInterface_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementInternalStringInterfaceProxy *pObjectX = (JCOverlayElementInternalStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_00024OverlayElementInternalStringInterface_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementInternalStringInterfaceProxy *pObjectX = (JCOverlayElementInternalStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParameter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_00024OverlayElementInternalStringInterface_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementInternalStringInterfaceProxy *pObjectX = (JCOverlayElementInternalStringInterfaceProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getStringInterfacePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement::COverlayElementInternalStringInterface* __values1 = pObjectX->getStringInterfacePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_updatePositionGeometry_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::updatePositionGeometry();
				}
				else
				{
					pObjectX->updatePositionGeometry();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1updatePositionGeometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updatePositionGeometry_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updatePositionGeometry_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_updatePositionGeometry_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::updatePositionGeometry();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_updateTextureGeometry_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::updateTextureGeometry();
				}
				else
				{
					pObjectX->updateTextureGeometry();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1updateTextureGeometry_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updateTextureGeometry_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updateTextureGeometry_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_updateTextureGeometry_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::updateTextureGeometry();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_addBaseParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::addBaseParameters();
				}
				else
				{
					pObjectX->addBaseParameters();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1addBaseParameters_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addBaseParameters_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addBaseParameters_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_addBaseParameters_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::addBaseParameters();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_preRender_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::preRender(sm, rsys);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1preRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_preRender_1CSceneManager_1CRenderSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::preRender(sm, rsys);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_postRender_1CSceneManager_1CRenderSystem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::postRender(sm, rsys);
				}
				else
				{
					pObjectX->postRender(sm, rsys);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1postRender_1CSceneManager_1CRenderSystem(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_postRender_1CSceneManager_1CRenderSystem_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::postRender(sm, rsys);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_initialise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::initialise();
				}
				else
				{
					pObjectX->initialise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1initialise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_initialise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::initialise();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_show_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::show();
				}
				else
				{
					pObjectX->show();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1show_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_show_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"show_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_show_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::show();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_hide_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::hide();
				}
				else
				{
					pObjectX->hide();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1hide_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hide_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hide_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_hide_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::hide();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->isVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				ev_bool b = (ev_bool) b_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setEnabled(b);
				}
				else
				{
					pObjectX->setEnabled(b);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				ev_bool b = (ev_bool) b_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setEnabled(b);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setDimensions_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
			{
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->setDimensions(width, height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setPosition_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j)
			{
				Real left = (Real) left_j;
				Real top = (Real) top_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->setPosition(left, top);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setWidth_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j)
			{
				Real width = (Real) width_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->setWidth(width);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->getWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
			{
				Real height = (Real) height_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->setHeight(height);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->getHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setLeft_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j)
			{
				Real left = (Real) left_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->setLeft(left);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement_getLeft_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->getLeft();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setTop_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble Top_j)
			{
				Real Top = (Real) Top_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->setTop(Top);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement_getTop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->getTop();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getLeft_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->_getLeft();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getTop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->_getTop();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->_getWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->_getHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1setLeft_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j)
			{
				Real left = (Real) left_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->_setLeft(left);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1setTop_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble top_j)
			{
				Real top = (Real) top_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->_setTop(top);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1setWidth_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j)
			{
				Real width = (Real) width_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->_setWidth(width);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1setHeight_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble height_j)
			{
				Real height = (Real) height_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->_setHeight(height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1setPosition_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j)
			{
				Real left = (Real) left_j;
				Real top = (Real) top_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->_setPosition(left, top);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1setDimensions_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
			{
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->_setDimensions(width, height);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElement_getMaterialName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getMaterialName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getMaterialName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getMaterialName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaterialName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaterialName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElement_getMaterialName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getMaterialName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setMaterialName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matName_j)
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
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setMaterialName(matName);
				}
				else
				{
					pObjectX->setMaterialName(matName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setMaterialName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaterialName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaterialName_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setMaterialName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matName_j)
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
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setMaterialName(matName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getMaterial();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getMaterial_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getMaterial();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_getWorldTransforms_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::getWorldTransforms(xform);
				}
				else
				{
					pObjectX->getWorldTransforms(xform);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getWorldTransforms_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_getWorldTransforms_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::getWorldTransforms(xform);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1positionsOutOfDate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_positionsOutOfDate();
				}
				else
				{
					pObjectX->_positionsOutOfDate();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1positionsOutOfDate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__positionsOutOfDate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_positionsOutOfDate_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1positionsOutOfDate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_positionsOutOfDate();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_update();
				}
				else
				{
					pObjectX->_update();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__update_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_update_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1update_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_update();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1updateFromParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_updateFromParent();
				}
				else
				{
					pObjectX->_updateFromParent();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1updateFromParent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1updateFromParent_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_updateFromParent();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyParent_1COverlayContainer_1COverlay(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j, jlong ref_overlay_j)
			{
				EarthView::World::Graphic::COverlayContainer *ref_parent = (EarthView::World::Graphic::COverlayContainer*) ref_parent_j;
				EarthView::World::Graphic::COverlay *ref_overlay = (EarthView::World::Graphic::COverlay*) ref_overlay_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_notifyParent(ref_parent, ref_overlay);
				}
				else
				{
					pObjectX->_notifyParent(ref_parent, ref_overlay);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1notifyParent_1COverlayContainer_1COverlay(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyParent_COverlayContainer_COverlay_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyParent_COverlayContainer_COverlay_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyParent_1COverlayContainer_1COverlay_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j, jlong ref_overlay_j)
			{
				EarthView::World::Graphic::COverlayContainer *ref_parent = (EarthView::World::Graphic::COverlayContainer*) ref_parent_j;
				EarthView::World::Graphic::COverlay *ref_overlay = (EarthView::World::Graphic::COverlay*) ref_overlay_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_notifyParent(ref_parent, ref_overlay);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getDerivedLeft_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getDerivedLeft();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->_getDerivedLeft();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1getDerivedLeft_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getDerivedLeft_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getDerivedLeft_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getDerivedLeft_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getDerivedLeft();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getDerivedTop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getDerivedTop();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->_getDerivedTop();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1getDerivedTop_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getDerivedTop_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getDerivedTop_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getDerivedTop_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getDerivedTop();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getRelativeWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getRelativeWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->_getRelativeWidth();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1getRelativeWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getRelativeWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getRelativeWidth_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getRelativeWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getRelativeWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getRelativeHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getRelativeHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->_getRelativeHeight();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1getRelativeHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getRelativeHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getRelativeHeight_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement__1getRelativeHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_getRelativeHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1getClippingRegion_1Rectangle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clippingRegion_j)
			{
				EarthView::World::Graphic::Rectangle &clippingRegion = *(EarthView::World::Graphic::Rectangle*) clippingRegion_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_getClippingRegion(clippingRegion);
				}
				else
				{
					pObjectX->_getClippingRegion(clippingRegion);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1getClippingRegion_1Rectangle(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getClippingRegion_Rectangle_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getClippingRegion_Rectangle_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1getClippingRegion_1Rectangle_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clippingRegion_j)
			{
				EarthView::World::Graphic::Rectangle &clippingRegion = *(EarthView::World::Graphic::Rectangle*) clippingRegion_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_getClippingRegion(clippingRegion);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyZOrder_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint newZOrder_j)
			{
				ev_uint16 newZOrder = (ev_uint16) newZOrder_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_notifyZOrder(newZOrder);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->_notifyZOrder(newZOrder);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1notifyZOrder_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyZOrder_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyZOrder_ev_uint16_callback", "(I)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyZOrder_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint newZOrder_j)
			{
				ev_uint16 newZOrder = (ev_uint16) newZOrder_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::_notifyZOrder(newZOrder);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyWorldTransforms_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &xform = *(EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_notifyWorldTransforms(xform);
				}
				else
				{
					pObjectX->_notifyWorldTransforms(xform);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1notifyWorldTransforms_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyWorldTransforms_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyWorldTransforms_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyWorldTransforms_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &xform = *(EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_notifyWorldTransforms(xform);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyViewport_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_notifyViewport();
				}
				else
				{
					pObjectX->_notifyViewport();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1notifyViewport_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyViewport_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyViewport_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1notifyViewport_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_notifyViewport();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1updateRenderQueue_1CRenderQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
			{
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::_updateRenderQueue(queue);
				}
				else
				{
					pObjectX->_updateRenderQueue(queue);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1updateRenderQueue_1CRenderQueue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1updateRenderQueue_1CRenderQueue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong queue_j)
			{
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::_updateRenderQueue(queue);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_visitRenderables_1CVisitor_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j, jboolean debugRenderables_j)
			{
				EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
				ev_bool debugRenderables = (ev_bool) debugRenderables_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::visitRenderables(visitor, debugRenderables);
				}
				else
				{
					pObjectX->visitRenderables(visitor, debugRenderables);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1visitRenderables_1CVisitor_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_visitRenderables_1CVisitor_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j, jboolean debugRenderables_j)
			{
				EarthView::World::Graphic::CRenderable::CVisitor *visitor = (EarthView::World::Graphic::CRenderable::CVisitor*) visitor_j;
				ev_bool debugRenderables = (ev_bool) debugRenderables_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::visitRenderables(visitor, debugRenderables);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElement_getTypeName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getTypeName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getTypeName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTypeName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTypeName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElement_getTypeName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getTypeName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setCaption_1EarthView_1World_1Core_1DisplayString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
				const EarthView::World::Core::DisplayString text = text_ch;
				__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
				#else
				const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
				const EarthView::World::Core::DisplayString text = text_ch;
				__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
				#endif
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setCaption(text);
				}
				else
				{
					pObjectX->setCaption(text);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setCaption_1EarthView_1World_1Core_1DisplayString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCaption_EarthView_World_Core_DisplayString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCaption_EarthView_World_Core_DisplayString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setCaption_1EarthView_1World_1Core_1DisplayString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring text_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* text_ch = (const ev_char*)__env->GetStringUTFChars(text_j,JNI_FALSE);
				const EarthView::World::Core::DisplayString text = text_ch;
				__env->ReleaseStringUTFChars(text_j, (const char *)text_ch);
				#else
				const ev_wchar* text_ch = (const ev_wchar*)__env->GetStringChars(text_j,JNI_FALSE);
				const EarthView::World::Core::DisplayString text = text_ch;
				__env->ReleaseStringChars(text_j, (const jchar *)text_ch);
				#endif
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setCaption(text);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElement_getCaption_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EarthView::World::Core::DisplayString __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getCaption();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EarthView::World::Core::DisplayString __values1 = pObjectX->getCaption();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getCaption_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCaption_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCaption_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_OverlayElement_getCaption_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Core::DisplayString __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getCaption();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong col_j)
			{
				const EarthView::World::Graphic::CColourValue &col = *(EarthView::World::Graphic::CColourValue*) col_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setColour(col);
				}
				else
				{
					pObjectX->setColour(col);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setColour_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setColour_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setColour_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong col_j)
			{
				const EarthView::World::Graphic::CColourValue &col = *(EarthView::World::Graphic::CColourValue*) col_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setColour(col);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getColour();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getColour_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getColour_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setMetricsMode_1GuiMetricsMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gmm_j)
			{
				EarthView::World::Graphic::GuiMetricsMode gmm = (EarthView::World::Graphic::GuiMetricsMode) gmm_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setMetricsMode(gmm);
				}
				else
				{
					pObjectX->setMetricsMode(gmm);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setMetricsMode_1GuiMetricsMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMetricsMode_GuiMetricsMode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMetricsMode_GuiMetricsMode_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setMetricsMode_1GuiMetricsMode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gmm_j)
			{
				EarthView::World::Graphic::GuiMetricsMode gmm = (EarthView::World::Graphic::GuiMetricsMode) gmm_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setMetricsMode(gmm);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement_getMetricsMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EarthView::World::Graphic::GuiMetricsMode __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getMetricsMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::GuiMetricsMode __values1 = pObjectX->getMetricsMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getMetricsMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMetricsMode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMetricsMode_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement_getMetricsMode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Graphic::GuiMetricsMode __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getMetricsMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setHorizontalAlignment_1GuiHorizontalAlignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gha_j)
			{
				EarthView::World::Graphic::GuiHorizontalAlignment gha = (EarthView::World::Graphic::GuiHorizontalAlignment) gha_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setHorizontalAlignment(gha);
				}
				else
				{
					pObjectX->setHorizontalAlignment(gha);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setHorizontalAlignment_1GuiHorizontalAlignment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setHorizontalAlignment_GuiHorizontalAlignment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setHorizontalAlignment_GuiHorizontalAlignment_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setHorizontalAlignment_1GuiHorizontalAlignment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gha_j)
			{
				EarthView::World::Graphic::GuiHorizontalAlignment gha = (EarthView::World::Graphic::GuiHorizontalAlignment) gha_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setHorizontalAlignment(gha);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement_getHorizontalAlignment_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EarthView::World::Graphic::GuiHorizontalAlignment __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getHorizontalAlignment();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::GuiHorizontalAlignment __values1 = pObjectX->getHorizontalAlignment();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getHorizontalAlignment_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHorizontalAlignment_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHorizontalAlignment_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement_getHorizontalAlignment_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Graphic::GuiHorizontalAlignment __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getHorizontalAlignment();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setVerticalAlignment_1GuiVerticalAlignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gva_j)
			{
				EarthView::World::Graphic::GuiVerticalAlignment gva = (EarthView::World::Graphic::GuiVerticalAlignment) gva_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setVerticalAlignment(gva);
				}
				else
				{
					pObjectX->setVerticalAlignment(gva);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setVerticalAlignment_1GuiVerticalAlignment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVerticalAlignment_GuiVerticalAlignment_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVerticalAlignment_GuiVerticalAlignment_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setVerticalAlignment_1GuiVerticalAlignment_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint gva_j)
			{
				EarthView::World::Graphic::GuiVerticalAlignment gva = (EarthView::World::Graphic::GuiVerticalAlignment) gva_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setVerticalAlignment(gva);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement_getVerticalAlignment_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EarthView::World::Graphic::GuiVerticalAlignment __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getVerticalAlignment();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::GuiVerticalAlignment __values1 = pObjectX->getVerticalAlignment();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getVerticalAlignment_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getVerticalAlignment_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getVerticalAlignment_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement_getVerticalAlignment_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Graphic::GuiVerticalAlignment __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getVerticalAlignment();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_contains_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::contains(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->contains(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1contains_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_contains_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"contains_Real_Real_callback", "(DD)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_contains_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::contains(x, y);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_findElementAt_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::findElementAt(x, y);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->findElementAt(x, y);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1findElementAt_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_findElementAt_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"findElementAt_Real_Real_callback", "(DD)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_findElementAt_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::findElementAt(x, y);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isContainer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::isContainer();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isContainer();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1isContainer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isContainer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isContainer_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isContainer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::isContainer();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isKeyEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::isKeyEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isKeyEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1isKeyEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isKeyEnabled_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isKeyEnabled_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isKeyEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::isKeyEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isCloneable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::isCloneable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isCloneable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1isCloneable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isCloneable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isCloneable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_OverlayElement_isCloneable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::isCloneable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setCloneable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean c_j)
			{
				ev_bool c = (ev_bool) c_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::setCloneable(c);
				}
				else
				{
					pObjectX->setCloneable(c);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setCloneable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCloneable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCloneable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_setCloneable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean c_j)
			{
				ev_bool c = (ev_bool) c_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::setCloneable(c);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement__1setParent_1COverlayContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_parent_j)
			{
				EarthView::World::Graphic::COverlayContainer *ref_parent = (EarthView::World::Graphic::COverlayContainer*) ref_parent_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->_setParent(ref_parent);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_OverlayElement_getZOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getZOrder();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement_getSquaredViewDepth_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getSquaredViewDepth(cam);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getSquaredViewDepth_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_OverlayElement_getSquaredViewDepth_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getSquaredViewDepth(cam);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getLights_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getLights();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getLights_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getLights_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				const EarthView::World::Graphic::LightList& __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::getLights();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_copyFromTemplate_1COverlayElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_templateOverlay_j)
			{
				EarthView::World::Graphic::COverlayElement *ref_templateOverlay = (EarthView::World::Graphic::COverlayElement*) ref_templateOverlay_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					pObjectX->EarthView::World::Graphic::COverlayElement::copyFromTemplate(ref_templateOverlay);
				}
				else
				{
					pObjectX->copyFromTemplate(ref_templateOverlay);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1copyFromTemplate_1COverlayElement(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyFromTemplate_COverlayElement_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyFromTemplate_COverlayElement_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_copyFromTemplate_1COverlayElement_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_templateOverlay_j)
			{
				EarthView::World::Graphic::COverlayElement *ref_templateOverlay = (EarthView::World::Graphic::COverlayElement*) ref_templateOverlay_j;
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::COverlayElement::copyFromTemplate(ref_templateOverlay);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_ev_1clone_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayElementProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::clone(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->clone(instanceName);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1ev_1clone_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_ev_clone_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_ev_1clone_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring instanceName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* instanceName_ch = (const ev_char*)__env->GetStringUTFChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringUTFChars(instanceName_j, (const char *)instanceName_ch);
				#else
				const ev_wchar* instanceName_ch = (const ev_wchar*)__env->GetStringChars(instanceName_j,JNI_FALSE);
				const EVString instanceName = instanceName_ch;
				__env->ReleaseStringChars(instanceName_j, (const jchar *)instanceName_ch);
				#endif
				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlayElement::clone(instanceName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_OverlayElement_getSourceTemplate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlayElement *pObjectX = (EarthView::World::Graphic::COverlayElement*) pObjXXXX;
				const EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->getSourceTemplate();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getTechnique_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getRenderOperation_1CRenderOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getNumWorldTransforms_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getCastsShadows_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1_1updateCustomGpuParameter_1CAutoConstantEntry_1CGpuProgramParameters(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setPolygonModeOverrideable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getPolygonModeOverrideable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setCustomAmbient_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getCustomAmbient_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getCustomAmbientEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setCustomAmbientEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getMovableObject_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1addListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1removeListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1existListener_1CRenderableListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getListenerCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getListener_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1getRenderSystemData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_OverlayElement_register_1setRenderSystemData_1CRenderSystemData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayElementProxy *pObjectX = (JCOverlayElementProxy*) pObjXXXX;
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
		}
	}
}
