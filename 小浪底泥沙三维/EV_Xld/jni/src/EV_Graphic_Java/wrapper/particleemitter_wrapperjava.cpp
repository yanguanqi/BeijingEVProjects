/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/particleemitter.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			class JCParticleEmitterProxy : public EarthView::World::Graphic::CParticleEmitter
			{
			 private:
				EarthView::World::Core::ev_string m_getStringInterfacePtr_void_callback;
				EarthView::World::Core::ev_string m_genEmissionDirectionNoRandom_CVector3_callback;
				EarthView::World::Core::ev_string m_genEmissionDirection_CVector3_callback;
				EarthView::World::Core::ev_string m_genEmissionVelocity_CVector3_callback;
				EarthView::World::Core::ev_string m_genEmissionTTL_void_callback;
				EarthView::World::Core::ev_string m_genEmissionColour_CColourValue_callback;
				EarthView::World::Core::ev_string m_genConstantEmissionCount_Real_callback;
				EarthView::World::Core::ev_string m_setPosition_CVector3_callback;
				EarthView::World::Core::ev_string m_getPosition_void_callback;
				EarthView::World::Core::ev_string m_setDirection_CVector3_callback;
				EarthView::World::Core::ev_string m_getDirection_void_callback;
				EarthView::World::Core::ev_string m_setUp_CVector3_callback;
				EarthView::World::Core::ev_string m_getUp_void_callback;
				EarthView::World::Core::ev_string m_setAngle_CRadian_callback;
				EarthView::World::Core::ev_string m_getAngle_void_callback;
				EarthView::World::Core::ev_string m_setParticleVelocity_Real_callback;
				EarthView::World::Core::ev_string m_setParticleVelocity_Real_Real_callback;
				EarthView::World::Core::ev_string m_setMinParticleVelocity_Real_callback;
				EarthView::World::Core::ev_string m_setMaxParticleVelocity_Real_callback;
				EarthView::World::Core::ev_string m_getParticleVelocity_void_callback;
				EarthView::World::Core::ev_string m_getMinParticleVelocity_void_callback;
				EarthView::World::Core::ev_string m_getMaxParticleVelocity_void_callback;
				EarthView::World::Core::ev_string m_setEmissionRate_Real_callback;
				EarthView::World::Core::ev_string m_getEmissionRate_void_callback;
				EarthView::World::Core::ev_string m_setTimeToLive_Real_callback;
				EarthView::World::Core::ev_string m_setTimeToLive_Real_Real_callback;
				EarthView::World::Core::ev_string m_setMinTimeToLive_Real_callback;
				EarthView::World::Core::ev_string m_setMaxTimeToLive_Real_callback;
				EarthView::World::Core::ev_string m_getTimeToLive_void_callback;
				EarthView::World::Core::ev_string m_getMinTimeToLive_void_callback;
				EarthView::World::Core::ev_string m_getMaxTimeToLive_void_callback;
				EarthView::World::Core::ev_string m_setColour_CColourValue_callback;
				EarthView::World::Core::ev_string m_setColour_CColourValue_CColourValue_callback;
				EarthView::World::Core::ev_string m_setColourRangeStart_CColourValue_callback;
				EarthView::World::Core::ev_string m_setColourRangeEnd_CColourValue_callback;
				EarthView::World::Core::ev_string m_getColour_void_callback;
				EarthView::World::Core::ev_string m_getColourRangeStart_void_callback;
				EarthView::World::Core::ev_string m_getColourRangeEnd_void_callback;
				EarthView::World::Core::ev_string m__getEmissionCount_Real_callback;
				EarthView::World::Core::ev_string m__initParticle_CParticle_callback;
				EarthView::World::Core::ev_string m_setEnabled_ev_bool_callback;
				EarthView::World::Core::ev_string m_getEnabled_void_callback;
				EarthView::World::Core::ev_string m_setStartTime_Real_callback;
				EarthView::World::Core::ev_string m_getStartTime_void_callback;
				EarthView::World::Core::ev_string m_setDuration_Real_callback;
				EarthView::World::Core::ev_string m_getDuration_void_callback;
				EarthView::World::Core::ev_string m_setDuration_Real_Real_callback;
				EarthView::World::Core::ev_string m_setMinDuration_Real_callback;
				EarthView::World::Core::ev_string m_setMaxDuration_Real_callback;
				EarthView::World::Core::ev_string m_getMinDuration_void_callback;
				EarthView::World::Core::ev_string m_getMaxDuration_void_callback;
				EarthView::World::Core::ev_string m_setRepeatDelay_Real_callback;
				EarthView::World::Core::ev_string m_getRepeatDelay_void_callback;
				EarthView::World::Core::ev_string m_setRepeatDelay_Real_Real_callback;
				EarthView::World::Core::ev_string m_setMinRepeatDelay_Real_callback;
				EarthView::World::Core::ev_string m_setMaxRepeatDelay_Real_callback;
				EarthView::World::Core::ev_string m_getMinRepeatDelay_void_callback;
				EarthView::World::Core::ev_string m_getMaxRepeatDelay_void_callback;
				EarthView::World::Core::ev_string m_setName_EVString_callback;
				EarthView::World::Core::ev_string m_setEmittedEmitter_EVString_callback;
				EarthView::World::Core::ev_string m_isEmitted_void_callback;
				EarthView::World::Core::ev_string m_setEmitted_ev_bool_callback;
			public:
				JCParticleEmitterProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleEmitter(pList)
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
				void register_getStringInterfacePtr_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStringInterfacePtr_void_callback = __method;
				}
				void register_genEmissionDirectionNoRandom_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_genEmissionDirectionNoRandom_CVector3_callback = __method;
				}
				void register_genEmissionDirection_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_genEmissionDirection_CVector3_callback = __method;
				}
				void register_genEmissionVelocity_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_genEmissionVelocity_CVector3_callback = __method;
				}
				void register_genEmissionTTL_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_genEmissionTTL_void_callback = __method;
				}
				void register_genEmissionColour_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_genEmissionColour_CColourValue_callback = __method;
				}
				void register_genConstantEmissionCount_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_genConstantEmissionCount_Real_callback = __method;
				}
				void register_setPosition_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPosition_CVector3_callback = __method;
				}
				void register_getPosition_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPosition_void_callback = __method;
				}
				void register_setDirection_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDirection_CVector3_callback = __method;
				}
				void register_getDirection_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDirection_void_callback = __method;
				}
				void register_setUp_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUp_CVector3_callback = __method;
				}
				void register_getUp_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUp_void_callback = __method;
				}
				void register_setAngle_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAngle_CRadian_callback = __method;
				}
				void register_getAngle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAngle_void_callback = __method;
				}
				void register_setParticleVelocity_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParticleVelocity_Real_callback = __method;
				}
				void register_setParticleVelocity_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParticleVelocity_Real_Real_callback = __method;
				}
				void register_setMinParticleVelocity_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMinParticleVelocity_Real_callback = __method;
				}
				void register_setMaxParticleVelocity_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaxParticleVelocity_Real_callback = __method;
				}
				void register_getParticleVelocity_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParticleVelocity_void_callback = __method;
				}
				void register_getMinParticleVelocity_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMinParticleVelocity_void_callback = __method;
				}
				void register_getMaxParticleVelocity_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxParticleVelocity_void_callback = __method;
				}
				void register_setEmissionRate_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEmissionRate_Real_callback = __method;
				}
				void register_getEmissionRate_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEmissionRate_void_callback = __method;
				}
				void register_setTimeToLive_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTimeToLive_Real_callback = __method;
				}
				void register_setTimeToLive_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTimeToLive_Real_Real_callback = __method;
				}
				void register_setMinTimeToLive_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMinTimeToLive_Real_callback = __method;
				}
				void register_setMaxTimeToLive_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaxTimeToLive_Real_callback = __method;
				}
				void register_getTimeToLive_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getTimeToLive_void_callback = __method;
				}
				void register_getMinTimeToLive_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMinTimeToLive_void_callback = __method;
				}
				void register_getMaxTimeToLive_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxTimeToLive_void_callback = __method;
				}
				void register_setColour_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setColour_CColourValue_callback = __method;
				}
				void register_setColour_CColourValue_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setColour_CColourValue_CColourValue_callback = __method;
				}
				void register_setColourRangeStart_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setColourRangeStart_CColourValue_callback = __method;
				}
				void register_setColourRangeEnd_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setColourRangeEnd_CColourValue_callback = __method;
				}
				void register_getColour_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getColour_void_callback = __method;
				}
				void register_getColourRangeStart_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getColourRangeStart_void_callback = __method;
				}
				void register_getColourRangeEnd_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getColourRangeEnd_void_callback = __method;
				}
				void register__getEmissionCount_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getEmissionCount_Real_callback = __method;
				}
				void register__initParticle_CParticle_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__initParticle_CParticle_callback = __method;
				}
				void register_setEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEnabled_ev_bool_callback = __method;
				}
				void register_getEnabled_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEnabled_void_callback = __method;
				}
				void register_setStartTime_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setStartTime_Real_callback = __method;
				}
				void register_getStartTime_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStartTime_void_callback = __method;
				}
				void register_setDuration_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDuration_Real_callback = __method;
				}
				void register_getDuration_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDuration_void_callback = __method;
				}
				void register_setDuration_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDuration_Real_Real_callback = __method;
				}
				void register_setMinDuration_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMinDuration_Real_callback = __method;
				}
				void register_setMaxDuration_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaxDuration_Real_callback = __method;
				}
				void register_getMinDuration_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMinDuration_void_callback = __method;
				}
				void register_getMaxDuration_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxDuration_void_callback = __method;
				}
				void register_setRepeatDelay_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRepeatDelay_Real_callback = __method;
				}
				void register_getRepeatDelay_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRepeatDelay_void_callback = __method;
				}
				void register_setRepeatDelay_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRepeatDelay_Real_Real_callback = __method;
				}
				void register_setMinRepeatDelay_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMinRepeatDelay_Real_callback = __method;
				}
				void register_setMaxRepeatDelay_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMaxRepeatDelay_Real_callback = __method;
				}
				void register_getMinRepeatDelay_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMinRepeatDelay_void_callback = __method;
				}
				void register_getMaxRepeatDelay_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMaxRepeatDelay_void_callback = __method;
				}
				void register_setName_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setName_EVString_callback = __method;
				}
				void register_setEmittedEmitter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEmittedEmitter_EVString_callback = __method;
				}
				void register_isEmitted_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isEmitted_void_callback = __method;
				}
				void register_setEmitted_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setEmitted_ev_bool_callback = __method;
				}
				virtual EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* getStringInterfacePtr()
				{
					if (this->_gRef != NULL && this->m_getStringInterfacePtr_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getStringInterfacePtr_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface *__values1 = (EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleEmitter::getStringInterfacePtr();
					}
				}
				virtual void genEmissionDirectionNoRandom(EarthView::World::Spatial::Math::CVector3& destVector)
				{
					if (this->_gRef != NULL && this->m_genEmissionDirectionNoRandom_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destVector_j = (jlong) &destVector;
						jmethodID __method = __gr->getMethod("genEmissionDirectionNoRandom_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , destVector_j);
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
						return this->CParticleEmitter::genEmissionDirectionNoRandom(destVector);
					}
				}
				virtual void genEmissionDirection(EarthView::World::Spatial::Math::CVector3& destVector)
				{
					if (this->_gRef != NULL && this->m_genEmissionDirection_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destVector_j = (jlong) &destVector;
						jmethodID __method = __gr->getMethod("genEmissionDirection_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , destVector_j);
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
						return this->CParticleEmitter::genEmissionDirection(destVector);
					}
				}
				virtual void genEmissionVelocity(EarthView::World::Spatial::Math::CVector3& destVector)
				{
					if (this->_gRef != NULL && this->m_genEmissionVelocity_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destVector_j = (jlong) &destVector;
						jmethodID __method = __gr->getMethod("genEmissionVelocity_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , destVector_j);
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
						return this->CParticleEmitter::genEmissionVelocity(destVector);
					}
				}
				virtual Real genEmissionTTL()
				{
					if (this->_gRef != NULL && this->m_genEmissionTTL_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("genEmissionTTL_void_callback");
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
						return this->CParticleEmitter::genEmissionTTL();
					}
				}
				virtual void genEmissionColour(EarthView::World::Graphic::CColourValue& destColour)
				{
					if (this->_gRef != NULL && this->m_genEmissionColour_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong destColour_j = (jlong) &destColour;
						jmethodID __method = __gr->getMethod("genEmissionColour_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , destColour_j);
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
						return this->CParticleEmitter::genEmissionColour(destColour);
					}
				}
				virtual ev_uint16 genConstantEmissionCount(Real timeElapsed)
				{
					if (this->_gRef != NULL && this->m_genConstantEmissionCount_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble timeElapsed_j = (jdouble) timeElapsed;
						jmethodID __method = __gr->getMethod("genConstantEmissionCount_Real_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , timeElapsed_j);
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
						return this->CParticleEmitter::genConstantEmissionCount(timeElapsed);
					}
				}
				virtual void setPosition(const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if (this->_gRef != NULL && this->m_setPosition_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pos_j = (jlong) &pos;
						jmethodID __method = __gr->getMethod("setPosition_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , pos_j);
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
						return this->CParticleEmitter::setPosition(pos);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getPosition() const
				{
					if (this->_gRef != NULL && this->m_getPosition_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getPosition_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleEmitter::getPosition();
					}
				}
				virtual void setDirection(const EarthView::World::Spatial::Math::CVector3& direction)
				{
					if (this->_gRef != NULL && this->m_setDirection_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong direction_j = (jlong) &direction;
						jmethodID __method = __gr->getMethod("setDirection_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , direction_j);
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
						return this->CParticleEmitter::setDirection(direction);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getDirection() const
				{
					if (this->_gRef != NULL && this->m_getDirection_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDirection_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleEmitter::getDirection();
					}
				}
				virtual void setUp(const EarthView::World::Spatial::Math::CVector3& up)
				{
					if (this->_gRef != NULL && this->m_setUp_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong up_j = (jlong) &up;
						jmethodID __method = __gr->getMethod("setUp_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , up_j);
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
						return this->CParticleEmitter::setUp(up);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getUp() const
				{
					if (this->_gRef != NULL && this->m_getUp_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getUp_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CVector3 &__values1 = *(const EarthView::World::Spatial::Math::CVector3*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleEmitter::getUp();
					}
				}
				virtual void setAngle(const EarthView::World::Spatial::Math::CRadian& angle)
				{
					if (this->_gRef != NULL && this->m_setAngle_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong angle_j = (jlong) &angle;
						jmethodID __method = __gr->getMethod("setAngle_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , angle_j);
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
						return this->CParticleEmitter::setAngle(angle);
					}
				}
				virtual const EarthView::World::Spatial::Math::CRadian& getAngle() const
				{
					if (this->_gRef != NULL && this->m_getAngle_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getAngle_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CRadian &__values1 = *(const EarthView::World::Spatial::Math::CRadian*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CParticleEmitter::getAngle();
					}
				}
				virtual void setParticleVelocity(Real speed)
				{
					if (this->_gRef != NULL && this->m_setParticleVelocity_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble speed_j = (jdouble) speed;
						jmethodID __method = __gr->getMethod("setParticleVelocity_Real_callback");
						__env->CallVoidMethod(__obj, __method , speed_j);
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
						return this->CParticleEmitter::setParticleVelocity(speed);
					}
				}
				virtual void setParticleVelocity(Real min, Real max)
				{
					if (this->_gRef != NULL && this->m_setParticleVelocity_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble min_j = (jdouble) min;
						jdouble max_j = (jdouble) max;
						jmethodID __method = __gr->getMethod("setParticleVelocity_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , min_j, max_j);
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
						return this->CParticleEmitter::setParticleVelocity(min, max);
					}
				}
				virtual void setMinParticleVelocity(Real min)
				{
					if (this->_gRef != NULL && this->m_setMinParticleVelocity_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble min_j = (jdouble) min;
						jmethodID __method = __gr->getMethod("setMinParticleVelocity_Real_callback");
						__env->CallVoidMethod(__obj, __method , min_j);
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
						return this->CParticleEmitter::setMinParticleVelocity(min);
					}
				}
				virtual void setMaxParticleVelocity(Real max)
				{
					if (this->_gRef != NULL && this->m_setMaxParticleVelocity_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble max_j = (jdouble) max;
						jmethodID __method = __gr->getMethod("setMaxParticleVelocity_Real_callback");
						__env->CallVoidMethod(__obj, __method , max_j);
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
						return this->CParticleEmitter::setMaxParticleVelocity(max);
					}
				}
				virtual Real getParticleVelocity() const
				{
					if (this->_gRef != NULL && this->m_getParticleVelocity_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getParticleVelocity_void_callback");
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
						return this->CParticleEmitter::getParticleVelocity();
					}
				}
				virtual Real getMinParticleVelocity() const
				{
					if (this->_gRef != NULL && this->m_getMinParticleVelocity_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMinParticleVelocity_void_callback");
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
						return this->CParticleEmitter::getMinParticleVelocity();
					}
				}
				virtual Real getMaxParticleVelocity() const
				{
					if (this->_gRef != NULL && this->m_getMaxParticleVelocity_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMaxParticleVelocity_void_callback");
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
						return this->CParticleEmitter::getMaxParticleVelocity();
					}
				}
				virtual void setEmissionRate(Real particlesPerSecond)
				{
					if (this->_gRef != NULL && this->m_setEmissionRate_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble particlesPerSecond_j = (jdouble) particlesPerSecond;
						jmethodID __method = __gr->getMethod("setEmissionRate_Real_callback");
						__env->CallVoidMethod(__obj, __method , particlesPerSecond_j);
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
						return this->CParticleEmitter::setEmissionRate(particlesPerSecond);
					}
				}
				virtual Real getEmissionRate() const
				{
					if (this->_gRef != NULL && this->m_getEmissionRate_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getEmissionRate_void_callback");
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
						return this->CParticleEmitter::getEmissionRate();
					}
				}
				virtual void setTimeToLive(Real ttl)
				{
					if (this->_gRef != NULL && this->m_setTimeToLive_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble ttl_j = (jdouble) ttl;
						jmethodID __method = __gr->getMethod("setTimeToLive_Real_callback");
						__env->CallVoidMethod(__obj, __method , ttl_j);
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
						return this->CParticleEmitter::setTimeToLive(ttl);
					}
				}
				virtual void setTimeToLive(Real minTtl, Real maxTtl)
				{
					if (this->_gRef != NULL && this->m_setTimeToLive_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble minTtl_j = (jdouble) minTtl;
						jdouble maxTtl_j = (jdouble) maxTtl;
						jmethodID __method = __gr->getMethod("setTimeToLive_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , minTtl_j, maxTtl_j);
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
						return this->CParticleEmitter::setTimeToLive(minTtl, maxTtl);
					}
				}
				virtual void setMinTimeToLive(Real min)
				{
					if (this->_gRef != NULL && this->m_setMinTimeToLive_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble min_j = (jdouble) min;
						jmethodID __method = __gr->getMethod("setMinTimeToLive_Real_callback");
						__env->CallVoidMethod(__obj, __method , min_j);
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
						return this->CParticleEmitter::setMinTimeToLive(min);
					}
				}
				virtual void setMaxTimeToLive(Real max)
				{
					if (this->_gRef != NULL && this->m_setMaxTimeToLive_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble max_j = (jdouble) max;
						jmethodID __method = __gr->getMethod("setMaxTimeToLive_Real_callback");
						__env->CallVoidMethod(__obj, __method , max_j);
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
						return this->CParticleEmitter::setMaxTimeToLive(max);
					}
				}
				virtual Real getTimeToLive() const
				{
					if (this->_gRef != NULL && this->m_getTimeToLive_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getTimeToLive_void_callback");
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
						return this->CParticleEmitter::getTimeToLive();
					}
				}
				virtual Real getMinTimeToLive() const
				{
					if (this->_gRef != NULL && this->m_getMinTimeToLive_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMinTimeToLive_void_callback");
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
						return this->CParticleEmitter::getMinTimeToLive();
					}
				}
				virtual Real getMaxTimeToLive() const
				{
					if (this->_gRef != NULL && this->m_getMaxTimeToLive_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMaxTimeToLive_void_callback");
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
						return this->CParticleEmitter::getMaxTimeToLive();
					}
				}
				virtual void setColour(const EarthView::World::Graphic::CColourValue& colour)
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
						jlong colour_j = (jlong) &colour;
						jmethodID __method = __gr->getMethod("setColour_CColourValue_callback");
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
						return this->CParticleEmitter::setColour(colour);
					}
				}
				virtual void setColour(const EarthView::World::Graphic::CColourValue& colourStart, const EarthView::World::Graphic::CColourValue& colourEnd)
				{
					if (this->_gRef != NULL && this->m_setColour_CColourValue_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong colourStart_j = (jlong) &colourStart;
						jlong colourEnd_j = (jlong) &colourEnd;
						jmethodID __method = __gr->getMethod("setColour_CColourValue_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , colourStart_j, colourEnd_j);
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
						return this->CParticleEmitter::setColour(colourStart, colourEnd);
					}
				}
				virtual void setColourRangeStart(const EarthView::World::Graphic::CColourValue& colour)
				{
					if (this->_gRef != NULL && this->m_setColourRangeStart_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("setColourRangeStart_CColourValue_callback");
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
						return this->CParticleEmitter::setColourRangeStart(colour);
					}
				}
				virtual void setColourRangeEnd(const EarthView::World::Graphic::CColourValue& colour)
				{
					if (this->_gRef != NULL && this->m_setColourRangeEnd_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("setColourRangeEnd_CColourValue_callback");
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
						return this->CParticleEmitter::setColourRangeEnd(colour);
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
						return this->CParticleEmitter::getColour();
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getColourRangeStart() const
				{
					if (this->_gRef != NULL && this->m_getColourRangeStart_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getColourRangeStart_void_callback");
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
						return this->CParticleEmitter::getColourRangeStart();
					}
				}
				virtual const EarthView::World::Graphic::CColourValue& getColourRangeEnd() const
				{
					if (this->_gRef != NULL && this->m_getColourRangeEnd_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getColourRangeEnd_void_callback");
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
						return this->CParticleEmitter::getColourRangeEnd();
					}
				}
				virtual ev_uint16 _getEmissionCount(Real timeElapsed)
				{
					if (this->_gRef != NULL && this->m__getEmissionCount_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble timeElapsed_j = (jdouble) timeElapsed;
						jmethodID __method = __gr->getMethod("_getEmissionCount_Real_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method , timeElapsed_j);
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
						return this->CParticleEmitter::_getEmissionCount(timeElapsed);
					}
				}
				virtual void _initParticle(EarthView::World::Graphic::CParticle* pParticle)
				{
					if (this->_gRef != NULL && this->m__initParticle_CParticle_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pParticle_j = (jlong) pParticle;
						jmethodID __method = __gr->getMethod("_initParticle_CParticle_callback");
						__env->CallVoidMethod(__obj, __method , pParticle_j);
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
						return this->CParticleEmitter::_initParticle(pParticle);
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
						return this->CParticleEmitter::setEnabled(enabled);
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
						return this->CParticleEmitter::getEnabled();
					}
				}
				virtual void setStartTime(Real startTime)
				{
					if (this->_gRef != NULL && this->m_setStartTime_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble startTime_j = (jdouble) startTime;
						jmethodID __method = __gr->getMethod("setStartTime_Real_callback");
						__env->CallVoidMethod(__obj, __method , startTime_j);
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
						return this->CParticleEmitter::setStartTime(startTime);
					}
				}
				virtual Real getStartTime() const
				{
					if (this->_gRef != NULL && this->m_getStartTime_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getStartTime_void_callback");
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
						return this->CParticleEmitter::getStartTime();
					}
				}
				virtual void setDuration(Real duration)
				{
					if (this->_gRef != NULL && this->m_setDuration_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble duration_j = (jdouble) duration;
						jmethodID __method = __gr->getMethod("setDuration_Real_callback");
						__env->CallVoidMethod(__obj, __method , duration_j);
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
						return this->CParticleEmitter::setDuration(duration);
					}
				}
				virtual Real getDuration() const
				{
					if (this->_gRef != NULL && this->m_getDuration_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDuration_void_callback");
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
						return this->CParticleEmitter::getDuration();
					}
				}
				virtual void setDuration(Real min, Real max)
				{
					if (this->_gRef != NULL && this->m_setDuration_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble min_j = (jdouble) min;
						jdouble max_j = (jdouble) max;
						jmethodID __method = __gr->getMethod("setDuration_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , min_j, max_j);
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
						return this->CParticleEmitter::setDuration(min, max);
					}
				}
				virtual void setMinDuration(Real min)
				{
					if (this->_gRef != NULL && this->m_setMinDuration_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble min_j = (jdouble) min;
						jmethodID __method = __gr->getMethod("setMinDuration_Real_callback");
						__env->CallVoidMethod(__obj, __method , min_j);
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
						return this->CParticleEmitter::setMinDuration(min);
					}
				}
				virtual void setMaxDuration(Real max)
				{
					if (this->_gRef != NULL && this->m_setMaxDuration_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble max_j = (jdouble) max;
						jmethodID __method = __gr->getMethod("setMaxDuration_Real_callback");
						__env->CallVoidMethod(__obj, __method , max_j);
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
						return this->CParticleEmitter::setMaxDuration(max);
					}
				}
				virtual Real getMinDuration() const
				{
					if (this->_gRef != NULL && this->m_getMinDuration_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMinDuration_void_callback");
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
						return this->CParticleEmitter::getMinDuration();
					}
				}
				virtual Real getMaxDuration() const
				{
					if (this->_gRef != NULL && this->m_getMaxDuration_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMaxDuration_void_callback");
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
						return this->CParticleEmitter::getMaxDuration();
					}
				}
				virtual void setRepeatDelay(Real duration)
				{
					if (this->_gRef != NULL && this->m_setRepeatDelay_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble duration_j = (jdouble) duration;
						jmethodID __method = __gr->getMethod("setRepeatDelay_Real_callback");
						__env->CallVoidMethod(__obj, __method , duration_j);
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
						return this->CParticleEmitter::setRepeatDelay(duration);
					}
				}
				virtual Real getRepeatDelay() const
				{
					if (this->_gRef != NULL && this->m_getRepeatDelay_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getRepeatDelay_void_callback");
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
						return this->CParticleEmitter::getRepeatDelay();
					}
				}
				virtual void setRepeatDelay(Real min, Real max)
				{
					if (this->_gRef != NULL && this->m_setRepeatDelay_Real_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble min_j = (jdouble) min;
						jdouble max_j = (jdouble) max;
						jmethodID __method = __gr->getMethod("setRepeatDelay_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , min_j, max_j);
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
						return this->CParticleEmitter::setRepeatDelay(min, max);
					}
				}
				virtual void setMinRepeatDelay(Real min)
				{
					if (this->_gRef != NULL && this->m_setMinRepeatDelay_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble min_j = (jdouble) min;
						jmethodID __method = __gr->getMethod("setMinRepeatDelay_Real_callback");
						__env->CallVoidMethod(__obj, __method , min_j);
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
						return this->CParticleEmitter::setMinRepeatDelay(min);
					}
				}
				virtual void setMaxRepeatDelay(Real max)
				{
					if (this->_gRef != NULL && this->m_setMaxRepeatDelay_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble max_j = (jdouble) max;
						jmethodID __method = __gr->getMethod("setMaxRepeatDelay_Real_callback");
						__env->CallVoidMethod(__obj, __method , max_j);
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
						return this->CParticleEmitter::setMaxRepeatDelay(max);
					}
				}
				virtual Real getMinRepeatDelay() const
				{
					if (this->_gRef != NULL && this->m_getMinRepeatDelay_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMinRepeatDelay_void_callback");
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
						return this->CParticleEmitter::getMinRepeatDelay();
					}
				}
				virtual Real getMaxRepeatDelay() const
				{
					if (this->_gRef != NULL && this->m_getMaxRepeatDelay_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMaxRepeatDelay_void_callback");
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
						return this->CParticleEmitter::getMaxRepeatDelay();
					}
				}
				virtual void setName(const EVString& newName)
				{
					if (this->_gRef != NULL && this->m_setName_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring newName_wch = newName;
						jstring newName_j = __env->NewString((const jchar*)newName_wch.getString(), newName_wch.size());
						jmethodID __method = __gr->getMethod("setName_EVString_callback");
						__env->CallVoidMethod(__obj, __method , newName_j);
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
						return this->CParticleEmitter::setName(newName);
					}
				}
				virtual void setEmittedEmitter(const EVString& emittedEmitter)
				{
					if (this->_gRef != NULL && this->m_setEmittedEmitter_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring emittedEmitter_wch = emittedEmitter;
						jstring emittedEmitter_j = __env->NewString((const jchar*)emittedEmitter_wch.getString(), emittedEmitter_wch.size());
						jmethodID __method = __gr->getMethod("setEmittedEmitter_EVString_callback");
						__env->CallVoidMethod(__obj, __method , emittedEmitter_j);
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
						return this->CParticleEmitter::setEmittedEmitter(emittedEmitter);
					}
				}
				virtual ev_bool isEmitted() const
				{
					if (this->_gRef != NULL && this->m_isEmitted_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isEmitted_void_callback");
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
						return this->CParticleEmitter::isEmitted();
					}
				}
				virtual void setEmitted(ev_bool emitted)
				{
					if (this->_gRef != NULL && this->m_setEmitted_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean emitted_j = (jboolean) emitted;
						jmethodID __method = __gr->getMethod("setEmitted_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , emitted_j);
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
						return this->CParticleEmitter::setEmitted(emitted);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleEmitterProxy);
			class JCParticleEmitterInternalStringInterfaceProxy : public EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface
			{
			 private:
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCParticleEmitterInternalStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CParticleEmitterInternalStringInterface(pList)
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
						return this->CParticleEmitterInternalStringInterface::setParameter(name, value);
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
						return this->CParticleEmitterInternalStringInterface::setParameter(name, readOnly, enable);
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
						return this->CParticleEmitterInternalStringInterface::setParameterList(paramList);
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
						return this->CParticleEmitterInternalStringInterface::getParameter(name);
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
						return this->CParticleEmitterInternalStringInterface::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCParticleEmitterInternalStringInterfaceProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_00024ParticleEmitterInternalStringInterface_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterInternalStringInterfaceProxy *pObjectX = (JCParticleEmitterInternalStringInterfaceProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_00024ParticleEmitterInternalStringInterface_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterInternalStringInterfaceProxy *pObjectX = (JCParticleEmitterInternalStringInterfaceProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_00024ParticleEmitterInternalStringInterface_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterInternalStringInterfaceProxy *pObjectX = (JCParticleEmitterInternalStringInterfaceProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_00024ParticleEmitterInternalStringInterface_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterInternalStringInterfaceProxy *pObjectX = (JCParticleEmitterInternalStringInterfaceProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_00024ParticleEmitterInternalStringInterface_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterInternalStringInterfaceProxy *pObjectX = (JCParticleEmitterInternalStringInterfaceProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getStringInterfacePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getStringInterfacePtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* __values1 = pObjectX->getStringInterfacePtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getStringInterfacePtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStringInterfacePtr_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStringInterfacePtr_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getStringInterfacePtr_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				EarthView::World::Graphic::CParticleEmitter::CParticleEmitterInternalStringInterface* __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getStringInterfacePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionDirectionNoRandom_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destVector_j)
			{
				EarthView::World::Spatial::Math::CVector3 &destVector = *(EarthView::World::Spatial::Math::CVector3*) destVector_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionDirectionNoRandom(destVector);
				}
				else
				{
					pObjectX->genEmissionDirectionNoRandom(destVector);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1genEmissionDirectionNoRandom_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_genEmissionDirectionNoRandom_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"genEmissionDirectionNoRandom_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionDirectionNoRandom_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destVector_j)
			{
				EarthView::World::Spatial::Math::CVector3 &destVector = *(EarthView::World::Spatial::Math::CVector3*) destVector_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionDirectionNoRandom(destVector);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionDirection_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destVector_j)
			{
				EarthView::World::Spatial::Math::CVector3 &destVector = *(EarthView::World::Spatial::Math::CVector3*) destVector_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionDirection(destVector);
				}
				else
				{
					pObjectX->genEmissionDirection(destVector);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1genEmissionDirection_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_genEmissionDirection_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"genEmissionDirection_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionDirection_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destVector_j)
			{
				EarthView::World::Spatial::Math::CVector3 &destVector = *(EarthView::World::Spatial::Math::CVector3*) destVector_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionDirection(destVector);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionVelocity_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destVector_j)
			{
				EarthView::World::Spatial::Math::CVector3 &destVector = *(EarthView::World::Spatial::Math::CVector3*) destVector_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionVelocity(destVector);
				}
				else
				{
					pObjectX->genEmissionVelocity(destVector);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1genEmissionVelocity_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_genEmissionVelocity_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"genEmissionVelocity_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionVelocity_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destVector_j)
			{
				EarthView::World::Spatial::Math::CVector3 &destVector = *(EarthView::World::Spatial::Math::CVector3*) destVector_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionVelocity(destVector);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionTTL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionTTL();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->genEmissionTTL();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1genEmissionTTL_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_genEmissionTTL_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"genEmissionTTL_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionTTL_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionTTL();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destColour_j)
			{
				EarthView::World::Graphic::CColourValue &destColour = *(EarthView::World::Graphic::CColourValue*) destColour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionColour(destColour);
				}
				else
				{
					pObjectX->genEmissionColour(destColour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1genEmissionColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_genEmissionColour_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"genEmissionColour_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genEmissionColour_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destColour_j)
			{
				EarthView::World::Graphic::CColourValue &destColour = *(EarthView::World::Graphic::CColourValue*) destColour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::genEmissionColour(destColour);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genConstantEmissionCount_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeElapsed_j)
			{
				Real timeElapsed = (Real) timeElapsed_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::genConstantEmissionCount(timeElapsed);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->genConstantEmissionCount(timeElapsed);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1genConstantEmissionCount_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_genConstantEmissionCount_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"genConstantEmissionCount_Real_callback", "(D)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ParticleEmitter_genConstantEmissionCount_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeElapsed_j)
			{
				Real timeElapsed = (Real) timeElapsed_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::genConstantEmissionCount(timeElapsed);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_addBaseParameters_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->addBaseParameters();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setPosition_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setPosition(pos);
				}
				else
				{
					pObjectX->setPosition(pos);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPosition_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setPosition_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setPosition(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPosition_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPosition_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getPosition_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getPosition();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setDirection_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong direction_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &direction = *(EarthView::World::Spatial::Math::CVector3*) direction_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setDirection(direction);
				}
				else
				{
					pObjectX->setDirection(direction);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setDirection_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDirection_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDirection_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setDirection_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong direction_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &direction = *(EarthView::World::Spatial::Math::CVector3*) direction_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setDirection(direction);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getDirection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getDirection();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getDirection();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getDirection_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDirection_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDirection_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getDirection_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getDirection();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setUp_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong up_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &up = *(EarthView::World::Spatial::Math::CVector3*) up_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setUp(up);
				}
				else
				{
					pObjectX->setUp(up);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setUp_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUp_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUp_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setUp_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong up_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &up = *(EarthView::World::Spatial::Math::CVector3*) up_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setUp(up);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getUp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getUp();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getUp();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getUp_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUp_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUp_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getUp_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getUp();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setAngle_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setAngle(angle);
				}
				else
				{
					pObjectX->setAngle(angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setAngle_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAngle_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAngle_CRadian_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setAngle_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
			{
				const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setAngle(angle);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getAngle();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->getAngle();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAngle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAngle_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getAngle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getAngle();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setParticleVelocity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble speed_j)
			{
				Real speed = (Real) speed_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setParticleVelocity(speed);
				}
				else
				{
					pObjectX->setParticleVelocity(speed);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setParticleVelocity_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParticleVelocity_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParticleVelocity_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setParticleVelocity_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble speed_j)
			{
				Real speed = (Real) speed_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setParticleVelocity(speed);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setParticleVelocity_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j)
			{
				Real min = (Real) min_j;
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setParticleVelocity(min, max);
				}
				else
				{
					pObjectX->setParticleVelocity(min, max);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setParticleVelocity_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParticleVelocity_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParticleVelocity_Real_Real_callback", "(DD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setParticleVelocity_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j)
			{
				Real min = (Real) min_j;
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setParticleVelocity(min, max);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinParticleVelocity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinParticleVelocity(min);
				}
				else
				{
					pObjectX->setMinParticleVelocity(min);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMinParticleVelocity_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMinParticleVelocity_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMinParticleVelocity_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinParticleVelocity_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinParticleVelocity(min);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxParticleVelocity_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxParticleVelocity(max);
				}
				else
				{
					pObjectX->setMaxParticleVelocity(max);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMaxParticleVelocity_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaxParticleVelocity_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaxParticleVelocity_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxParticleVelocity_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxParticleVelocity(max);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getParticleVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getParticleVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getParticleVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getParticleVelocity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParticleVelocity_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParticleVelocity_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getParticleVelocity_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getParticleVelocity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinParticleVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinParticleVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMinParticleVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMinParticleVelocity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMinParticleVelocity_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMinParticleVelocity_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinParticleVelocity_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinParticleVelocity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxParticleVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxParticleVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMaxParticleVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMaxParticleVelocity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxParticleVelocity_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxParticleVelocity_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxParticleVelocity_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxParticleVelocity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEmissionRate_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble particlesPerSecond_j)
			{
				Real particlesPerSecond = (Real) particlesPerSecond_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setEmissionRate(particlesPerSecond);
				}
				else
				{
					pObjectX->setEmissionRate(particlesPerSecond);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setEmissionRate_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEmissionRate_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEmissionRate_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEmissionRate_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble particlesPerSecond_j)
			{
				Real particlesPerSecond = (Real) particlesPerSecond_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setEmissionRate(particlesPerSecond);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getEmissionRate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getEmissionRate();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getEmissionRate();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getEmissionRate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEmissionRate_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEmissionRate_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getEmissionRate_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getEmissionRate();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setTimeToLive_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble ttl_j)
			{
				Real ttl = (Real) ttl_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setTimeToLive(ttl);
				}
				else
				{
					pObjectX->setTimeToLive(ttl);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setTimeToLive_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTimeToLive_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTimeToLive_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setTimeToLive_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble ttl_j)
			{
				Real ttl = (Real) ttl_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setTimeToLive(ttl);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setTimeToLive_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minTtl_j, jdouble maxTtl_j)
			{
				Real minTtl = (Real) minTtl_j;
				Real maxTtl = (Real) maxTtl_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setTimeToLive(minTtl, maxTtl);
				}
				else
				{
					pObjectX->setTimeToLive(minTtl, maxTtl);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setTimeToLive_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTimeToLive_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTimeToLive_Real_Real_callback", "(DD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setTimeToLive_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble minTtl_j, jdouble maxTtl_j)
			{
				Real minTtl = (Real) minTtl_j;
				Real maxTtl = (Real) maxTtl_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setTimeToLive(minTtl, maxTtl);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinTimeToLive_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinTimeToLive(min);
				}
				else
				{
					pObjectX->setMinTimeToLive(min);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMinTimeToLive_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMinTimeToLive_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMinTimeToLive_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinTimeToLive_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinTimeToLive(min);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxTimeToLive_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxTimeToLive(max);
				}
				else
				{
					pObjectX->setMaxTimeToLive(max);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMaxTimeToLive_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaxTimeToLive_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaxTimeToLive_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxTimeToLive_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxTimeToLive(max);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getTimeToLive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getTimeToLive();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getTimeToLive();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getTimeToLive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getTimeToLive_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getTimeToLive_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getTimeToLive_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getTimeToLive();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinTimeToLive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinTimeToLive();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMinTimeToLive();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMinTimeToLive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMinTimeToLive_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMinTimeToLive_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinTimeToLive_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinTimeToLive();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxTimeToLive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxTimeToLive();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMaxTimeToLive();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMaxTimeToLive_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxTimeToLive_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxTimeToLive_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxTimeToLive_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxTimeToLive();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setColour(colour);
				}
				else
				{
					pObjectX->setColour(colour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setColour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColour_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setColour(colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColour_1CColourValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colourStart_j, jlong colourEnd_j)
			{
				const EarthView::World::Graphic::CColourValue &colourStart = *(EarthView::World::Graphic::CColourValue*) colourStart_j;
				const EarthView::World::Graphic::CColourValue &colourEnd = *(EarthView::World::Graphic::CColourValue*) colourEnd_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setColour(colourStart, colourEnd);
				}
				else
				{
					pObjectX->setColour(colourStart, colourEnd);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setColour_1CColourValue_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setColour_CColourValue_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setColour_CColourValue_CColourValue_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColour_1CColourValue_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colourStart_j, jlong colourEnd_j)
			{
				const EarthView::World::Graphic::CColourValue &colourStart = *(EarthView::World::Graphic::CColourValue*) colourStart_j;
				const EarthView::World::Graphic::CColourValue &colourEnd = *(EarthView::World::Graphic::CColourValue*) colourEnd_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setColour(colourStart, colourEnd);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColourRangeStart_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setColourRangeStart(colour);
				}
				else
				{
					pObjectX->setColourRangeStart(colour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setColourRangeStart_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setColourRangeStart_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setColourRangeStart_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColourRangeStart_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setColourRangeStart(colour);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColourRangeEnd_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setColourRangeEnd(colour);
				}
				else
				{
					pObjectX->setColourRangeEnd(colour);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setColourRangeEnd_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setColourRangeEnd_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setColourRangeEnd_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setColourRangeEnd_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setColourRangeEnd(colour);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getColour();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getColour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getColour_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getColourRangeStart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getColourRangeStart();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getColourRangeStart();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getColourRangeStart_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getColourRangeStart_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getColourRangeStart_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getColourRangeStart_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getColourRangeStart();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getColourRangeEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getColourRangeEnd();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getColourRangeEnd();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getColourRangeEnd_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getColourRangeEnd_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getColourRangeEnd_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getColourRangeEnd_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getColourRangeEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ParticleEmitter__1getEmissionCount_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeElapsed_j)
			{
				Real timeElapsed = (Real) timeElapsed_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::_getEmissionCount(timeElapsed);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->_getEmissionCount(timeElapsed);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1_1getEmissionCount_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getEmissionCount_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getEmissionCount_Real_callback", "(D)I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_ParticleEmitter__1getEmissionCount_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeElapsed_j)
			{
				Real timeElapsed = (Real) timeElapsed_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::_getEmissionCount(timeElapsed);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter__1initParticle_1CParticle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParticle_j)
			{
				EarthView::World::Graphic::CParticle *pParticle = (EarthView::World::Graphic::CParticle*) pParticle_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::_initParticle(pParticle);
				}
				else
				{
					pObjectX->_initParticle(pParticle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1_1initParticle_1CParticle(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__initParticle_CParticle_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_initParticle_CParticle_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter__1initParticle_1CParticle_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pParticle_j)
			{
				EarthView::World::Graphic::CParticle *pParticle = (EarthView::World::Graphic::CParticle*) pParticle_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::_initParticle(pParticle);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EVString& __values1 = pObjectX->getType();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setEnabled(enabled);
				}
				else
				{
					pObjectX->setEnabled(enabled);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getEnabled();
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getEnabled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getEnabled_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setStartTime_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble startTime_j)
			{
				Real startTime = (Real) startTime_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setStartTime(startTime);
				}
				else
				{
					pObjectX->setStartTime(startTime);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setStartTime_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setStartTime_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setStartTime_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setStartTime_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble startTime_j)
			{
				Real startTime = (Real) startTime_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setStartTime(startTime);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getStartTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getStartTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getStartTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getStartTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStartTime_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStartTime_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getStartTime_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getStartTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setDuration_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble duration_j)
			{
				Real duration = (Real) duration_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setDuration(duration);
				}
				else
				{
					pObjectX->setDuration(duration);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setDuration_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDuration_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDuration_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setDuration_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble duration_j)
			{
				Real duration = (Real) duration_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setDuration(duration);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getDuration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getDuration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDuration_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDuration_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getDuration_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getDuration();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setDuration_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j)
			{
				Real min = (Real) min_j;
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setDuration(min, max);
				}
				else
				{
					pObjectX->setDuration(min, max);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setDuration_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDuration_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDuration_Real_Real_callback", "(DD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setDuration_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j)
			{
				Real min = (Real) min_j;
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setDuration(min, max);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinDuration_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinDuration(min);
				}
				else
				{
					pObjectX->setMinDuration(min);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMinDuration_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMinDuration_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMinDuration_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinDuration_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinDuration(min);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxDuration_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxDuration(max);
				}
				else
				{
					pObjectX->setMaxDuration(max);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMaxDuration_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaxDuration_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaxDuration_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxDuration_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxDuration(max);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinDuration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMinDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMinDuration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMinDuration_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMinDuration_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinDuration_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinDuration();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxDuration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMaxDuration();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMaxDuration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxDuration_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxDuration_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxDuration_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxDuration();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setRepeatDelay_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble duration_j)
			{
				Real duration = (Real) duration_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setRepeatDelay(duration);
				}
				else
				{
					pObjectX->setRepeatDelay(duration);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setRepeatDelay_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRepeatDelay_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRepeatDelay_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setRepeatDelay_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble duration_j)
			{
				Real duration = (Real) duration_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setRepeatDelay(duration);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getRepeatDelay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getRepeatDelay();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getRepeatDelay();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getRepeatDelay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRepeatDelay_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRepeatDelay_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getRepeatDelay_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getRepeatDelay();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setRepeatDelay_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j)
			{
				Real min = (Real) min_j;
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setRepeatDelay(min, max);
				}
				else
				{
					pObjectX->setRepeatDelay(min, max);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setRepeatDelay_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRepeatDelay_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRepeatDelay_Real_Real_callback", "(DD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setRepeatDelay_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j)
			{
				Real min = (Real) min_j;
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setRepeatDelay(min, max);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinRepeatDelay_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinRepeatDelay(min);
				}
				else
				{
					pObjectX->setMinRepeatDelay(min);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMinRepeatDelay_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMinRepeatDelay_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMinRepeatDelay_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMinRepeatDelay_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j)
			{
				Real min = (Real) min_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMinRepeatDelay(min);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxRepeatDelay_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxRepeatDelay(max);
				}
				else
				{
					pObjectX->setMaxRepeatDelay(max);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setMaxRepeatDelay_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMaxRepeatDelay_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMaxRepeatDelay_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setMaxRepeatDelay_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble max_j)
			{
				Real max = (Real) max_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setMaxRepeatDelay(max);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinRepeatDelay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinRepeatDelay();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMinRepeatDelay();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMinRepeatDelay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMinRepeatDelay_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMinRepeatDelay_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMinRepeatDelay_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMinRepeatDelay();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxRepeatDelay_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxRepeatDelay();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getMaxRepeatDelay();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1getMaxRepeatDelay_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMaxRepeatDelay_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMaxRepeatDelay_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getMaxRepeatDelay_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::getMaxRepeatDelay();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setName(newName);
				}
				else
				{
					pObjectX->setName(newName);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setName_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setName_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setName_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setName(newName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ParticleEmitter_getEmittedEmitter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				const EVString& __values1 = pObjectX->getEmittedEmitter();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEmittedEmitter_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring emittedEmitter_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* emittedEmitter_ch = (const ev_char*)__env->GetStringUTFChars(emittedEmitter_j,JNI_FALSE);
				const EVString emittedEmitter = emittedEmitter_ch;
				__env->ReleaseStringUTFChars(emittedEmitter_j, (const char *)emittedEmitter_ch);
				#else
				const ev_wchar* emittedEmitter_ch = (const ev_wchar*)__env->GetStringChars(emittedEmitter_j,JNI_FALSE);
				const EVString emittedEmitter = emittedEmitter_ch;
				__env->ReleaseStringChars(emittedEmitter_j, (const jchar *)emittedEmitter_ch);
				#endif
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setEmittedEmitter(emittedEmitter);
				}
				else
				{
					pObjectX->setEmittedEmitter(emittedEmitter);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setEmittedEmitter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEmittedEmitter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEmittedEmitter_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEmittedEmitter_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring emittedEmitter_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* emittedEmitter_ch = (const ev_char*)__env->GetStringUTFChars(emittedEmitter_j,JNI_FALSE);
				const EVString emittedEmitter = emittedEmitter_ch;
				__env->ReleaseStringUTFChars(emittedEmitter_j, (const char *)emittedEmitter_ch);
				#else
				const ev_wchar* emittedEmitter_ch = (const ev_wchar*)__env->GetStringChars(emittedEmitter_j,JNI_FALSE);
				const EVString emittedEmitter = emittedEmitter_ch;
				__env->ReleaseStringChars(emittedEmitter_j, (const jchar *)emittedEmitter_ch);
				#endif
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setEmittedEmitter(emittedEmitter);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleEmitter_isEmitted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::isEmitted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isEmitted();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1isEmitted_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isEmitted_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isEmitted_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ParticleEmitter_isEmitted_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CParticleEmitter::isEmitted();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEmitted_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean emitted_j)
			{
				ev_bool emitted = (ev_bool) emitted_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCParticleEmitterProxy))
				{
					pObjectX->EarthView::World::Graphic::CParticleEmitter::setEmitted(emitted);
				}
				else
				{
					pObjectX->setEmitted(emitted);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_register_1setEmitted_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCParticleEmitterProxy *pObjectX = (JCParticleEmitterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setEmitted_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setEmitted_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ParticleEmitter_setEmitted_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean emitted_j)
			{
				ev_bool emitted = (ev_bool) emitted_j;
				EarthView::World::Graphic::CParticleEmitter *pObjectX = (EarthView::World::Graphic::CParticleEmitter*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CParticleEmitter::setEmitted(emitted);
			}
		}
	}
}
