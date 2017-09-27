/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/radarcharacter.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace MilitaryEngine
		{
			namespace RadarLibrary
			{
				class JCSectionPointProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCSectionPointProxy(EarthView::World::Core::CNameValuePairList *pList) : CSectionPoint(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint __values1 = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CSectionPoint::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSectionPointProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoint_getPitchAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjXXXX;
					Real __values1 = pObjectX->getPitchAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoint_getPitchPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPitchPoint();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoint_setPitchAngle_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pitchAngle_j)
				{
					const Real pitchAngle = (const Real) pitchAngle_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjXXXX;
					pObjectX->setPitchAngle(pitchAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoint_setPitchPoint_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pitchPoint_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &pitchPoint = *(EarthView::World::Spatial::Math::CVector3*) pitchPoint_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjXXXX;
					pObjectX->setPitchPoint(pitchPoint);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoint_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSectionPointProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint::clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *returnvalues = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint __values1 = pObjectX->clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *returnvalues = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoint_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSectionPointProxy *pObjectX = (JCSectionPointProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoint_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint::clone();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint *returnvalues = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				class JCSectionPointsProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCSectionPointsProxy(EarthView::World::Core::CNameValuePairList *pList) : CSectionPoints(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *__values1 = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CSectionPoints::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCSectionPointsProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_push_1back_1CSectionPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint &t = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) t_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_insert_1ev_1uint32_1CSectionPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint &t = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint*) t_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints& pObjectX = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoint& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCSectionPointsProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCSectionPointsProxy *pObjectX = (JCSectionPointsProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_SectionPoints_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCRadarSectionProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCRadarSectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CRadarSection(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *__values1 = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CRadarSection::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRadarSectionProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_getSectionPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints* __values1 = pObjectX->getSectionPoints();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_setSectionPoints_1CSectionPoints(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sectionPoints_j)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints *sectionPoints = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CSectionPoints*) sectionPoints_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjXXXX;
					pObjectX->setSectionPoints(sectionPoints);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_converToLineString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->converToLineString();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_createSectionXmlElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->createSectionXmlElement(name);
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_parseSectionXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sectionElement_j)
				{
					EarthView::World::Core::CXmlElement sectionElement = *(EarthView::World::Core::CXmlElement*) sectionElement_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjXXXX;
					pObjectX->parseSectionXmlElement(sectionElement);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRadarSectionProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRadarSectionProxy *pObjectX = (JCRadarSectionProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarSection_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCShadeAngleDataProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCShadeAngleDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadeAngleData(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData __values1 = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CShadeAngleData::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCShadeAngleDataProxy);
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleData_getHorizontalAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjXXXX;
					Real __values1 = pObjectX->getHorizontalAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleData_getShadeAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjXXXX;
					Real __values1 = pObjectX->getShadeAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleData_setHorizontalAngle_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble horizontalAngle_j)
				{
					const Real horizontalAngle = (const Real) horizontalAngle_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjXXXX;
					pObjectX->setHorizontalAngle(horizontalAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleData_setShadeAngle_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble shadeAngle_j)
				{
					const Real shadeAngle = (const Real) shadeAngle_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjXXXX;
					pObjectX->setShadeAngle(shadeAngle);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleData_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShadeAngleDataProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData::clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *returnvalues = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData __values1 = pObjectX->clone();
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *returnvalues = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData(__values1);
						((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
						jlong __values1_j = (jlong) returnvalues;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleData_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShadeAngleDataProxy *pObjectX = (JCShadeAngleDataProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleData_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData::clone();
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData *returnvalues = new EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				class JCShadeAngleDatasProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas
				{
				 private:
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCShadeAngleDatasProxy(EarthView::World::Core::CNameValuePairList *pList) : CShadeAngleDatas(pList)
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
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *__values1 = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CShadeAngleDatas::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCShadeAngleDatasProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_push_1back_1CShadeAngleData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData &t = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) t_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_insert_1ev_1uint32_1CShadeAngleData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					const EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData &t = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData*) t_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas& pObjectX = *(EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleData& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_createShadeAngleXmlElement_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					EarthView::World::Core::CXmlElement __values1 = pObjectX->createShadeAngleXmlElement(name);
					EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_parseShadeAngleXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong shadeAngleElement_j)
				{
					EarthView::World::Core::CXmlElement shadeAngleElement = *(EarthView::World::Core::CXmlElement*) shadeAngleElement_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->parseShadeAngleXmlElement(shadeAngleElement);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCShadeAngleDatasProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCShadeAngleDatasProxy *pObjectX = (JCShadeAngleDatasProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_ShadeAngleDatas_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				class JCRadarCharacterProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter
				{
				 private:
					EarthView::World::Core::ev_string m_getSectionCurve_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCRadarCharacterProxy(EarthView::World::Core::CNameValuePairList *pList) : CRadarCharacter(pList)
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
					void register_getSectionCurve_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_getSectionCurve_void_callback = __method;
					}
					void register_ev_clone_void_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_ev_clone_void_callback = __method;
					}
					virtual EarthView::World::Spatial::Geometry::CLineString* getSectionCurve()
					{
						if (this->_gRef != NULL && this->m_getSectionCurve_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("getSectionCurve_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::World::Spatial::Geometry::CLineString *__values1 = (EarthView::World::Spatial::Geometry::CLineString*) __values1_j;
							return __values1;
						}
						else
						{
							return this->CRadarCharacter::getSectionCurve();
						}
					}
					virtual EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* clone()
					{
						if (this->_gRef != NULL && this->m_ev_clone_void_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jmethodID __method = __gr->getMethod("ev_clone_void_callback");
							jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *__values1 = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) __values1_j;
							if(__values1 != NULL) {
								((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
							}
							return __values1;
						}
						else
						{
							return this->CRadarCharacter::clone();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCRadarCharacterProxy);
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setScanSpeed_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat value_j)
				{
					const float value = (const float) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setScanSpeed(value);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getScanSpeed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					float __values1 = pObjectX->getScanSpeed();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setHorizontalAngleSpan_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scannerHorizontalSpan_j)
				{
					const EarthView::World::Spatial::Math::CDegree &scannerHorizontalSpan = *(EarthView::World::Spatial::Math::CDegree*) scannerHorizontalSpan_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setHorizontalAngleSpan(scannerHorizontalSpan);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getHorizontalAngleSpan_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getHorizontalAngleSpan();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getHorizontalNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getHorizontalNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setHorizontalAngleDelta_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					const EarthView::World::Spatial::Math::CDegree &value = *(EarthView::World::Spatial::Math::CDegree*) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setHorizontalAngleDelta(value);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getHorizontalAngleDelta_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getHorizontalAngleDelta();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setInterferedDistance_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat interferedDistance_j)
				{
					const float interferedDistance = (const float) interferedDistance_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setInterferedDistance(interferedDistance);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getInterferedDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					float __values1 = pObjectX->getInterferedDistance();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					float __values1 = pObjectX->getHeight();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getSectionCurve_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRadarCharacterProxy))
					{
						EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::getSectionCurve();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->getSectionCurve();
						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_register_1getSectionCurve_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRadarCharacterProxy *pObjectX = (JCRadarCharacterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_getSectionCurve_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"getSectionCurve_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getSectionCurve_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					EarthView::World::Spatial::Geometry::CLineString* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::getSectionCurve();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setEnvelopSolidColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort red_j, jshort green_j, jshort blue_j, jshort alpha_j)
				{
					const ev_uint8 red = (const ev_uint8) red_j;
					const ev_uint8 green = (const ev_uint8) green_j;
					const ev_uint8 blue = (const ev_uint8) blue_j;
					const ev_uint8 alpha = (const ev_uint8) alpha_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setEnvelopSolidColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setScannerSolidColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort red_j, jshort green_j, jshort blue_j, jshort alpha_j)
				{
					const ev_uint8 red = (const ev_uint8) red_j;
					const ev_uint8 green = (const ev_uint8) green_j;
					const ev_uint8 blue = (const ev_uint8) blue_j;
					const ev_uint8 alpha = (const ev_uint8) alpha_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setScannerSolidColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getScannerFrameColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong red_j, jlong green_j, jlong blue_j, jlong alpha_j)
				{
					ev_uint8 &red = *(ev_uint8*) red_j;
					ev_uint8 &green = *(ev_uint8*) green_j;
					ev_uint8 &blue = *(ev_uint8*) blue_j;
					ev_uint8 &alpha = *(ev_uint8*) alpha_j;
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->getScannerFrameColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setScannerFrameColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort red_j, jshort green_j, jshort blue_j, jshort alpha_j)
				{
					const ev_uint8 red = (const ev_uint8) red_j;
					const ev_uint8 green = (const ev_uint8) green_j;
					const ev_uint8 blue = (const ev_uint8) blue_j;
					const ev_uint8 alpha = (const ev_uint8) alpha_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setScannerFrameColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getRadarSection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* __values1 = pObjectX->getRadarSection();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getEnvelopSolidColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong red_j, jlong green_j, jlong blue_j, jlong alpha_j)
				{
					ev_uint8 &red = *(ev_uint8*) red_j;
					ev_uint8 &green = *(ev_uint8*) green_j;
					ev_uint8 &blue = *(ev_uint8*) blue_j;
					ev_uint8 &alpha = *(ev_uint8*) alpha_j;
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->getEnvelopSolidColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setEnvelopFrameColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort red_j, jshort green_j, jshort blue_j, jshort alpha_j)
				{
					const ev_uint8 red = (const ev_uint8) red_j;
					const ev_uint8 green = (const ev_uint8) green_j;
					const ev_uint8 blue = (const ev_uint8) blue_j;
					const ev_uint8 alpha = (const ev_uint8) alpha_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setEnvelopFrameColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getEnvelopFrameColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong red_j, jlong green_j, jlong blue_j, jlong alpha_j)
				{
					ev_uint8 &red = *(ev_uint8*) red_j;
					ev_uint8 &green = *(ev_uint8*) green_j;
					ev_uint8 &blue = *(ev_uint8*) blue_j;
					ev_uint8 &alpha = *(ev_uint8*) alpha_j;
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->getEnvelopFrameColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getScannerSolidColor_1ev_1uint8_1ev_1uint8_1ev_1uint8_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong red_j, jlong green_j, jlong blue_j, jlong alpha_j)
				{
					ev_uint8 &red = *(ev_uint8*) red_j;
					ev_uint8 &green = *(ev_uint8*) green_j;
					ev_uint8 &blue = *(ev_uint8*) blue_j;
					ev_uint8 &alpha = *(ev_uint8*) alpha_j;
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->getScannerSolidColor(red, green, blue, alpha);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setHeight_1float(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat value_j)
				{
					const float value = (const float) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setHeight(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setRadarSection_1CRadarSection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong radarSection_j)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection *radarSection = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection*) radarSection_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setRadarSection(radarSection);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getUpVector_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getUpVector();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setUpVector_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &value = *(EarthView::World::Spatial::Math::CVector3*) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setUpVector(value);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getShadeTypeId_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					int __values1 = pObjectX->getShadeTypeId();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getShadeSplitNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					int __values1 = pObjectX->getShadeSplitNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setShadeTypeId_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					const int value = (const int) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setShadeTypeId(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setShadeSplitNum_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint value_j)
				{
					const int value = (const int) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setShadeSplitNum(value);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setShadeAngleDatas_1CShadeAngleDatas(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong shadeAngleDatas_j)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas *shadeAngleDatas = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas*) shadeAngleDatas_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setShadeAngleDatas(shadeAngleDatas);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_setTerrainShadeState_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean value_j)
				{
					const bool value = (const bool) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					pObjectX->setTerrainShadeState(value);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getTerrainShadeState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					bool __values1 = pObjectX->getTerrainShadeState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_getShadeAngleDatas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CShadeAngleDatas* __values1 = pObjectX->getShadeAngleDatas();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCRadarCharacterProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
					else
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* __values1 = pObjectX->clone();
						if(__values1 != NULL) {							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
						}						jlong __values1_j = (jlong) __values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCRadarCharacterProxy *pObjectX = (JCRadarCharacterProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_ev_clone_void_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"ev_clone_void_callback", "()J");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_RadarCharacter_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
