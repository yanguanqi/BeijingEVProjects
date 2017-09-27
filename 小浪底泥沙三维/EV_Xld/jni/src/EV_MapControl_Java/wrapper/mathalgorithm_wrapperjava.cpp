/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mathalgorithm.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_cosinTheorem_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong p0_j, jlong p1_j, jlong p2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *p0 = (const EarthView::World::Spatial::Geometry::CPoint*) p0_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					ev_real64 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::cosinTheorem(p0, p1, p2);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_cosinTheorem_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble x0_j, jdouble y0_j, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j)
				{
					ev_real64 x0 = (ev_real64) x0_j;
					ev_real64 y0 = (ev_real64) y0_j;
					ev_real64 x1 = (ev_real64) x1_j;
					ev_real64 y1 = (ev_real64) y1_j;
					ev_real64 x2 = (ev_real64) x2_j;
					ev_real64 y2 = (ev_real64) y2_j;
					ev_real64 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::cosinTheorem(x0, y0, x1, y1, x2, y2);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_pointToLine_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong pnt_j, jlong pnt0_j, jlong pnt1_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *pnt = (const EarthView::World::Spatial::Geometry::CPoint*) pnt_j;
					const EarthView::World::Spatial::Geometry::CPoint *pnt0 = (const EarthView::World::Spatial::Geometry::CPoint*) pnt0_j;
					const EarthView::World::Spatial::Geometry::CPoint *pnt1 = (const EarthView::World::Spatial::Geometry::CPoint*) pnt1_j;
					ev_real64 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::pointToLine(pnt, pnt0, pnt1);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_pointToLine_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble dx_j, jdouble dy_j, jdouble x0_j, jdouble y0_j, jdouble x1_j, jdouble y1_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					ev_real64 x0 = (ev_real64) x0_j;
					ev_real64 y0 = (ev_real64) y0_j;
					ev_real64 x1 = (ev_real64) x1_j;
					ev_real64 y1 = (ev_real64) y1_j;
					ev_real64 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::pointToLine(dx, dy, x0, y0, x1, y1);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_pointToPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong pnt1_j, jlong pnt2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *pnt1 = (const EarthView::World::Spatial::Geometry::CPoint*) pnt1_j;
					const EarthView::World::Spatial::Geometry::CPoint *pnt2 = (const EarthView::World::Spatial::Geometry::CPoint*) pnt2_j;
					ev_real64 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::pointToPoint(pnt1, pnt2);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_testTurn_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong p0_j, jlong p1_j, jlong p2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *p0 = (const EarthView::World::Spatial::Geometry::CPoint*) p0_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					ev_real64 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::testTurn(p0, p1, p2);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_angle_1aob_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong po_j, jlong pa_j, jlong pb_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *po = (const EarthView::World::Spatial::Geometry::CPoint*) po_j;
					const EarthView::World::Spatial::Geometry::CPoint *pa = (const EarthView::World::Spatial::Geometry::CPoint*) pa_j;
					const EarthView::World::Spatial::Geometry::CPoint *pb = (const EarthView::World::Spatial::Geometry::CPoint*) pb_j;
					ev_real64 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::angle_aob(po, pa, pb);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_shareLine_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong p1_j, jlong p2_j, jlong q_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					const EarthView::World::Spatial::Geometry::CPoint *q = (const EarthView::World::Spatial::Geometry::CPoint*) q_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::shareLine(p1, p2, q);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_shareLine_1CPoint_1CPoint_1CPoint_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong p1_j, jlong p2_j, jlong q_j, jdouble precision_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					const EarthView::World::Spatial::Geometry::CPoint *q = (const EarthView::World::Spatial::Geometry::CPoint*) q_j;
					ev_real64 precision = (ev_real64) precision_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::shareLine(p1, p2, q, precision);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_isPointOnLine_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong q_j, jlong p1_j, jlong p2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *q = (const EarthView::World::Spatial::Geometry::CPoint*) q_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::isPointOnLine(q, p1, p2);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_isPointOnLine_1CPoint_1CPoint_1CPoint_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong q_j, jlong p1_j, jlong p2_j, jdouble precision_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *q = (const EarthView::World::Spatial::Geometry::CPoint*) q_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					ev_real64 precision = (ev_real64) precision_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::isPointOnLine(q, p1, p2, precision);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_isFootPoint_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong fp_j, jlong p1_j, jlong p2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *fp = (const EarthView::World::Spatial::Geometry::CPoint*) fp_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::isFootPoint(fp, p1, p2);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_getFootPoint_1CPoint_1CPoint_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong pPoint1_j, jlong pPoint2_j, jlong x_j, jlong y_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *pPoint1 = (const EarthView::World::Spatial::Geometry::CPoint*) pPoint1_j;
					const EarthView::World::Spatial::Geometry::CPoint *pPoint2 = (const EarthView::World::Spatial::Geometry::CPoint*) pPoint2_j;
					ev_real64 &x = *(ev_real64*) x_j;
					ev_real64 &y = *(ev_real64*) y_j;
					ev_int32 __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::getFootPoint(pPoint1, pPoint2, x, y);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_isParallel_1CPoint_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jclass __clazz, jlong pStartPL1_j, jlong pEndPL1_j, jlong pStartPL2_j, jlong pEndPL2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *pStartPL1 = (const EarthView::World::Spatial::Geometry::CPoint*) pStartPL1_j;
					const EarthView::World::Spatial::Geometry::CPoint *pEndPL1 = (const EarthView::World::Spatial::Geometry::CPoint*) pEndPL1_j;
					const EarthView::World::Spatial::Geometry::CPoint *pStartPL2 = (const EarthView::World::Spatial::Geometry::CPoint*) pStartPL2_j;
					const EarthView::World::Spatial::Geometry::CPoint *pEndPL2 = (const EarthView::World::Spatial::Geometry::CPoint*) pEndPL2_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::isParallel(pStartPL1, pEndPL1, pStartPL2, pEndPL2);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MathFormula_isApproximate_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble dValue1_j, jdouble dValue2_j, jdouble dTolerance_j)
				{
					ev_real64 dValue1 = (ev_real64) dValue1_j;
					ev_real64 dValue2 = (ev_real64) dValue2_j;
					ev_real64 dTolerance = (ev_real64) dTolerance_j;
					ev_bool __values1 = EarthView::World::Spatial2D::Controls::CMathFormula::isApproximate(dValue1, dValue2, dTolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_setRectangleRing_1CPoint_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p0_j, jlong p1_j, jlong p2_j, jlong p3_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *p0 = (const EarthView::World::Spatial::Geometry::CPoint*) p0_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					const EarthView::World::Spatial::Geometry::CPoint *p3 = (const EarthView::World::Spatial::Geometry::CPoint*) p3_j;
					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					pObjectX->setRectangleRing(p0, p1, p2, p3);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_setRectangleRing_1CRectangleRing(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Geometry::CRectangleRing *rect = (const EarthView::World::Spatial::Geometry::CRectangleRing*) rect_j;
					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					pObjectX->setRectangleRing(rect);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_getFirst_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getFirst();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_getSecond_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getSecond();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_getThird_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getThird();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_getForth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getForth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_getFifth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getFifth();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_getRoundRadius_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v12_j, jlong v23_j)
				{
					ev_real64 &v12 = *(ev_real64*) v12_j;
					ev_real64 &v23 = *(ev_real64*) v23_j;
					const 					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					pObjectX->getRoundRadius(v12, v23);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_RoundRectAlgori_getRectangle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CRoundRectAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CRoundRectAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CRectangleRing* __values1 = pObjectX->getRectangle();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCEllipticRingAlgoriProxy : public EarthView::World::Spatial2D::Controls::CEllipticRingAlgori
				{
				 private:
					EarthView::World::Core::ev_string m_setEllipticRing_CEllipticRing_callback;
				public:
					JCEllipticRingAlgoriProxy(EarthView::World::Core::CNameValuePairList *pList) : CEllipticRingAlgori(pList)
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
					void register_setEllipticRing_CEllipticRing_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEllipticRing_CEllipticRing_callback = __method;
					}
					virtual void setEllipticRing(EarthView::World::Spatial::Geometry::CEllipticRing* ring)
					{
						if (this->_gRef != NULL && this->m_setEllipticRing_CEllipticRing_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ring_j = (jlong) ring;
							jmethodID __method = __gr->getMethod("setEllipticRing_CEllipticRing_callback");
							__env->CallVoidMethod(__obj, __method , ring_j);
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
							return this->CEllipticRingAlgori::setEllipticRing(ring);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEllipticRingAlgoriProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_setEllipticRing_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jlong p1_j, jlong p2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *center = (const EarthView::World::Spatial::Geometry::CPoint*) center_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					pObjectX->setEllipticRing(center, p1, p2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_setEllipticRing_1CEllipticRing(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ring_j)
				{
					EarthView::World::Spatial::Geometry::CEllipticRing *ring = (EarthView::World::Spatial::Geometry::CEllipticRing*) ring_j;
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipticRingAlgoriProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEllipticRingAlgori::setEllipticRing(ring);
					}
					else
					{
						pObjectX->setEllipticRing(ring);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_register_1setEllipticRing_1CEllipticRing(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipticRingAlgoriProxy *pObjectX = (JCEllipticRingAlgoriProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEllipticRing_CEllipticRing_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEllipticRing_CEllipticRing_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_setEllipticRing_1CEllipticRing_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ring_j)
				{
					EarthView::World::Spatial::Geometry::CEllipticRing *ring = (EarthView::World::Spatial::Geometry::CEllipticRing*) ring_j;
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEllipticRingAlgori::setEllipticRing(ring);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_getSemiMajorAxe_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getSemiMajorAxe();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_getSemiMinorAxe_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getSemiMinorAxe();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_getAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_getCenter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getCenter();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_getCtrlPoint1_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getCtrlPoint1();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_getCtrlPoint2_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getCtrlPoint2();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_makeEllipticRing_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEllipticRing* __values1 = pObjectX->makeEllipticRing();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticRingAlgori_getPointOnEllipse_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j, jdouble x_j, jdouble y_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial2D::Controls::CEllipticRingAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticRingAlgori*) pObjXXXX;
					pObjectX->getPointOnEllipse(angle, x, y);
				}
				class JCEllipticArcAlgoriProxy : public EarthView::World::Spatial2D::Controls::CEllipticArcAlgori
				{
				 private:
					EarthView::World::Core::ev_string m_setEllipticRing_CEllipticRing_callback;
				public:
					JCEllipticArcAlgoriProxy(EarthView::World::Core::CNameValuePairList *pList) : CEllipticArcAlgori(pList)
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
					void register_setEllipticRing_CEllipticRing_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_setEllipticRing_CEllipticRing_callback = __method;
					}
					virtual void setEllipticRing(EarthView::World::Spatial::Geometry::CEllipticRing* ring)
					{
						if (this->_gRef != NULL && this->m_setEllipticRing_CEllipticRing_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong ring_j = (jlong) ring;
							jmethodID __method = __gr->getMethod("setEllipticRing_CEllipticRing_callback");
							__env->CallVoidMethod(__obj, __method , ring_j);
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
							return this->CEllipticArcAlgori::setEllipticRing(ring);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCEllipticArcAlgoriProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_setEllipticRing_1CEllipticRing(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ring_j)
				{
					EarthView::World::Spatial::Geometry::CEllipticRing *ring = (EarthView::World::Spatial::Geometry::CEllipticRing*) ring_j;
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCEllipticArcAlgoriProxy))
					{
						pObjectX->EarthView::World::Spatial2D::Controls::CEllipticArcAlgori::setEllipticRing(ring);
					}
					else
					{
						pObjectX->setEllipticRing(ring);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_register_1setEllipticRing_1CEllipticRing(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCEllipticArcAlgoriProxy *pObjectX = (JCEllipticArcAlgoriProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_setEllipticRing_CEllipticRing_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"setEllipticRing_CEllipticRing_callback", "(J)V");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_setEllipticRing_1CEllipticRing_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ring_j)
				{
					EarthView::World::Spatial::Geometry::CEllipticRing *ring = (EarthView::World::Spatial::Geometry::CEllipticRing*) ring_j;
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					pObjectX->EarthView::World::Spatial2D::Controls::CEllipticArcAlgori::setEllipticRing(ring);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_setEllipticArc_1CPoint_1CPoint_1CPoint_1CPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j, jlong p1_j, jlong p2_j, jlong p3_j, jlong p4_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *center = (const EarthView::World::Spatial::Geometry::CPoint*) center_j;
					const EarthView::World::Spatial::Geometry::CPoint *p1 = (const EarthView::World::Spatial::Geometry::CPoint*) p1_j;
					const EarthView::World::Spatial::Geometry::CPoint *p2 = (const EarthView::World::Spatial::Geometry::CPoint*) p2_j;
					const EarthView::World::Spatial::Geometry::CPoint *p3 = (const EarthView::World::Spatial::Geometry::CPoint*) p3_j;
					const EarthView::World::Spatial::Geometry::CPoint *p4 = (const EarthView::World::Spatial::Geometry::CPoint*) p4_j;
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					pObjectX->setEllipticArc(center, p1, p2, p3, p4);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_setEllipticArc_1CEllipticArc(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong arc_j)
				{
					const EarthView::World::Spatial::Geometry::CEllipticArc *arc = (const EarthView::World::Spatial::Geometry::CEllipticArc*) arc_j;
					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					pObjectX->setEllipticArc(arc);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_getFromAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFromAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_getSweepAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getSweepAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_getCtrlPoint3_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getCtrlPoint3();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_getCtrlPoint4_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getCtrlPoint4();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_EllipticArcAlgori_makeEllipticArc_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CEllipticArcAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CEllipticArcAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CEllipticArc* __values1 = pObjectX->makeEllipticArc();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_setLongCircle_1CPoint_1ev_1real64_1CPoint_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center1_j, jdouble radius1_j, jlong center2_j, jdouble radius2_j)
				{
					const EarthView::World::Spatial::Geometry::CPoint *center1 = (const EarthView::World::Spatial::Geometry::CPoint*) center1_j;
					ev_real64 radius1 = (ev_real64) radius1_j;
					const EarthView::World::Spatial::Geometry::CPoint *center2 = (const EarthView::World::Spatial::Geometry::CPoint*) center2_j;
					ev_real64 radius2 = (ev_real64) radius2_j;
					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					pObjectX->setLongCircle(center1, radius1, center2, radius2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_setLongCircle_1CCurveRing(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ring_j)
				{
					const EarthView::World::Spatial::Geometry::CCurveRing *ring = (const EarthView::World::Spatial::Geometry::CCurveRing*) ring_j;
					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					pObjectX->setLongCircle(ring);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_getGeometry_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getGeometry();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_getFirstRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFirstRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_getSecondRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getSecondRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_getFirstPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getFirstPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_getSecondPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getSecondPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_getThirdPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getThirdPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_LongCircleAlgori_getForthPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CLongCircleAlgori *pObjectX = (EarthView::World::Spatial2D::Controls::CLongCircleAlgori*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CPoint* __values1 = pObjectX->getForthPoint();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
