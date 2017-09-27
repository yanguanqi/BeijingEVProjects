/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/itool.h"
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
			namespace SystemUI
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_systemui_EVToolTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TT_None,
						TT_ZoomIn,
						TT_ZoomOut,
						TT_ZoomFree,
						TT_Pan,
						TT_PointSelect,
						TT_RectangleSelect,
						TT_PolygonSelect,
						TT_Measure,
						CT_DefaultTool,
						TT_SketchFeature,
						TT_ModifyFeatures,
						TT_MidPoint,
						TT_RightAngle,
						TT_RightAngleRestrain,
						TT_ParallelRestrain,
						TT_GeometryTracking,
						TT_TangentCurve,
						TT_ThreePointsArc1,
						TT_ThreePointsArc2,
						TT_AngleArc,
						TT_EllipticArc,
						TT_BezierCurve,
						TT_Parallel,
						TT_ConcentricCircle,
						TT_TwoPointsCircle,
						TT_ThreePointsCircle,
						TT_CircleChord,
						TT_CircleSector,
						TT_Ellipse,
						TT_EllipticChord,
						TT_EllipticSector,
						TT_Rectangle,
						TT_RoundRectangle,
						TT_Parallelogram,
						TT_RotateFeatures,
						TT_EditSelect,
						TT_CopyFeature,
						TT_CircularAngle,
						TT_StretchLine,
						TT_BreakLine,
						TT_TrimLine,
						TT_IntersectionLine,
						TT_CombineParts,
						TT_SplitParts,
						TT_LineSimplify,
						TT_LineSmooth,
						TT_ClipFeature,
						TT_GeometryUnion,
						TT_SplitObject,
						TT_OffsetObject,
						TT_Mirror,
						TT_Recondition,
						TT_NetworkAnalysis,
						TT_NetworkAnalyst_Stop,
						TT_NetworkAnalyst_Barriar,
						TT_NetworkAnalyst_Adjust,
						TT_Rectification,
						TT_Unknown3D,
						TT_RaySelect,
						TT_ComponentSelect,
						TT_RectSelect3D,
						TT_TerrainQuery,
						TT_RegionQuery,
						TT_CurtainEdit,
						TT_CommonRaySelect,
						TT_Visibibility,
						TT_Section,
						TT_Slope,
						TT_Volume,
						TT_RegionFlood,
						TT_Measure3DLength,
						TT_Measure3DArea,
						TT_Measure3DVertical,
						TT_Measure3DPoint,
						TT_Measure3DAzimuth,
						TT_PlaceMarkEditor,
						TT_LineStringEditor,
						TT_PolygonEditor,
						TT_ImageOverlayerEditor,
						TT_PolygonExEditor,
						TT_ModelEditor,
						TT_PhotoEditor,
						TT_VectorMovableEditor,
						TT_ArrowEditor,
						TT_RegionLodEditor,
						TT_LAYER3DEDITOR,
						TT_PAGEPAN,
						TT_PAGEZOOMIN,
						TT_PAGEZOOMOUT,
						TT_ELEMENTSELECTION
					};
					jintArray array = __env->NewIntArray(91);
					__env->SetIntArrayRegion(array, 0, 91, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_systemui_MotionEventPoint_getX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::MotionEventPoint *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getX();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_systemui_MotionEventPoint_getY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::MotionEventPoint *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getY();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MotionEventPoint_setX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::SystemUI::MotionEventPoint *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjXXXX;
					pObjectX->setX(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MotionEventPoint_setY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::SystemUI::MotionEventPoint *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjXXXX;
					pObjectX->setY(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MotionEventPoint_setPoint_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::SystemUI::MotionEventPoint *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEventPoint*) pObjXXXX;
					pObjectX->setPoint(x, y);
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_00024MotionEventTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MotionEvent::MET_Down,
						MotionEvent::MET_Up,
						MotionEvent::MET_Move
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_setEventTime_1CCoreTime(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong time_j)
				{
					EarthView::World::Core::CCoreTime &time = *(EarthView::World::Core::CCoreTime*) time_j;
					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					pObjectX->setEventTime(time);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_getEventTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					EarthView::World::Core::CCoreTime __values1 = pObjectX->getEventTime();
					EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_setEventType_1MotionEventType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType type = (EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType) type_j;
					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					pObjectX->setEventType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_getEventType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::MotionEvent::MotionEventType __values1 = pObjectX->getEventType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_addTouchPoint_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->addTouchPoint(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_clearTouchPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					pObjectX->clearTouchPoint();
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_pointerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					ev_real64 __values1 = pObjectX->pointerCount();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_getX_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort index_j)
				{
					ev_int16 index = (ev_int16) index_j;
					const 					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getX(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_systemui_MotionEvent_getY_1ev_1int16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort index_j)
				{
					ev_int16 index = (ev_int16) index_j;
					const 					EarthView::World::Spatial::SystemUI::MotionEvent *pObjectX = (EarthView::World::Spatial::SystemUI::MotionEvent*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getY(index);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				class JIToolProxy : public EarthView::World::Spatial::SystemUI::ITool
				{
				 private:
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
					JIToolProxy(EarthView::World::Core::CNameValuePairList *pList) : ITool(pList)
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
					C_DISABLE_COPY(JIToolProxy)
				public:
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
							return this->ITool::getToolBarType();
						}
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
							return this->ITool::getType();
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
							return this->ITool::getName();
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
							return this->ITool::getCategory();
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
							return this->ITool::getToolTip();
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
							return this->ITool::getIcon();
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
							return this->ITool::isCheckable();
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
							return this->ITool::onClicked();
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
							return this->ITool::getChecked();
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
							return this->ITool::setChecked(checked);
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
							return this->ITool::getEnabled();
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
							return this->ITool::setEnabled(enabled);
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
							return this->ITool::create(ref_ctrl);
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
							return this->ITool::update(e);
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
							return this->ITool::activate();
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
							return this->ITool::deactivate();
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
							return this->ITool::getCursor();
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
							return this->ITool::onContextMenu(x, y);
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
							return this->ITool::onDoubleClick();
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
							return this->ITool::onDoubleClick(button, shift, x, y);
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
							return this->ITool::onKeyDown(keyCode, shift);
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
							return this->ITool::onKeyUp(keyCode, shift);
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
							return this->ITool::onMouseDown(button, shift, x, y);
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
							return this->ITool::onMouseMove(button, shift, x, y);
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
							return this->ITool::onMouseUp(button, shift, x, y);
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
							return this->ITool::onMouseWheel(delta, x, y, flag);
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
							return this->ITool::onTouchDown(touchEvent);
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
							return this->ITool::onTouchUp(touchEvent);
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
							return this->ITool::onTouchMove(touchEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JIToolProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Itool_getToolBarType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getToolBarType();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						ev_uint32 __values1 = pObjectX->getToolBarType();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getToolBarType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Itool_getToolBarType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getToolBarType();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Itool_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getType();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Itool_getType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getType();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_Itool_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getName();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_Itool_getName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_Itool_getCategory_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getCategory();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getCategory();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getCategory_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_Itool_getCategory_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getCategory();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_Itool_getToolTip_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						EVString __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getToolTip();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
					else
					{
						EVString __values1 = pObjectX->getToolTip();
						EarthView::World::Core::ev_wstring valuesw1 = __values1;
						jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getToolTip_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_Itool_getToolTip_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					EVString __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getToolTip();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Itool_getIcon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getIcon();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Display::IBitmap* __values1 = pObjectX->getIcon();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getIcon_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Itool_getIcon_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					EarthView::World::Display::IBitmap* __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getIcon();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_isCheckable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::isCheckable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->isCheckable();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1isCheckable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_isCheckable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::isCheckable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_onClicked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::ITool::onClicked();
					}
					else
					{
						pObjectX->onClicked();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onClicked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_onClicked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::ITool::onClicked();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_getChecked_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getChecked();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getChecked();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getChecked_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_getChecked_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getChecked();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_setChecked_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
				{
					ev_bool checked = (ev_bool) checked_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::ITool::setChecked(checked);
					}
					else
					{
						pObjectX->setChecked(checked);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1setChecked_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_setChecked_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean checked_j)
				{
					ev_bool checked = (ev_bool) checked_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::ITool::setChecked(checked);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getEnabled();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->getEnabled();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_getEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getEnabled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
				{
					ev_bool enabled = (ev_bool) enabled_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::ITool::setEnabled(enabled);
					}
					else
					{
						pObjectX->setEnabled(enabled);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_setEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
				{
					ev_bool enabled = (ev_bool) enabled_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::ITool::setEnabled(enabled);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_create_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ctrl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_ctrl_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::ITool::create(ref_ctrl);
					}
					else
					{
						pObjectX->create(ref_ctrl);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1create_1ISpatialControl(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_create_1ISpatialControl_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ctrl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_ctrl_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::ITool::create(ref_ctrl);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_update_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::update(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->update(e);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1update_1CEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_update_1CEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong e_j)
				{
					EarthView::World::Core::CEvent *e = (EarthView::World::Core::CEvent*) e_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::update(e);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_activate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::ITool::activate();
					}
					else
					{
						pObjectX->activate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1activate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_activate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::ITool::activate();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_deactivate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						pObjectX->EarthView::World::Spatial::SystemUI::ITool::deactivate();
					}
					else
					{
						pObjectX->deactivate();
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1deactivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_deactivate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					pObjectX->EarthView::World::Spatial::SystemUI::ITool::deactivate();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Itool_getCursor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_int32 __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getCursor();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
					else
					{
						ev_int32 __values1 = pObjectX->getCursor();
						jint __values1_j = (jint)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1getCursor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Itool_getCursor_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_int32 __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::getCursor();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onContextMenu_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onContextMenu(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onContextMenu(x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onContextMenu_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onContextMenu_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onContextMenu(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onDoubleClick_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onDoubleClick();
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onDoubleClick_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onDoubleClick_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onDoubleClick(button, shift, x, y);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onDoubleClick_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onDoubleClick(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onKeyDown(keyCode, shift);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onKeyDown_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onKeyDown_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onKeyDown(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onKeyUp(keyCode, shift);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onKeyUp_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onKeyUp_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint keyCode_j, jint shift_j)
				{
					ev_int32 keyCode = (ev_int32) keyCode_j;
					ev_int32 shift = (ev_int32) shift_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onKeyUp(keyCode, shift);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseDown(button, shift, x, y);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseDown(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseMove(button, shift, x, y);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseMove(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseUp(button, shift, x, y);
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseUp(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseWheel(delta, x, y, flag);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onMouseWheel(delta, x, y, flag);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onMouseWheel(delta, x, y, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onTouchDown_1MotionEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong touchEvent_j)
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent &touchEvent = *(EarthView::World::Spatial::SystemUI::MotionEvent*) touchEvent_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onTouchDown(touchEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onTouchDown(touchEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onTouchDown_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onTouchDown_1MotionEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong touchEvent_j)
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent &touchEvent = *(EarthView::World::Spatial::SystemUI::MotionEvent*) touchEvent_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onTouchDown(touchEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onTouchUp_1MotionEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong touchEvent_j)
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent &touchEvent = *(EarthView::World::Spatial::SystemUI::MotionEvent*) touchEvent_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onTouchUp(touchEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onTouchUp(touchEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onTouchUp_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onTouchUp_1MotionEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong touchEvent_j)
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent &touchEvent = *(EarthView::World::Spatial::SystemUI::MotionEvent*) touchEvent_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onTouchUp(touchEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onTouchMove_1MotionEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong touchEvent_j)
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent &touchEvent = *(EarthView::World::Spatial::SystemUI::MotionEvent*) touchEvent_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JIToolProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onTouchMove(touchEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->onTouchMove(touchEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Itool_register_1onTouchMove_1MotionEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JIToolProxy *pObjectX = (JIToolProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Itool_onTouchMove_1MotionEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong touchEvent_j)
				{
					const EarthView::World::Spatial::SystemUI::MotionEvent &touchEvent = *(EarthView::World::Spatial::SystemUI::MotionEvent*) touchEvent_j;
					EarthView::World::Spatial::SystemUI::ITool *pObjectX = (EarthView::World::Spatial::SystemUI::ITool*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial::SystemUI::ITool::onTouchMove(touchEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
