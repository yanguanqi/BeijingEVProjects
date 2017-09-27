/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/militaryengine/radarlibrary/msradarcharacter.h"
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
				class JCMSRadarCharacterProxy : public EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter
				{
				 private:
					EarthView::World::Core::ev_string m_getSectionCurve_void_callback;
					EarthView::World::Core::ev_string m_ev_clone_void_callback;
				public:
					JCMSRadarCharacterProxy(EarthView::World::Core::CNameValuePairList *pList) : CMSRadarCharacter(pList)
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
							return this->CMSRadarCharacter::clone();
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
							return this->CMSRadarCharacter::getSectionCurve();
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCMSRadarCharacterProxy);
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarcharacter_getScannerHorizontalAngleSpan_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getScannerHorizontalAngleSpan();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarcharacter_setScannerHorizontalAngleSpan_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong degree_j)
				{
					const EarthView::World::Spatial::Math::CDegree &degree = *(EarthView::World::Spatial::Math::CDegree*) degree_j;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjXXXX;
					pObjectX->setScannerHorizontalAngleSpan(degree);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarcharacter_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCMSRadarCharacterProxy))
					{
						EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter::clone();
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarcharacter_register_1ev_1clone_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarCharacterProxy *pObjectX = (JCMSRadarCharacterProxy*) pObjXXXX;
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarcharacter_ev_1clone_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter *pObjectX = (EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter*) pObjXXXX;
					EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CRadarCharacter* __values1 = pObjectX->EarthView::IndustryEngine::MilitaryEngine::RadarLibrary::CMSRadarCharacter::clone();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_industryengine_militaryengine_radarlibrary_Msradarcharacter_register_1getSectionCurve_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCMSRadarCharacterProxy *pObjectX = (JCMSRadarCharacterProxy*) pObjXXXX;
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
