/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackingitem.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
		}
		namespace Spatial
		{
			namespace Display
			{
			}
			namespace Geometry
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVTrackingItemUnitHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TIU_MapUnit,
						TIU_PixelUnit
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVTrackingItemTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TIT_Unknown,
						TIT_GroupItem,
						TIT_ImageItem,
						TIT_TextItem,
						TIT_GeometryItem,
						TIT_GeomItemEx,
						TIT_GeomsItem,
						TIT_PolylineShape,
						TIT_PolygonShape,
						TIT_RectangleShape,
						TIT_EllipseShape
					};
					jintArray array = __env->NewIntArray(11);
					__env->SetIntArrayRegion(array, 0, 11, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVTrackingItemStateHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TIS_None,
						TIS_MouseOver,
						TIS_Selected
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVTrackingItemFlagsHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TIF_NoFlag,
						TIF_Selectable,
						TIF_Hoverable,
						TIF_Draggable
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVTrackingItemPositionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TIP_LeftTop,
						TIP_RightTop,
						TIP_RightBottom,
						TIP_LeftBottom,
						TIP_Center
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVCacheModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CM_NoCache,
						CM_ImageCache,
						CM_QuickImageCache
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVTrackingItemChangeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TIC_VisibleChange,
						TIC_SelectedChange,
						TIC_PositionChange,
						TIC_TransparentChange,
						TIC_RotationChange,
						TIC_ScaleChange
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVTransformDirectionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TD_ItemToWindow,
						TD_ItemToMap,
						TD_ItemToItemDevice,
						TD_WindowToItem,
						TD_WindowToMap,
						TD_WindowToItemDevice,
						TD_MapToItem,
						TD_MapToWindow,
						TD_MapToItemDevice,
						TD_ItemDeviceToItem,
						TD_ItemDeviceToWindow,
						TD_ItemDeviceToMap
					};
					jintArray array = __env->NewIntArray(12);
					__env->SetIntArrayRegion(array, 0, 12, enum_values);
					return array;
				}
				class JCTrackingItemProxy : public EarthView::World::Spatial2D::Controls::CTrackingItem
				{
				 private:
					EarthView::World::Core::ev_string m_boundingRect_void_callback;
					EarthView::World::Core::ev_string m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback;
					EarthView::World::Core::ev_string m_isContains_ev_real64_ev_real64_callback;
					EarthView::World::Core::ev_string m_type_void_callback;
				public:
					JCTrackingItemProxy(EarthView::World::Core::CNameValuePairList *pList) : CTrackingItem(pList)
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
				protected:
					C_DISABLE_COPY(JCTrackingItemProxy)
				public:
					void register_boundingRect_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_boundingRect_void_callback = __method;
					}
					void register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback = __method;
					}
					void register_isContains_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_isContains_ev_real64_ev_real64_callback = __method;
					}
					void register_type_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_type_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Display::CSpatialRect boundingRect() const
					{
						if (this->_gRef != NULL && this->m_boundingRect_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("boundingRect_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Display::CSpatialRect __values1 = *(EarthView::World::Spatial::Display::CSpatialRect*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CTrackingItem::boundingRect();
						}
					}
					virtual void paint(EarthView::World::Spatial::Display::ISpatialDisplay* display, const EarthView::World::Spatial2D::Controls::EVTrackingItemState& state, const EarthView::World::Spatial::Display::CSpatialRect& rect)
					{
						if (this->_gRef != NULL && this->m_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong display_j = (jlong) display;
							jint state_j = (jint) state;
							jlong rect_j = (jlong) &rect;
							jmethodID __method = __gr->getMethod("paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback");
							__env->CallVoidMethod(__obj, __method , display_j, state_j, rect_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
						}
						else
						{
							return this->CTrackingItem::paint(display, state, rect);
						}
					}
					virtual ev_bool isContains(ev_real64 x, ev_real64 y) const
					{
						if (this->_gRef != NULL && this->m_isContains_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
							jmethodID __method = __gr->getMethod("isContains_ev_real64_ev_real64_callback");
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
							return this->CTrackingItem::isContains(x, y);
						}
					}
					virtual ev_int32 type() const
					{
						if (this->_gRef != NULL && this->m_type_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("type_void_callback");
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
							return this->CTrackingItem::type();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCTrackingItemProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_boundingRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingItemProxy))
					{
						EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->boundingRect();
						EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_register_1boundingRect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingItemProxy *pObjectX = (JCTrackingItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_boundingRect_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"boundingRect_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_boundingRect_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::boundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingItemProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::paint(display, state, rect);
					}
					else
					{
						pObjectX->paint(display, state, rect);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_register_1paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingItemProxy *pObjectX = (JCTrackingItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"paint_ISpatialDisplay_EVTrackingItemState_CSpatialRect_callback", "(JIJ)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_paint_1ISpatialDisplay_1EVTrackingItemState_1CSpatialRect_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong display_j, jint state_j, jlong rect_j)
				{
					EarthView::World::Spatial::Display::ISpatialDisplay *display = (EarthView::World::Spatial::Display::ISpatialDisplay*) display_j;
					const EarthView::World::Spatial2D::Controls::EVTrackingItemState state = (const EarthView::World::Spatial2D::Controls::EVTrackingItemState) state_j;
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::paint(display, state, rect);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isContains_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pnt_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *pnt = (const EarthView::World::Spatial::Geometry::CPoint*) pnt_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isContains(pnt);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isContains_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingItemProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isContains(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_register_1isContains_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingItemProxy *pObjectX = (JCTrackingItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_isContains_ev_real64_ev_real64_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"isContains_ev_real64_ev_real64_callback", "(DD)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isContains_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::isContains(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_type_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCTrackingItemProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::type();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->type();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_register_1type_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCTrackingItemProxy *pObjectX = (JCTrackingItemProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_type_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"type_void_callback", "()I");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_type_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial2D::Controls::CTrackingItem::type();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_flags_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EVTrackingItemFlags __values1 = pObjectX->flags();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setFlags_1EVTrackingItemFlags(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint flags_j)
				{
					EarthView::World::Spatial2D::Controls::EVTrackingItemFlags flags = (EarthView::World::Spatial2D::Controls::EVTrackingItemFlags) flags_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setFlags(flags);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isInterest_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isInterest();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setInterest_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
				{
					ev_bool b = (ev_bool) b_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setInterest(b);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_unitType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EVTrackingItemUnit __values1 = pObjectX->unitType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_id_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->id();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_cacheMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EVCacheMode __values1 = pObjectX->cacheMode();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setCacheMode_1EVCacheMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
				{
					EarthView::World::Spatial2D::Controls::EVCacheMode mode = (EarthView::World::Spatial2D::Controls::EVCacheMode) mode_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setCacheMode(mode);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setPositionType_1EVTrackingItemPosition(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial2D::Controls::EVTrackingItemPosition type = (EarthView::World::Spatial2D::Controls::EVTrackingItemPosition) type_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setPositionType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_getPositionType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EVTrackingItemPosition __values1 = pObjectX->getPositionType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_cursor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_int32 __values1 = pObjectX->cursor();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setCursor_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint cursor_j)
				{
					ev_int32 cursor = (ev_int32) cursor_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setCursor(cursor);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isVisible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVisible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
				{
					ev_bool visible = (ev_bool) visible_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setVisible(visible);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isShowAsScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isShowAsScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setShowAsScale_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean bAs_j)
				{
					ev_bool bAs = (ev_bool) bAs_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setShowAsScale(bAs);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_minScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_real64 __values1 = pObjectX->minScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setMinScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minSclae_j)
				{
					ev_real64 minSclae = (ev_real64) minSclae_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setMinScale(minSclae);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_maxScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_real64 __values1 = pObjectX->maxScale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setMaxScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble maxScale_j)
				{
					ev_real64 maxScale = (ev_real64) maxScale_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setMaxScale(maxScale);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isSelected_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSelected();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setSelected_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selected_j)
				{
					ev_bool selected = (ev_bool) selected_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setSelected(selected);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_isLocked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_bool __values1 = pObjectX->isLocked();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setLocked_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean lock_j)
				{
					ev_bool lock = (ev_bool) lock_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setLocked(lock);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_pos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->pos();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setPos_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setPos(x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setPos_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *pos = (const EarthView::World::Spatial::Geometry::CPoint*) pos_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setPos(pos);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_transparent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_real64 __values1 = pObjectX->transparent();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setTransparent_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setTransparent(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_rotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_real64 __values1 = pObjectX->rotation();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setRotation_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble rotation_j)
				{
					ev_real64 rotation = (ev_real64) rotation_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setRotation(rotation);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_scale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_real64 __values1 = pObjectX->scale();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setScale_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble scale_j)
				{
					ev_real64 scale = (ev_real64) scale_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setScale(scale);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_toolTip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					EVString __values1 = pObjectX->toolTip();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setToolTip_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring tip_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* tip_ch = (const ev_char*)__env->GetStringUTFChars(tip_j,JNI_FALSE);
					const EVString tip = tip_ch;
					__env->ReleaseStringUTFChars(tip_j, (const char *)tip_ch);
					#else
					const ev_wchar* tip_ch = (const ev_wchar*)__env->GetStringChars(tip_j,JNI_FALSE);
					const EVString tip = tip_ch;
					__env->ReleaseStringChars(tip_j, (const jchar *)tip_ch);
					#endif
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setToolTip(tip);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_parentItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* __values1 = pObjectX->parentItem();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setParentItem_1CTrackingItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem *ref_newParent = (EarthView::World::Spatial2D::Controls::CTrackingItem*) ref_newParent_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setParentItem(ref_newParent);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_zValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					ev_real64 __values1 = pObjectX->zValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_setZValue_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble zVar_j)
				{
					ev_real64 zVar = (ev_real64) zVar_j;
					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->setZValue(zVar);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_transform_1ev_1real64_1ev_1real64_1ev_1int32_1EVTransformDirection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jint count_j, jint direct_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_int32 count = (ev_int32) count_j;
					EarthView::World::Spatial2D::Controls::EVTransformDirection direct = (EarthView::World::Spatial2D::Controls::EVTransformDirection) direct_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->transform(x, y, count, direct);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_transform_1CPoint_1EVTransformDirection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pnt_j, jint direct_j)
				{
					EarthView::World::Spatial::Geometry::CPoint *pnt = (EarthView::World::Spatial::Geometry::CPoint*) pnt_j;
					EarthView::World::Spatial2D::Controls::EVTransformDirection direct = (EarthView::World::Spatial2D::Controls::EVTransformDirection) direct_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->transform(pnt, direct);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItem_transform_1CSpatialRect_1EVTransformDirection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j, jint direct_j)
				{
					EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::EVTransformDirection direct = (EarthView::World::Spatial2D::Controls::EVTransformDirection) direct_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItem *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItem*) pObjXXXX;
					pObjectX->transform(rect, direct);
				}
			}
		}
	}
}
