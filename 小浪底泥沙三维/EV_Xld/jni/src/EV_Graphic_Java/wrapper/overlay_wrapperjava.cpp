/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/overlay.h"
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
			class JCOverlayProxy : public EarthView::World::Graphic::COverlay
			{
			 private:
				EarthView::World::Core::ev_string m_findElementAt_Real_Real_callback;
			public:
				JCOverlayProxy(EarthView::World::Core::CNameValuePairList *pList) : COverlay(pList)
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
				void register_findElementAt_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_findElementAt_Real_Real_callback = __method;
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
						return this->COverlay::findElementAt(x, y);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCOverlayProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_push_1back_1COverlayContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::COverlayContainer *&ref_t = *(EarthView::World::Graphic::COverlayContainer**) ref_t_j;
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_push_1front_1COverlayContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::COverlayContainer *&ref_t = *(EarthView::World::Graphic::COverlayContainer**) ref_t_j;
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->push_front(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer*& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_insert_1ev_1uint32_1COverlayContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::COverlayContainer *&ref_t = *(EarthView::World::Graphic::COverlayContainer**) ref_t_j;
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_remove_1COverlayContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::COverlayContainer *&t = *(EarthView::World::Graphic::COverlayContainer**) t_j;
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->remove(t);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024OverlayContainerList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::OverlayContainerList *pObjectX = (EarthView::World::Graphic::COverlay::OverlayContainerList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_getChild_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer* __values1 = pObjectX->getChild(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_getOwner_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				const EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getOwner();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_setOwner_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_sm_j)
			{
				EarthView::World::Graphic::CSceneManager *ref_sm = (EarthView::World::Graphic::CSceneManager*) ref_sm_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->setOwner(ref_sm);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_setZOrder_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint zorder_j)
			{
				ev_uint16 zorder = (ev_uint16) zorder_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->setZOrder(zorder);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Overlay_getZOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getZOrder();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Overlay_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				ev_bool __values1 = pObjectX->isVisible();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Overlay_isInitialised_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				ev_bool __values1 = pObjectX->isInitialised();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_show_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->show();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_hide_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->hide();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_add2D_1COverlayContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cont_j)
			{
				EarthView::World::Graphic::COverlayContainer *ref_cont = (EarthView::World::Graphic::COverlayContainer*) ref_cont_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->add2D(ref_cont);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_remove2D_1COverlayContainer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cont_j)
			{
				EarthView::World::Graphic::COverlayContainer *cont = (EarthView::World::Graphic::COverlayContainer*) cont_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->remove2D(cont);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_add3D_1CSceneNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CSceneNode *ref_node = (EarthView::World::Graphic::CSceneNode*) ref_node_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->add3D(ref_node);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_remove3D_1CSceneNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				EarthView::World::Graphic::CSceneNode *node = (EarthView::World::Graphic::CSceneNode*) node_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->remove3D(node);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_setScroll_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->setScroll(x, y);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Overlay_getScrollX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				Real __values1 = pObjectX->getScrollX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Overlay_getScrollY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				Real __values1 = pObjectX->getScrollY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_scroll_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble xoff_j, jdouble yoff_j)
			{
				Real xoff = (Real) xoff_j;
				Real yoff = (Real) yoff_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->scroll(xoff, yoff);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_setRotate_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->setRotate(angle);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_getRotate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getRotate();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_rotate_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->rotate(angle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_setScale_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->setScale(x, y);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Overlay_getScaleX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				Real __values1 = pObjectX->getScaleX();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Overlay_getScaleY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				Real __values1 = pObjectX->getScaleY();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay__1getWorldTransforms_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xform_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 *xform = (EarthView::World::Spatial::Math::CMatrix4*) xform_j;
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->_getWorldTransforms(xform);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay__1findVisibleObjects_1CCamera_1CRenderQueue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j, jlong queue_j)
			{
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderQueue *queue = (EarthView::World::Graphic::CRenderQueue*) queue_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->_findVisibleObjects(cam, queue);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_findElementAt_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCOverlayProxy))
				{
					EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlay::findElementAt(x, y);
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_register_1findElementAt_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCOverlayProxy *pObjectX = (JCOverlayProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_findElementAt_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				EarthView::World::Graphic::COverlayElement* __values1 = pObjectX->EarthView::World::Graphic::COverlay::findElementAt(x, y);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Overlay_00024Overlay2DElementsIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *pObjectX = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay_00024Overlay2DElementsIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *pObjectX = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024Overlay2DElementsIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *pObjectX = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024Overlay2DElementsIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *pObjectX = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024Overlay2DElementsIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *pObjectX = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_00024Overlay2DElementsIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *pObjectX = (EarthView::World::Graphic::COverlay::Overlay2DElementsIterator*) pObjXXXX;
				EarthView::World::Graphic::COverlayContainer* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_get2DElementsIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator __values1 = pObjectX->get2DElementsIterator();
				EarthView::World::Graphic::COverlay::Overlay2DElementsIterator *returnvalues = new EarthView::World::Graphic::COverlay::Overlay2DElementsIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Overlay_getOrigin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				const EVString& __values1 = pObjectX->getOrigin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Overlay__1notifyOrigin_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring origin_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* origin_ch = (const ev_char*)__env->GetStringUTFChars(origin_j,JNI_FALSE);
				const EVString origin = origin_ch;
				__env->ReleaseStringUTFChars(origin_j, (const char *)origin_ch);
				#else
				const ev_wchar* origin_ch = (const ev_wchar*)__env->GetStringChars(origin_j,JNI_FALSE);
				const EVString origin = origin_ch;
				__env->ReleaseStringChars(origin_j, (const jchar *)origin_ch);
				#endif
				EarthView::World::Graphic::COverlay *pObjectX = (EarthView::World::Graphic::COverlay*) pObjXXXX;
				pObjectX->_notifyOrigin(origin);
			}
		}
	}
}
