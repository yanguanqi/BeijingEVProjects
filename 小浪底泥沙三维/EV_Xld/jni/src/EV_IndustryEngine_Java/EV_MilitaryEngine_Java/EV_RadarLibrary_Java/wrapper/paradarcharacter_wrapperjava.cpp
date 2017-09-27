/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/paradarcharacter.h"
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
				class JCPARadarCharacterProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter
				{
				 private:
					EarthView::World::Core::ev_string m_getSectionCurve_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCPARadarCharacterProxy(EarthView::World::Core::CNameValuePairList *pList) : CPARadarCharacter(pList)
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
							return this->CPARadarCharacter::clone();
						}
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
							return this->CPARadarCharacter::getSectionCurve();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCPARadarCharacterProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_createRadarSection_1CDegree_1ev_1int32_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong verticalAngleSpan_j, jint verticalNum_j, jdouble overaweDistance_j)
				{
					const EarthView::World::Spatial::Math::CDegree &verticalAngleSpan = *(EarthView::World::Spatial::Math::CDegree*) verticalAngleSpan_j;
					const ev_int32 verticalNum = (const ev_int32) verticalNum_j;
					const ev_real64 overaweDistance = (const ev_real64) overaweDistance_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* __values1 = EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::createRadarSection(verticalAngleSpan, verticalNum, overaweDistance);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_createRadarSection_1CDegree_1CDegree_1ev_1real64(JNIEnv *__env , jclass __clazz, jlong verticalAngleSpan_j, jlong verticalAngleDelta_j, jdouble overaweDistance_j)
				{
					const EarthView::World::Spatial::Math::CDegree &verticalAngleSpan = *(EarthView::World::Spatial::Math::CDegree*) verticalAngleSpan_j;
					const EarthView::World::Spatial::Math::CDegree &verticalAngleDelta = *(EarthView::World::Spatial::Math::CDegree*) verticalAngleDelta_j;
					const ev_real64 overaweDistance = (const ev_real64) overaweDistance_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarSection* __values1 = EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::createRadarSection(verticalAngleSpan, verticalAngleDelta, overaweDistance);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_getVerticalNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getVerticalNum();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_setVerticalNum_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint verticalNum_j)
				{
					const ev_int32 verticalNum = (const ev_int32) verticalNum_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					pObjectX->setVerticalNum(verticalNum);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_getVerticalAngleSpan_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getVerticalAngleSpan();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_setVerticalAngleSpan_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					const EarthView::World::Spatial::Math::CDegree &value = *(EarthView::World::Spatial::Math::CDegree*) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					pObjectX->setVerticalAngleSpan(value);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_getVerticalAngleDelta_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getVerticalAngleDelta();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_setVerticalAngleDelta_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
				{
					const EarthView::World::Spatial::Math::CDegree &value = *(EarthView::World::Spatial::Math::CDegree*) value_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					pObjectX->setVerticalAngleDelta(value);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_getOveraweDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getOveraweDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_setOveraweDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble overaweDistance_j)
				{
					const ev_real64 overaweDistance = (const ev_real64) overaweDistance_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					pObjectX->setOveraweDistance(overaweDistance);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCPARadarCharacterProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::clone();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCPARadarCharacterProxy *pObjectX = (JCPARadarCharacterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CPARadarCharacter::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Paradarcharacter_register_1getSectionCurve_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCPARadarCharacterProxy *pObjectX = (JCPARadarCharacterProxy*) pObjXXXX;
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
			}
		}
	}
}
