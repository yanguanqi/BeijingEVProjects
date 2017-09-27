/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/animable.h"
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
			class JCAnimableValueProxy : public EarthView::World::Graphic::CAnimableValue
			{
			 private:
				EarthView::World::Core::ev_string m_setAsBaseValue_ev_int32_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_Real_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_CVector2_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_CVector3_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_CVector4_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_CQuaternion_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_CColourValue_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_CRadian_callback;
				EarthView::World::Core::ev_string m_setAsBaseValue_CDegree_callback;
				EarthView::World::Core::ev_string m_setCurrentStateAsBaseValue_void_callback;
				EarthView::World::Core::ev_string m_setValue_ev_int32_callback;
				EarthView::World::Core::ev_string m_setValue_Real_callback;
				EarthView::World::Core::ev_string m_setValue_CVector2_callback;
				EarthView::World::Core::ev_string m_setValue_CVector3_callback;
				EarthView::World::Core::ev_string m_setValue_CVector4_callback;
				EarthView::World::Core::ev_string m_setValue_CQuaternion_callback;
				EarthView::World::Core::ev_string m_setValue_CColourValue_callback;
				EarthView::World::Core::ev_string m_setValue_CRadian_callback;
				EarthView::World::Core::ev_string m_setValue_CDegree_callback;
				EarthView::World::Core::ev_string m_resetToBaseValue_void_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_ev_int32_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_Real_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_CVector2_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_CVector3_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_CVector4_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_CQuaternion_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_CColourValue_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_CDegree_callback;
				EarthView::World::Core::ev_string m_applyDeltaValue_CRadian_callback;
			public:
				JCAnimableValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimableValue(pList)
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
				void register_setAsBaseValue_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_ev_int32_callback = __method;
				}
				void register_setAsBaseValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_Real_callback = __method;
				}
				void register_setAsBaseValue_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_CVector2_callback = __method;
				}
				void register_setAsBaseValue_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_CVector3_callback = __method;
				}
				void register_setAsBaseValue_CVector4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_CVector4_callback = __method;
				}
				void register_setAsBaseValue_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_CQuaternion_callback = __method;
				}
				void register_setAsBaseValue_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_CColourValue_callback = __method;
				}
				void register_setAsBaseValue_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_CRadian_callback = __method;
				}
				void register_setAsBaseValue_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAsBaseValue_CDegree_callback = __method;
				}
				void register_setCurrentStateAsBaseValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setCurrentStateAsBaseValue_void_callback = __method;
				}
				void register_setValue_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_ev_int32_callback = __method;
				}
				void register_setValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_Real_callback = __method;
				}
				void register_setValue_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CVector2_callback = __method;
				}
				void register_setValue_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CVector3_callback = __method;
				}
				void register_setValue_CVector4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CVector4_callback = __method;
				}
				void register_setValue_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CQuaternion_callback = __method;
				}
				void register_setValue_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CColourValue_callback = __method;
				}
				void register_setValue_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CRadian_callback = __method;
				}
				void register_setValue_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_CDegree_callback = __method;
				}
				void register_resetToBaseValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_resetToBaseValue_void_callback = __method;
				}
				void register_applyDeltaValue_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_ev_int32_callback = __method;
				}
				void register_applyDeltaValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_Real_callback = __method;
				}
				void register_applyDeltaValue_CVector2_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_CVector2_callback = __method;
				}
				void register_applyDeltaValue_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_CVector3_callback = __method;
				}
				void register_applyDeltaValue_CVector4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_CVector4_callback = __method;
				}
				void register_applyDeltaValue_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_CQuaternion_callback = __method;
				}
				void register_applyDeltaValue_CColourValue_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_CColourValue_callback = __method;
				}
				void register_applyDeltaValue_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_CDegree_callback = __method;
				}
				void register_applyDeltaValue_CRadian_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyDeltaValue_CRadian_callback = __method;
				}
				virtual void setAsBaseValue(ev_int32 val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_ev_int32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint val_j = (jint) val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(Real val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble val_j = (jdouble) val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(const EarthView::World::Spatial::Math::CVector2& val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_CVector2_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_CVector2_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(const EarthView::World::Spatial::Math::CVector3& val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(const EarthView::World::Spatial::Math::CVector4& val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_CVector4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_CVector4_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(const EarthView::World::Spatial::Math::CQuaternion& val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(const EarthView::World::Graphic::CColourValue& val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(const EarthView::World::Spatial::Math::CRadian& val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setAsBaseValue(const EarthView::World::Spatial::Math::CDegree& val)
				{
					if (this->_gRef != NULL && this->m_setAsBaseValue_CDegree_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setAsBaseValue_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setAsBaseValue(val);
					}
				}
				virtual void setCurrentStateAsBaseValue()
				{
					if (this->_gRef != NULL && this->m_setCurrentStateAsBaseValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("setCurrentStateAsBaseValue_void_callback");
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
						return this->CAnimableValue::setCurrentStateAsBaseValue();
					}
				}
				virtual void setValue(ev_int32 val)
				{
					if (this->_gRef != NULL && this->m_setValue_ev_int32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint val_j = (jint) val;
						jmethodID __method = __gr->getMethod("setValue_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(Real val)
				{
					if (this->_gRef != NULL && this->m_setValue_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble val_j = (jdouble) val;
						jmethodID __method = __gr->getMethod("setValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(const EarthView::World::Spatial::Math::CVector2& val)
				{
					if (this->_gRef != NULL && this->m_setValue_CVector2_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setValue_CVector2_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(const EarthView::World::Spatial::Math::CVector3& val)
				{
					if (this->_gRef != NULL && this->m_setValue_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setValue_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(const EarthView::World::Spatial::Math::CVector4& val)
				{
					if (this->_gRef != NULL && this->m_setValue_CVector4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setValue_CVector4_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(const EarthView::World::Spatial::Math::CQuaternion& val)
				{
					if (this->_gRef != NULL && this->m_setValue_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setValue_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(const EarthView::World::Graphic::CColourValue& val)
				{
					if (this->_gRef != NULL && this->m_setValue_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setValue_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(const EarthView::World::Spatial::Math::CRadian& val)
				{
					if (this->_gRef != NULL && this->m_setValue_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setValue_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void setValue(const EarthView::World::Spatial::Math::CDegree& val)
				{
					if (this->_gRef != NULL && this->m_setValue_CDegree_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("setValue_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::setValue(val);
					}
				}
				virtual void resetToBaseValue()
				{
					if (this->_gRef != NULL && this->m_resetToBaseValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("resetToBaseValue_void_callback");
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
						return this->CAnimableValue::resetToBaseValue();
					}
				}
				virtual void applyDeltaValue(ev_int32 val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_ev_int32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint val_j = (jint) val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(Real val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble val_j = (jdouble) val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(const EarthView::World::Spatial::Math::CVector2& val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_CVector2_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_CVector2_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(const EarthView::World::Spatial::Math::CVector3& val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_CVector3_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(const EarthView::World::Spatial::Math::CVector4& val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_CVector4_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_CVector4_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(const EarthView::World::Spatial::Math::CQuaternion& val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(const EarthView::World::Graphic::CColourValue& val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_CColourValue_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_CColourValue_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(const EarthView::World::Spatial::Math::CDegree& val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_CDegree_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
				virtual void applyDeltaValue(const EarthView::World::Spatial::Math::CRadian& val)
				{
					if (this->_gRef != NULL && this->m_applyDeltaValue_CRadian_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("applyDeltaValue_CRadian_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableValue::applyDeltaValue(val);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimableValueProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_AnimableValue_00024ValueTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CAnimableValue::INT,
					CAnimableValue::REAL,
					CAnimableValue::VECTOR2,
					CAnimableValue::VECTOR3,
					CAnimableValue::VECTOR4,
					CAnimableValue::QUATERNION,
					CAnimableValue::COLOUR,
					CAnimableValue::RADIAN,
					CAnimableValue::DEGREE
				};
				jintArray array = __env->NewIntArray(9);
				__env->SetIntArrayRegion(array, 0, 9, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector2 &val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_CVector2_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector2 &val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_CVector4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_CVector4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CVector4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::CColourValue &val = *(EarthView::World::Graphic::CColourValue*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::CColourValue &val = *(EarthView::World::Graphic::CColourValue*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CRadian &val = *(EarthView::World::Spatial::Math::CRadian*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_CRadian_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CRadian &val = *(EarthView::World::Spatial::Math::CRadian*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CDegree &val = *(EarthView::World::Spatial::Math::CDegree*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
				}
				else
				{
					pObjectX->setAsBaseValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setAsBaseValue_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAsBaseValue_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAsBaseValue_CDegree_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setAsBaseValue_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CDegree &val = *(EarthView::World::Spatial::Math::CDegree*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setAsBaseValue(val);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AnimableValue_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				EarthView::World::Graphic::CAnimableValue::ValueType __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setCurrentStateAsBaseValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setCurrentStateAsBaseValue();
				}
				else
				{
					pObjectX->setCurrentStateAsBaseValue();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setCurrentStateAsBaseValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setCurrentStateAsBaseValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setCurrentStateAsBaseValue_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setCurrentStateAsBaseValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setCurrentStateAsBaseValue();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector2 &val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CVector2_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector2 &val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CVector4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CVector4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CVector4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::CColourValue &val = *(EarthView::World::Graphic::CColourValue*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::CColourValue &val = *(EarthView::World::Graphic::CColourValue*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CRadian &val = *(EarthView::World::Spatial::Math::CRadian*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CRadian_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CRadian &val = *(EarthView::World::Spatial::Math::CRadian*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CDegree &val = *(EarthView::World::Spatial::Math::CDegree*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
				}
				else
				{
					pObjectX->setValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1setValue_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setValue_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setValue_CDegree_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_setValue_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CDegree &val = *(EarthView::World::Spatial::Math::CDegree*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::setValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_resetToBaseValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::resetToBaseValue();
				}
				else
				{
					pObjectX->resetToBaseValue();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1resetToBaseValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_resetToBaseValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"resetToBaseValue_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_resetToBaseValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::resetToBaseValue();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint val_j)
			{
				ev_int32 val = (ev_int32) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble val_j)
			{
				Real val = (Real) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector2 &val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_CVector2_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_CVector2_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CVector2_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector2 &val = *(EarthView::World::Spatial::Math::CVector2*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &val = *(EarthView::World::Spatial::Math::CVector3*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_CVector4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_CVector4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CVector4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &val = *(EarthView::World::Spatial::Math::CVector4*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &val = *(EarthView::World::Spatial::Math::CQuaternion*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::CColourValue &val = *(EarthView::World::Graphic::CColourValue*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_CColourValue_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_CColourValue_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CColourValue_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::CColourValue &val = *(EarthView::World::Graphic::CColourValue*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CDegree &val = *(EarthView::World::Spatial::Math::CDegree*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_CDegree_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CDegree &val = *(EarthView::World::Spatial::Math::CDegree*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CRadian &val = *(EarthView::World::Spatial::Math::CRadian*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
				}
				else
				{
					pObjectX->applyDeltaValue(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_register_1applyDeltaValue_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableValueProxy *pObjectX = (JCAnimableValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyDeltaValue_CRadian_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyDeltaValue_CRadian_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableValue_applyDeltaValue_1CRadian_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Spatial::Math::CRadian &val = *(EarthView::World::Spatial::Math::CRadian*) val_j;
				EarthView::World::Graphic::CAnimableValue *pObjectX = (EarthView::World::Graphic::CAnimableValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableValue::applyDeltaValue(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimableValuePtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::AnimableValuePtr *pObjectX = (EarthView::World::Graphic::AnimableValuePtr*) pObjXXXX;
				EarthView::World::Graphic::CAnimableValue* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCAnimableObjectProxy : public EarthView::World::Graphic::CAnimableObject
			{
			 private:
				EarthView::World::Core::ev_string m_initialiseAnimableDictionary_StringVector_callback;
				EarthView::World::Core::ev_string m_getAnimableDictionaryName_void_callback;
				EarthView::World::Core::ev_string m_createAnimableValue_EVString_callback;
			public:
				JCAnimableObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimableObject(pList)
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
				void register_initialiseAnimableDictionary_StringVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_initialiseAnimableDictionary_StringVector_callback = __method;
				}
				void register_getAnimableDictionaryName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimableDictionaryName_void_callback = __method;
				}
				void register_createAnimableValue_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimableValue_EVString_callback = __method;
				}
				virtual void initialiseAnimableDictionary(EarthView::World::Core::StringVector& val) const
				{
					if (this->_gRef != NULL && this->m_initialiseAnimableDictionary_StringVector_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong val_j = (jlong) &val;
						jmethodID __method = __gr->getMethod("initialiseAnimableDictionary_StringVector_callback");
						__env->CallVoidMethod(__obj, __method , val_j);
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
						return this->CAnimableObject::initialiseAnimableDictionary(val);
					}
				}
				virtual EVString getAnimableDictionaryName() const
				{
					if (this->_gRef != NULL && this->m_getAnimableDictionaryName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getAnimableDictionaryName_void_callback");
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
						return this->CAnimableObject::getAnimableDictionaryName();
					}
				}
				virtual EarthView::World::Graphic::AnimableValuePtr createAnimableValue(const EVString& valueName)
				{
					if (this->_gRef != NULL && this->m_createAnimableValue_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring valueName_wch = valueName;
						jstring valueName_j = __env->NewString((const jchar*)valueName_wch.getString(), valueName_wch.size());
						jmethodID __method = __gr->getMethod("createAnimableValue_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , valueName_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::AnimableValuePtr __values1 = *(EarthView::World::Graphic::AnimableValuePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimableObject::createAnimableValue(valueName);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimableObjectProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableObject_initialiseAnimableDictionary_1StringVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				EarthView::World::Core::StringVector &val = *(EarthView::World::Core::StringVector*) val_j;
				const 				EarthView::World::Graphic::CAnimableObject *pObjectX = (EarthView::World::Graphic::CAnimableObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableObjectProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimableObject::initialiseAnimableDictionary(val);
				}
				else
				{
					pObjectX->initialiseAnimableDictionary(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableObject_register_1initialiseAnimableDictionary_1StringVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableObjectProxy *pObjectX = (JCAnimableObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_initialiseAnimableDictionary_StringVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"initialiseAnimableDictionary_StringVector_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableObject_initialiseAnimableDictionary_1StringVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				EarthView::World::Core::StringVector &val = *(EarthView::World::Core::StringVector*) val_j;
				const 				EarthView::World::Graphic::CAnimableObject *pObjectX = (EarthView::World::Graphic::CAnimableObject*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimableObject::initialiseAnimableDictionary(val);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AnimableObject_getAnimableDictionaryName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimableObject *pObjectX = (EarthView::World::Graphic::CAnimableObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableObjectProxy))
				{
					EVString __values1 = pObjectX->EarthView::World::Graphic::CAnimableObject::getAnimableDictionaryName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				else
				{
					EVString __values1 = pObjectX->getAnimableDictionaryName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableObject_register_1getAnimableDictionaryName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableObjectProxy *pObjectX = (JCAnimableObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimableDictionaryName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimableDictionaryName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_AnimableObject_getAnimableDictionaryName_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimableObject *pObjectX = (EarthView::World::Graphic::CAnimableObject*) pObjXXXX;
				EVString __values1 = pObjectX->EarthView::World::Graphic::CAnimableObject::getAnimableDictionaryName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimableObject_getAnimableValueNames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimableObject *pObjectX = (EarthView::World::Graphic::CAnimableObject*) pObjXXXX;
				const EarthView::World::Core::StringVector& __values1 = pObjectX->getAnimableValueNames();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimableObject_createAnimableValue_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring valueName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* valueName_ch = (const ev_char*)__env->GetStringUTFChars(valueName_j,JNI_FALSE);
				const EVString valueName = valueName_ch;
				__env->ReleaseStringUTFChars(valueName_j, (const char *)valueName_ch);
				#else
				const ev_wchar* valueName_ch = (const ev_wchar*)__env->GetStringChars(valueName_j,JNI_FALSE);
				const EVString valueName = valueName_ch;
				__env->ReleaseStringChars(valueName_j, (const jchar *)valueName_ch);
				#endif
				EarthView::World::Graphic::CAnimableObject *pObjectX = (EarthView::World::Graphic::CAnimableObject*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimableObjectProxy))
				{
					EarthView::World::Graphic::AnimableValuePtr __values1 = pObjectX->EarthView::World::Graphic::CAnimableObject::createAnimableValue(valueName);
					EarthView::World::Graphic::AnimableValuePtr *returnvalues = new EarthView::World::Graphic::AnimableValuePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::AnimableValuePtr __values1 = pObjectX->createAnimableValue(valueName);
					EarthView::World::Graphic::AnimableValuePtr *returnvalues = new EarthView::World::Graphic::AnimableValuePtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimableObject_register_1createAnimableValue_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimableObjectProxy *pObjectX = (JCAnimableObjectProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimableValue_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimableValue_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimableObject_createAnimableValue_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring valueName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* valueName_ch = (const ev_char*)__env->GetStringUTFChars(valueName_j,JNI_FALSE);
				const EVString valueName = valueName_ch;
				__env->ReleaseStringUTFChars(valueName_j, (const char *)valueName_ch);
				#else
				const ev_wchar* valueName_ch = (const ev_wchar*)__env->GetStringChars(valueName_j,JNI_FALSE);
				const EVString valueName = valueName_ch;
				__env->ReleaseStringChars(valueName_j, (const jchar *)valueName_ch);
				#endif
				EarthView::World::Graphic::CAnimableObject *pObjectX = (EarthView::World::Graphic::CAnimableObject*) pObjXXXX;
				EarthView::World::Graphic::AnimableValuePtr __values1 = pObjectX->EarthView::World::Graphic::CAnimableObject::createAnimableValue(valueName);
				EarthView::World::Graphic::AnimableValuePtr *returnvalues = new EarthView::World::Graphic::AnimableValuePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
