/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/keyframe.h"
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
			class JCKeyFrameProxy : public EarthView::World::Graphic::CKeyFrame
			{
			 private:
				EarthView::World::Core::ev_string m__clone_CAnimationTrack_callback;
			public:
				JCKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CKeyFrame(pList)
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
				void register__clone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__clone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if (this->_gRef != NULL && this->m__clone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong ref_newParent_j = (jlong) ref_newParent;
						jmethodID __method = __gr->getMethod("_clone_CAnimationTrack_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_newParent_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CKeyFrame::_clone(ref_newParent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCKeyFrameProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_KeyFrame_getTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CKeyFrame *pObjectX = (EarthView::World::Graphic::CKeyFrame*) pObjXXXX;
				Real __values1 = pObjectX->getTime();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_KeyFrame__1clone_1CAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CKeyFrame *pObjectX = (EarthView::World::Graphic::CKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCKeyFrameProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CKeyFrame::_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_KeyFrame_register_1_1clone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCKeyFrameProxy *pObjectX = (JCKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__clone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_clone_CAnimationTrack_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_KeyFrame__1clone_1CAnimationTrack_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CKeyFrame *pObjectX = (EarthView::World::Graphic::CKeyFrame*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CKeyFrame::_clone(ref_newParent);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCNumericKeyFrameProxy : public EarthView::World::Graphic::CNumericKeyFrame
			{
			 private:
				EarthView::World::Core::ev_string m__clone_CAnimationTrack_callback;
			public:
				JCNumericKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CNumericKeyFrame(pList)
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
				void register__clone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__clone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if (this->_gRef != NULL && this->m__clone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong ref_newParent_j = (jlong) ref_newParent;
						jmethodID __method = __gr->getMethod("_clone_CAnimationTrack_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_newParent_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CNumericKeyFrame::_clone(ref_newParent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCNumericKeyFrameProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericKeyFrame__1clone_1CAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CNumericKeyFrame *pObjectX = (EarthView::World::Graphic::CNumericKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericKeyFrameProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNumericKeyFrame::_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericKeyFrame_register_1_1clone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericKeyFrameProxy *pObjectX = (JCNumericKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__clone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_clone_CAnimationTrack_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericKeyFrame__1clone_1CAnimationTrack_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CNumericKeyFrame *pObjectX = (EarthView::World::Graphic::CNumericKeyFrame*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNumericKeyFrame::_clone(ref_newParent);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCTransformKeyFrameProxy : public EarthView::World::Graphic::CTransformKeyFrame
			{
			 private:
				EarthView::World::Core::ev_string m_setTranslate_CVector3_callback;
				EarthView::World::Core::ev_string m_setScale_CVector3_callback;
				EarthView::World::Core::ev_string m_getScale_void_callback;
				EarthView::World::Core::ev_string m_setRotation_CQuaternion_callback;
				EarthView::World::Core::ev_string m_getRotation_void_callback;
				EarthView::World::Core::ev_string m_setMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m__clone_CAnimationTrack_callback;
			public:
				JCTransformKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CTransformKeyFrame(pList)
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
				void register_setTranslate_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setTranslate_CVector3_callback = __method;
				}
				void register_setScale_CVector3_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setScale_CVector3_callback = __method;
				}
				void register_getScale_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getScale_void_callback = __method;
				}
				void register_setRotation_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRotation_CQuaternion_callback = __method;
				}
				void register_getRotation_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRotation_void_callback = __method;
				}
				void register_setMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMatrix_CMatrix4_callback = __method;
				}
				void register__clone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__clone_CAnimationTrack_callback = __method;
				}
				virtual void setTranslate(const EarthView::World::Spatial::Math::CVector3& trans)
				{
					if (this->_gRef != NULL && this->m_setTranslate_CVector3_callback != "" && this->isCustomExtend())
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
						jlong trans_j = (jlong) &trans;
						jmethodID __method = __gr->getMethod("setTranslate_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , trans_j);
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
						return this->CTransformKeyFrame::setTranslate(trans);
					}
				}
				virtual void setScale(const EarthView::World::Spatial::Math::CVector3& scale)
				{
					if (this->_gRef != NULL && this->m_setScale_CVector3_callback != "" && this->isCustomExtend())
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
						jlong scale_j = (jlong) &scale;
						jmethodID __method = __gr->getMethod("setScale_CVector3_callback");
						__env->CallVoidMethod(__obj, __method , scale_j);
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
						return this->CTransformKeyFrame::setScale(scale);
					}
				}
				virtual const EarthView::World::Spatial::Math::CVector3& getScale() const
				{
					if (this->_gRef != NULL && this->m_getScale_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getScale_void_callback");
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
						return this->CTransformKeyFrame::getScale();
					}
				}
				virtual void setRotation(const EarthView::World::Spatial::Math::CQuaternion& rot)
				{
					if (this->_gRef != NULL && this->m_setRotation_CQuaternion_callback != "" && this->isCustomExtend())
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
						jlong rot_j = (jlong) &rot;
						jmethodID __method = __gr->getMethod("setRotation_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , rot_j);
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
						return this->CTransformKeyFrame::setRotation(rot);
					}
				}
				virtual const EarthView::World::Spatial::Math::CQuaternion& getRotation() const
				{
					if (this->_gRef != NULL && this->m_getRotation_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRotation_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Spatial::Math::CQuaternion &__values1 = *(const EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CTransformKeyFrame::getRotation();
					}
				}
				virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& mat)
				{
					if (this->_gRef != NULL && this->m_setMatrix_CMatrix4_callback != "" && this->isCustomExtend())
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
						jlong mat_j = (jlong) &mat;
						jmethodID __method = __gr->getMethod("setMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , mat_j);
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
						return this->CTransformKeyFrame::setMatrix(mat);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if (this->_gRef != NULL && this->m__clone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong ref_newParent_j = (jlong) ref_newParent;
						jmethodID __method = __gr->getMethod("_clone_CAnimationTrack_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_newParent_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CTransformKeyFrame::_clone(ref_newParent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTransformKeyFrameProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setTranslate_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong trans_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &trans = *(EarthView::World::Spatial::Math::CVector3*) trans_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setTranslate(trans);
				}
				else
				{
					pObjectX->setTranslate(trans);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_register_1setTranslate_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTransformKeyFrameProxy *pObjectX = (JCTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setTranslate_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setTranslate_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setTranslate_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong trans_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &trans = *(EarthView::World::Spatial::Math::CVector3*) trans_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setTranslate(trans);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_getTranslate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getTranslate();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setScale(scale);
				}
				else
				{
					pObjectX->setScale(scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_register_1setScale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTransformKeyFrameProxy *pObjectX = (JCTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setScale_CVector3_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setScale_CVector3_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setScale_1CVector3_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong scale_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setScale(scale);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTransformKeyFrameProxy))
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CTransformKeyFrame::getScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_register_1getScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTransformKeyFrameProxy *pObjectX = (JCTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getScale_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getScale_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_getScale_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->EarthView::World::Graphic::CTransformKeyFrame::getScale();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setRotation_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rot_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &rot = *(EarthView::World::Spatial::Math::CQuaternion*) rot_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setRotation(rot);
				}
				else
				{
					pObjectX->setRotation(rot);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_register_1setRotation_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTransformKeyFrameProxy *pObjectX = (JCTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRotation_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRotation_CQuaternion_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setRotation_1CQuaternion_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rot_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &rot = *(EarthView::World::Spatial::Math::CQuaternion*) rot_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setRotation(rot);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_getRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTransformKeyFrameProxy))
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CTransformKeyFrame::getRotation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->getRotation();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_register_1getRotation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTransformKeyFrameProxy *pObjectX = (JCTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRotation_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRotation_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_getRotation_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->EarthView::World::Graphic::CTransformKeyFrame::getRotation();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setMatrix(mat);
				}
				else
				{
					pObjectX->setMatrix(mat);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTransformKeyFrameProxy *pObjectX = (JCTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setMatrix_CMatrix4_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setMatrix_CMatrix4_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_setMatrix_1CMatrix4_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mat_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &mat = *(EarthView::World::Spatial::Math::CMatrix4*) mat_j;
				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTransformKeyFrame::setMatrix(mat);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TransformKeyFrame__1clone_1CAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTransformKeyFrameProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CTransformKeyFrame::_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TransformKeyFrame_register_1_1clone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTransformKeyFrameProxy *pObjectX = (JCTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__clone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_clone_CAnimationTrack_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TransformKeyFrame__1clone_1CAnimationTrack_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CTransformKeyFrame*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CTransformKeyFrame::_clone(ref_newParent);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCSphereTransformKeyFrameProxy : public EarthView::World::Graphic::CSphereTransformKeyFrame
			{
			 private:
				EarthView::World::Core::ev_string m_setLatiude_ev_real64_callback;
				EarthView::World::Core::ev_string m_setLongitude_ev_real64_callback;
				EarthView::World::Core::ev_string m_setHeading_ev_real64_callback;
				EarthView::World::Core::ev_string m_setRadius_ev_real64_callback;
				EarthView::World::Core::ev_string m_getRadius_void_callback;
				EarthView::World::Core::ev_string m_setYaw_CDegree_callback;
				EarthView::World::Core::ev_string m_getYaw_void_callback;
				EarthView::World::Core::ev_string m_setPitch_CDegree_callback;
				EarthView::World::Core::ev_string m_getPitch_void_callback;
				EarthView::World::Core::ev_string m_setRoll_CDegree_callback;
				EarthView::World::Core::ev_string m_getRoll_void_callback;
				EarthView::World::Core::ev_string m__clone_CAnimationTrack_callback;
			public:
				JCSphereTransformKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereTransformKeyFrame(pList)
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
				void register_setLatiude_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLatiude_ev_real64_callback = __method;
				}
				void register_setLongitude_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLongitude_ev_real64_callback = __method;
				}
				void register_setHeading_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setHeading_ev_real64_callback = __method;
				}
				void register_setRadius_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRadius_ev_real64_callback = __method;
				}
				void register_getRadius_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRadius_void_callback = __method;
				}
				void register_setYaw_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setYaw_CDegree_callback = __method;
				}
				void register_getYaw_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getYaw_void_callback = __method;
				}
				void register_setPitch_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPitch_CDegree_callback = __method;
				}
				void register_getPitch_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPitch_void_callback = __method;
				}
				void register_setRoll_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRoll_CDegree_callback = __method;
				}
				void register_getRoll_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRoll_void_callback = __method;
				}
				void register__clone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__clone_CAnimationTrack_callback = __method;
				}
				virtual void setLatiude(ev_real64 latitude)
				{
					if (this->_gRef != NULL && this->m_setLatiude_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble latitude_j = (jdouble) latitude;
						jmethodID __method = __gr->getMethod("setLatiude_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , latitude_j);
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
						return this->CSphereTransformKeyFrame::setLatiude(latitude);
					}
				}
				virtual void setLongitude(ev_real64 longitude)
				{
					if (this->_gRef != NULL && this->m_setLongitude_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble longitude_j = (jdouble) longitude;
						jmethodID __method = __gr->getMethod("setLongitude_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , longitude_j);
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
						return this->CSphereTransformKeyFrame::setLongitude(longitude);
					}
				}
				virtual void setHeading(ev_real64 heading)
				{
					if (this->_gRef != NULL && this->m_setHeading_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble heading_j = (jdouble) heading;
						jmethodID __method = __gr->getMethod("setHeading_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , heading_j);
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
						return this->CSphereTransformKeyFrame::setHeading(heading);
					}
				}
				virtual void setRadius(ev_real64 radius)
				{
					if (this->_gRef != NULL && this->m_setRadius_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble radius_j = (jdouble) radius;
						jmethodID __method = __gr->getMethod("setRadius_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , radius_j);
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
						return this->CSphereTransformKeyFrame::setRadius(radius);
					}
				}
				virtual ev_real64 getRadius() const
				{
					if (this->_gRef != NULL && this->m_getRadius_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRadius_void_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_real64 __values1 = (ev_real64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereTransformKeyFrame::getRadius();
					}
				}
				virtual void setYaw(const EarthView::World::Spatial::Math::CDegree& yaw)
				{
					if (this->_gRef != NULL && this->m_setYaw_CDegree_callback != "" && this->isCustomExtend())
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
						jlong yaw_j = (jlong) &yaw;
						jmethodID __method = __gr->getMethod("setYaw_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , yaw_j);
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
						return this->CSphereTransformKeyFrame::setYaw(yaw);
					}
				}
				virtual EarthView::World::Spatial::Math::CDegree getYaw() const
				{
					if (this->_gRef != NULL && this->m_getYaw_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getYaw_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CDegree __values1 = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereTransformKeyFrame::getYaw();
					}
				}
				virtual void setPitch(const EarthView::World::Spatial::Math::CDegree& pitch)
				{
					if (this->_gRef != NULL && this->m_setPitch_CDegree_callback != "" && this->isCustomExtend())
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
						jlong pitch_j = (jlong) &pitch;
						jmethodID __method = __gr->getMethod("setPitch_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , pitch_j);
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
						return this->CSphereTransformKeyFrame::setPitch(pitch);
					}
				}
				virtual EarthView::World::Spatial::Math::CDegree getPitch() const
				{
					if (this->_gRef != NULL && this->m_getPitch_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getPitch_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CDegree __values1 = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereTransformKeyFrame::getPitch();
					}
				}
				virtual void setRoll(const EarthView::World::Spatial::Math::CDegree& roll)
				{
					if (this->_gRef != NULL && this->m_setRoll_CDegree_callback != "" && this->isCustomExtend())
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
						jlong roll_j = (jlong) &roll;
						jmethodID __method = __gr->getMethod("setRoll_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , roll_j);
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
						return this->CSphereTransformKeyFrame::setRoll(roll);
					}
				}
				virtual EarthView::World::Spatial::Math::CDegree getRoll() const
				{
					if (this->_gRef != NULL && this->m_getRoll_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getRoll_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CDegree __values1 = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereTransformKeyFrame::getRoll();
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if (this->_gRef != NULL && this->m__clone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong ref_newParent_j = (jlong) ref_newParent;
						jmethodID __method = __gr->getMethod("_clone_CAnimationTrack_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_newParent_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CSphereTransformKeyFrame::_clone(ref_newParent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSphereTransformKeyFrameProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setLatiude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j)
			{
				ev_real64 latitude = (ev_real64) latitude_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setLatiude(latitude);
				}
				else
				{
					pObjectX->setLatiude(latitude);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1setLatiude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLatiude_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLatiude_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setLatiude_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latitude_j)
			{
				ev_real64 latitude = (ev_real64) latitude_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setLatiude(latitude);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getLatiude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getLatiude();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setLongitude_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble longitude_j)
			{
				ev_real64 longitude = (ev_real64) longitude_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setLongitude(longitude);
				}
				else
				{
					pObjectX->setLongitude(longitude);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1setLongitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLongitude_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLongitude_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setLongitude_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble longitude_j)
			{
				ev_real64 longitude = (ev_real64) longitude_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setLongitude(longitude);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getLongitude_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getLongitude();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setHeading_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble heading_j)
			{
				ev_real64 heading = (ev_real64) heading_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setHeading(heading);
				}
				else
				{
					pObjectX->setHeading(heading);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1setHeading_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setHeading_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setHeading_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setHeading_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble heading_j)
			{
				ev_real64 heading = (ev_real64) heading_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setHeading(heading);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getHeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getHeading();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setRadius_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
			{
				ev_real64 radius = (ev_real64) radius_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setRadius(radius);
				}
				else
				{
					pObjectX->setRadius(radius);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1setRadius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRadius_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRadius_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setRadius_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
			{
				ev_real64 radius = (ev_real64) radius_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setRadius(radius);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1getRadius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRadius_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRadius_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getRadius_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getRadius();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setYaw_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong yaw_j)
			{
				const EarthView::World::Spatial::Math::CDegree &yaw = *(EarthView::World::Spatial::Math::CDegree*) yaw_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setYaw(yaw);
				}
				else
				{
					pObjectX->setYaw(yaw);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1setYaw_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setYaw_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setYaw_CDegree_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setYaw_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong yaw_j)
			{
				const EarthView::World::Spatial::Math::CDegree &yaw = *(EarthView::World::Spatial::Math::CDegree*) yaw_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setYaw(yaw);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getYaw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getYaw();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getYaw();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1getYaw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getYaw_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getYaw_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getYaw_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getYaw();
				EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setPitch_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pitch_j)
			{
				const EarthView::World::Spatial::Math::CDegree &pitch = *(EarthView::World::Spatial::Math::CDegree*) pitch_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setPitch(pitch);
				}
				else
				{
					pObjectX->setPitch(pitch);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1setPitch_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPitch_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPitch_CDegree_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setPitch_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pitch_j)
			{
				const EarthView::World::Spatial::Math::CDegree &pitch = *(EarthView::World::Spatial::Math::CDegree*) pitch_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setPitch(pitch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getPitch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getPitch();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getPitch();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1getPitch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPitch_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPitch_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getPitch_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getPitch();
				EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setRoll_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong roll_j)
			{
				const EarthView::World::Spatial::Math::CDegree &roll = *(EarthView::World::Spatial::Math::CDegree*) roll_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setRoll(roll);
				}
				else
				{
					pObjectX->setRoll(roll);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1setRoll_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRoll_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRoll_CDegree_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_setRoll_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong roll_j)
			{
				const EarthView::World::Spatial::Math::CDegree &roll = *(EarthView::World::Spatial::Math::CDegree*) roll_j;
				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::setRoll(roll);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getRoll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getRoll();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getRoll();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1getRoll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRoll_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRoll_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_getRoll_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::getRoll();
				EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame__1clone_1CAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereTransformKeyFrameProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame_register_1_1clone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereTransformKeyFrameProxy *pObjectX = (JCSphereTransformKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__clone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_clone_CAnimationTrack_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereTransformKeyFrame__1clone_1CAnimationTrack_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CSphereTransformKeyFrame *pObjectX = (EarthView::World::Graphic::CSphereTransformKeyFrame*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereTransformKeyFrame::_clone(ref_newParent);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCVertexMorphKeyFrameProxy : public EarthView::World::Graphic::CVertexMorphKeyFrame
			{
			 private:
				EarthView::World::Core::ev_string m__clone_CAnimationTrack_callback;
			public:
				JCVertexMorphKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexMorphKeyFrame(pList)
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
				void register__clone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__clone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if (this->_gRef != NULL && this->m__clone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong ref_newParent_j = (jlong) ref_newParent;
						jmethodID __method = __gr->getMethod("_clone_CAnimationTrack_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_newParent_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CVertexMorphKeyFrame::_clone(ref_newParent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVertexMorphKeyFrameProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexMorphKeyFrame_setVertexBuffer_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &buf = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) buf_j;
				EarthView::World::Graphic::CVertexMorphKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjXXXX;
				pObjectX->setVertexBuffer(buf);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexMorphKeyFrame_getVertexBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexMorphKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjXXXX;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& __values1 = pObjectX->getVertexBuffer();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexMorphKeyFrame__1clone_1CAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CVertexMorphKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexMorphKeyFrameProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexMorphKeyFrame::_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexMorphKeyFrame_register_1_1clone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexMorphKeyFrameProxy *pObjectX = (JCVertexMorphKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__clone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_clone_CAnimationTrack_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexMorphKeyFrame__1clone_1CAnimationTrack_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CVertexMorphKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexMorphKeyFrame*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexMorphKeyFrame::_clone(ref_newParent);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCVertexPoseKeyFrameProxy : public EarthView::World::Graphic::CVertexPoseKeyFrame
			{
			 private:
				EarthView::World::Core::ev_string m__clone_CAnimationTrack_callback;
			public:
				JCVertexPoseKeyFrameProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexPoseKeyFrame(pList)
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
				void register__clone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__clone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CKeyFrame* _clone(EarthView::World::Graphic::CAnimationTrack* ref_newParent) const
				{
					if (this->_gRef != NULL && this->m__clone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong ref_newParent_j = (jlong) ref_newParent;
						jmethodID __method = __gr->getMethod("_clone_CAnimationTrack_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , ref_newParent_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CVertexPoseKeyFrame::_clone(ref_newParent);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVertexPoseKeyFrameProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRef_get_1poseIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->poseIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRef_set_1poseIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)pObjXXXX;
				pObjectX->poseIndex = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRef_get_1influence_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->influence);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRef_set_1influence_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*)pObjXXXX;
				pObjectX->influence = (Real)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_push_1back_1PoseRef(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef &t = *(EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*) t_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_insert_1ev_1uint32_1PoseRef(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef &t = *(EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef*) t_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList& pObjectX = *(EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_addPoseReference_1ev_1uint16_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint poseIndex_j, jdouble influence_j)
			{
				ev_uint16 poseIndex = (ev_uint16) poseIndex_j;
				Real influence = (Real) influence_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				pObjectX->addPoseReference(poseIndex, influence);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_updatePoseReference_1ev_1uint16_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint poseIndex_j, jdouble influence_j)
			{
				ev_uint16 poseIndex = (ev_uint16) poseIndex_j;
				Real influence = (Real) influence_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				pObjectX->updatePoseReference(poseIndex, influence);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_removePoseReference_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint poseIndex_j)
			{
				ev_uint16 poseIndex = (ev_uint16) poseIndex_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				pObjectX->removePoseReference(poseIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_removeAllPoseReferences_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				pObjectX->removeAllPoseReferences();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_getPoseReferences_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				const EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefList& __values1 = pObjectX->getPoseReferences();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->getCurrent();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->next();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->getBegin();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024PoseRefIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->getEnd();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024ConstPoseRefIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024ConstPoseRefIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024ConstPoseRefIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->getCurrent();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024ConstPoseRefIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->next();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024ConstPoseRefIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->getBegin();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_00024ConstPoseRefIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame::ConstPoseRefIterator*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef __values1 = pObjectX->getEnd();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRef(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_getPoseReferenceIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator __values1 = pObjectX->getPoseReferenceIterator();
				EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator *returnvalues = new EarthView::World::Graphic::CVertexPoseKeyFrame::PoseRefIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame__1clone_1CAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexPoseKeyFrameProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexPoseKeyFrame::_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->_clone(ref_newParent);
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame_register_1_1clone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexPoseKeyFrameProxy *pObjectX = (JCVertexPoseKeyFrameProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__clone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_clone_CAnimationTrack_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame__1clone_1CAnimationTrack_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_newParent_j)
			{
				EarthView::World::Graphic::CAnimationTrack *ref_newParent = (EarthView::World::Graphic::CAnimationTrack*) ref_newParent_j;
				const 				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexPoseKeyFrame::_clone(ref_newParent);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexPoseKeyFrame__1applyBaseKeyFrame_1CVertexPoseKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CVertexPoseKeyFrame *base = (const EarthView::World::Graphic::CVertexPoseKeyFrame*) base_j;
				EarthView::World::Graphic::CVertexPoseKeyFrame *pObjectX = (EarthView::World::Graphic::CVertexPoseKeyFrame*) pObjXXXX;
				pObjectX->_applyBaseKeyFrame(base);
			}
		}
	}
}
