/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/animationtrack.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TimeIndex_hasKeyIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTimeIndex *pObjectX = (EarthView::World::Graphic::CTimeIndex*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasKeyIndex();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_TimeIndex_getTimePos_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTimeIndex *pObjectX = (EarthView::World::Graphic::CTimeIndex*) pObjXXXX;
				Real __values1 = pObjectX->getTimePos();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TimeIndex_getKeyIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTimeIndex *pObjectX = (EarthView::World::Graphic::CTimeIndex*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getKeyIndex();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCAnimationTrackProxy : public EarthView::World::Graphic::CAnimationTrack
			{
			 private:
				EarthView::World::Core::ev_string m_getNumKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_createKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_removeKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeAllKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_callback;
				EarthView::World::Core::ev_string m__keyFrameDataChanged_void_callback;
				EarthView::World::Core::ev_string m_hasNonZeroKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_optimise_void_callback;
				EarthView::World::Core::ev_string m__collectKeyFrameTimes_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__buildKeyFrameIndexMap_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__applyBaseKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_setListener_CAnimationTrackListener_callback;
				EarthView::World::Core::ev_string m_createKeyFrameImpl_Real_callback;
				EarthView::World::Core::ev_string m_populateClone_CAnimationTrack_callback;
			public:
				JCAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationTrack(pList)
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
				void register_getNumKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumKeyFrames_void_callback = __method;
				}
				void register_getKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback = __method;
				}
				void register_createKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrame_Real_callback = __method;
				}
				void register_removeKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeKeyFrame_ev_uint16_callback = __method;
				}
				void register_removeAllKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllKeyFrames_void_callback = __method;
				}
				void register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback = __method;
				}
				void register_apply_CTimeIndex_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_Real_callback = __method;
				}
				void register_apply_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_callback = __method;
				}
				void register_apply_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_callback = __method;
				}
				void register__keyFrameDataChanged_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__keyFrameDataChanged_void_callback = __method;
				}
				void register_hasNonZeroKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasNonZeroKeyFrames_void_callback = __method;
				}
				void register_optimise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_optimise_void_callback = __method;
				}
				void register__collectKeyFrameTimes_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__collectKeyFrameTimes_KeyFrameTimes_callback = __method;
				}
				void register__buildKeyFrameIndexMap_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback = __method;
				}
				void register__applyBaseKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__applyBaseKeyFrame_CKeyFrame_callback = __method;
				}
				void register_setListener_CAnimationTrackListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setListener_CAnimationTrackListener_callback = __method;
				}
				void register_createKeyFrameImpl_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrameImpl_Real_callback = __method;
				}
				void register_populateClone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_populateClone_CAnimationTrack_callback = __method;
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_getNumKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumKeyFrames_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CAnimationTrack::getNumKeyFrames();
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getKeyFrame_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationTrack::getKeyFrame(index);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2, ev_uint16* firstKeyIndex) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jlong firstKeyIndex_j = (jlong) firstKeyIndex;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j, firstKeyIndex_j);
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
						return this->CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j);
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
						return this->CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationTrack::createKeyFrame(timePos);
					}
				}
				virtual void removeKeyFrame(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeKeyFrame_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
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
						return this->CAnimationTrack::removeKeyFrame(index);
					}
				}
				virtual void removeAllKeyFrames()
				{
					if (this->_gRef != NULL && this->m_removeAllKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllKeyFrames_void_callback");
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
						return this->CAnimationTrack::removeAllKeyFrames();
					}
				}
				virtual void getInterpolatedKeyFrame(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, kf_j);
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
						return this->CAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, Real scale)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j, scale_j);
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
						return this->CAnimationTrack::apply(timeIndex, weight, scale);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j);
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
						return this->CAnimationTrack::apply(timeIndex, weight);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j);
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
						return this->CAnimationTrack::apply(timeIndex);
					}
				}
				virtual void _keyFrameDataChanged() const
				{
					if (this->_gRef != NULL && this->m__keyFrameDataChanged_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_keyFrameDataChanged_void_callback");
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
						return this->CAnimationTrack::_keyFrameDataChanged();
					}
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_hasNonZeroKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasNonZeroKeyFrames_void_callback");
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
						return this->CAnimationTrack::hasNonZeroKeyFrames();
					}
				}
				virtual void optimise()
				{
					if (this->_gRef != NULL && this->m_optimise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("optimise_void_callback");
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
						return this->CAnimationTrack::optimise();
					}
				}
				virtual void _collectKeyFrameTimes(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__collectKeyFrameTimes_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_collectKeyFrameTimes_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
					}
				}
				virtual void _buildKeyFrameIndexMap(const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_buildKeyFrameIndexMap_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
					}
				}
				virtual void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame* base)
				{
					if (this->_gRef != NULL && this->m__applyBaseKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong base_j = (jlong) base;
						jmethodID __method = __gr->getMethod("_applyBaseKeyFrame_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , base_j);
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
						return this->CAnimationTrack::_applyBaseKeyFrame(base);
					}
				}
				virtual void setListener(EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if (this->_gRef != NULL && this->m_setListener_CAnimationTrackListener_callback != "" && this->isCustomExtend())
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
						jlong ref_l_j = (jlong) ref_l;
						jmethodID __method = __gr->getMethod("setListener_CAnimationTrackListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_l_j);
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
						return this->CAnimationTrack::setListener(ref_l);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(Real time)
				{
					if (this->_gRef != NULL && this->m_createKeyFrameImpl_Real_callback != "" && this->isCustomExtend())
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
						jdouble time_j = (jdouble) time;
						jmethodID __method = __gr->getMethod("createKeyFrameImpl_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , time_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CAnimationTrack::createKeyFrameImpl(time);
					}
				}
				virtual void populateClone(EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if (this->_gRef != NULL && this->m_populateClone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong clone_j = (jlong) clone;
						jmethodID __method = __gr->getMethod("populateClone_CAnimationTrack_callback");
						__env->CallVoidMethod(__obj, __method , clone_j);
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
						return this->CAnimationTrack::populateClone(clone);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimationTrackProxy);
			class JCAnimationTrackListenerProxy : public EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener
			{
			 private:
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback;
			public:
				JCAnimationTrackListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationTrackListener(pList)
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
				void register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback = __method;
				}
				virtual ev_bool getInterpolatedKeyFrame(const EarthView::World::Graphic::CAnimationTrack* t, const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf)
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong t_j = (jlong) t;
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , t_j, timeIndex_j, kf_j);
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
						return this->CAnimationTrackListener::getInterpolatedKeyFrame(t, timeIndex, kf);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCAnimationTrackListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024AnimationTrackListener_getInterpolatedKeyFrame_1CAnimationTrack_1CTimeIndex_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CAnimationTrack *t = (const EarthView::World::Graphic::CAnimationTrack*) t_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener::getInterpolatedKeyFrame(t, timeIndex, kf);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getInterpolatedKeyFrame(t, timeIndex, kf);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024AnimationTrackListener_register_1getInterpolatedKeyFrame_1CAnimationTrack_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackListenerProxy *pObjectX = (JCAnimationTrackListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback", "(JJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024AnimationTrackListener_getInterpolatedKeyFrame_1CAnimationTrack_1CTimeIndex_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CAnimationTrack *t = (const EarthView::World::Graphic::CAnimationTrack*) t_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener::getInterpolatedKeyFrame(t, timeIndex, kf);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AnimationTrack_getHandle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getHandle();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AnimationTrack_getNumKeyFrames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getNumKeyFrames();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumKeyFrames();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1getNumKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumKeyFrames_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_AnimationTrack_getNumKeyFrames_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getNumKeyFrames();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_getKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getKeyFrame(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->getKeyFrame(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1getKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFrame_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_getKeyFrame_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getKeyFrame(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationTrack_getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong keyFrame1_j, jlong keyFrame2_j, jlong firstKeyIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame1 = (EarthView::World::Graphic::CKeyFrame**) keyFrame1_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame2 = (EarthView::World::Graphic::CKeyFrame**) keyFrame2_j;
				ev_uint16 *firstKeyIndex = (ev_uint16*) firstKeyIndex_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback", "(JJJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationTrack_getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong keyFrame1_j, jlong keyFrame2_j, jlong firstKeyIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame1 = (EarthView::World::Graphic::CKeyFrame**) keyFrame1_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame2 = (EarthView::World::Graphic::CKeyFrame**) keyFrame2_j;
				ev_uint16 *firstKeyIndex = (ev_uint16*) firstKeyIndex_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationTrack_getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong keyFrame1_j, jlong keyFrame2_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame1 = (EarthView::World::Graphic::CKeyFrame**) keyFrame1_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame2 = (EarthView::World::Graphic::CKeyFrame**) keyFrame2_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback", "(JJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_AnimationTrack_getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong keyFrame1_j, jlong keyFrame2_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame1 = (EarthView::World::Graphic::CKeyFrame**) keyFrame1_j;
				EarthView::World::Graphic::CKeyFrame **keyFrame2 = (EarthView::World::Graphic::CKeyFrame**) keyFrame2_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_createKeyFrame_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::createKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->createKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1createKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_createKeyFrame_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::createKeyFrame(timePos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_removeKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::removeKeyFrame(index);
				}
				else
				{
					pObjectX->removeKeyFrame(index);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1removeKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeKeyFrame_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_removeKeyFrame_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::removeKeyFrame(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_removeAllKeyFrames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::removeAllKeyFrames();
				}
				else
				{
					pObjectX->removeAllKeyFrames();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1removeAllKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllKeyFrames_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_removeAllKeyFrames_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::removeAllKeyFrames();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				else
				{
					pObjectX->getInterpolatedKeyFrame(timeIndex, kf);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_apply_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::apply(timeIndex, weight, scale);
				}
				else
				{
					pObjectX->apply(timeIndex, weight, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1apply_1CTimeIndex_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_Real_callback", "(JDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_apply_1CTimeIndex_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::apply(timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_apply_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::apply(timeIndex, weight);
				}
				else
				{
					pObjectX->apply(timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1apply_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_callback", "(JD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_apply_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::apply(timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_apply_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::apply(timeIndex);
				}
				else
				{
					pObjectX->apply(timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1apply_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_apply_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::apply(timeIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1keyFrameDataChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::_keyFrameDataChanged();
				}
				else
				{
					pObjectX->_keyFrameDataChanged();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1_1keyFrameDataChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__keyFrameDataChanged_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_keyFrameDataChanged_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1keyFrameDataChanged_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::_keyFrameDataChanged();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationTrack_hasNonZeroKeyFrames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::hasNonZeroKeyFrames();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasNonZeroKeyFrames();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1hasNonZeroKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasNonZeroKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasNonZeroKeyFrames_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationTrack_hasNonZeroKeyFrames_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::hasNonZeroKeyFrames();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_optimise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::optimise();
				}
				else
				{
					pObjectX->optimise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1optimise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_optimise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"optimise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_optimise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::optimise();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_push_1back_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
			{
				Real t = (Real) t_j;
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				Real& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				Real& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_insert_1ev_1uint32_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jdouble t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				Real t = (Real) t_j;
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& pObjectX = *(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				Real& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				Real& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_00024KeyFrameTimes_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes *pObjectX = (EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1collectKeyFrameTimes_1KeyFrameTimes(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyFrameTimes_j)
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes &keyFrameTimes = *(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) keyFrameTimes_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
				}
				else
				{
					pObjectX->_collectKeyFrameTimes(keyFrameTimes);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1_1collectKeyFrameTimes_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__collectKeyFrameTimes_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_collectKeyFrameTimes_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1collectKeyFrameTimes_1KeyFrameTimes_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyFrameTimes_j)
			{
				EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes &keyFrameTimes = *(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) keyFrameTimes_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1buildKeyFrameIndexMap_1KeyFrameTimes(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyFrameTimes_j)
			{
				const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes &keyFrameTimes = *(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) keyFrameTimes_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
				}
				else
				{
					pObjectX->_buildKeyFrameIndexMap(keyFrameTimes);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1_1buildKeyFrameIndexMap_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__buildKeyFrameIndexMap_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_buildKeyFrameIndexMap_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1buildKeyFrameIndexMap_1KeyFrameTimes_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong keyFrameTimes_j)
			{
				const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes &keyFrameTimes = *(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes*) keyFrameTimes_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::_applyBaseKeyFrame(base);
				}
				else
				{
					pObjectX->_applyBaseKeyFrame(base);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1_1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__applyBaseKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_applyBaseKeyFrame_CKeyFrame_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack__1applyBaseKeyFrame_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_setListener_1CAnimationTrackListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *ref_l = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) ref_l_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::setListener(ref_l);
				}
				else
				{
					pObjectX->setListener(ref_l);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1setListener_1CAnimationTrackListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setListener_CAnimationTrackListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setListener_CAnimationTrackListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_setListener_1CAnimationTrackListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *ref_l = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) ref_l_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::setListener(ref_l);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_getParent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getParent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_createKeyFrameImpl_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1createKeyFrameImpl_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrameImpl_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrameImpl_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_AnimationTrack_createKeyFrameImpl_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CAnimationTrack::createKeyFrameImpl(time);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_populateClone_1CAnimationTrack(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clone_j)
			{
				EarthView::World::Graphic::CAnimationTrack *clone = (EarthView::World::Graphic::CAnimationTrack*) clone_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CAnimationTrack::populateClone(clone);
				}
				else
				{
					pObjectX->populateClone(clone);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_register_1populateClone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCAnimationTrackProxy *pObjectX = (JCAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_populateClone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"populateClone_CAnimationTrack_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_AnimationTrack_populateClone_1CAnimationTrack_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong clone_j)
			{
				EarthView::World::Graphic::CAnimationTrack *clone = (EarthView::World::Graphic::CAnimationTrack*) clone_j;
				const 				EarthView::World::Graphic::CAnimationTrack *pObjectX = (EarthView::World::Graphic::CAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CAnimationTrack::populateClone(clone);
			}
			class JCNumericAnimationTrackProxy : public EarthView::World::Graphic::CNumericAnimationTrack
			{
			 private:
				EarthView::World::Core::ev_string m_createNumericKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_getAssociatedAnimable_void_callback;
				EarthView::World::Core::ev_string m_setAssociatedAnimable_AnimableValuePtr_callback;
				EarthView::World::Core::ev_string m_getNumKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_createKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_removeKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeAllKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_callback;
				EarthView::World::Core::ev_string m__keyFrameDataChanged_void_callback;
				EarthView::World::Core::ev_string m_hasNonZeroKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_optimise_void_callback;
				EarthView::World::Core::ev_string m__collectKeyFrameTimes_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__buildKeyFrameIndexMap_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__applyBaseKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_setListener_CAnimationTrackListener_callback;
				EarthView::World::Core::ev_string m_createKeyFrameImpl_Real_callback;
				EarthView::World::Core::ev_string m_populateClone_CAnimationTrack_callback;
			public:
				JCNumericAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CNumericAnimationTrack(pList)
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
				void register_createNumericKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createNumericKeyFrame_Real_callback = __method;
				}
				void register_getAssociatedAnimable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAssociatedAnimable_void_callback = __method;
				}
				void register_setAssociatedAnimable_AnimableValuePtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAssociatedAnimable_AnimableValuePtr_callback = __method;
				}
				void register_getNumKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumKeyFrames_void_callback = __method;
				}
				void register_getKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback = __method;
				}
				void register_createKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrame_Real_callback = __method;
				}
				void register_removeKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeKeyFrame_ev_uint16_callback = __method;
				}
				void register_removeAllKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllKeyFrames_void_callback = __method;
				}
				void register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback = __method;
				}
				void register_apply_CTimeIndex_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_Real_callback = __method;
				}
				void register_apply_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_callback = __method;
				}
				void register_apply_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_callback = __method;
				}
				void register__keyFrameDataChanged_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__keyFrameDataChanged_void_callback = __method;
				}
				void register_hasNonZeroKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasNonZeroKeyFrames_void_callback = __method;
				}
				void register_optimise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_optimise_void_callback = __method;
				}
				void register__collectKeyFrameTimes_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__collectKeyFrameTimes_KeyFrameTimes_callback = __method;
				}
				void register__buildKeyFrameIndexMap_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback = __method;
				}
				void register__applyBaseKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__applyBaseKeyFrame_CKeyFrame_callback = __method;
				}
				void register_setListener_CAnimationTrackListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setListener_CAnimationTrackListener_callback = __method;
				}
				void register_createKeyFrameImpl_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrameImpl_Real_callback = __method;
				}
				void register_populateClone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_populateClone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CNumericKeyFrame* createNumericKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createNumericKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createNumericKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNumericKeyFrame *__values1 = (EarthView::World::Graphic::CNumericKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNumericAnimationTrack::createNumericKeyFrame(timePos);
					}
				}
				virtual void getInterpolatedKeyFrame(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, kf_j);
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
						return this->CNumericAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, Real scale)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j, scale_j);
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
						return this->CNumericAnimationTrack::apply(timeIndex, weight, scale);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j);
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
						return this->CNumericAnimationTrack::apply(timeIndex, weight);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j);
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
						return this->CNumericAnimationTrack::apply(timeIndex);
					}
				}
				virtual const EarthView::World::Graphic::AnimableValuePtr& getAssociatedAnimable() const
				{
					if (this->_gRef != NULL && this->m_getAssociatedAnimable_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAssociatedAnimable_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const EarthView::World::Graphic::AnimableValuePtr &__values1 = *(const EarthView::World::Graphic::AnimableValuePtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNumericAnimationTrack::getAssociatedAnimable();
					}
				}
				virtual void setAssociatedAnimable(const EarthView::World::Graphic::AnimableValuePtr& val)
				{
					if (this->_gRef != NULL && this->m_setAssociatedAnimable_AnimableValuePtr_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("setAssociatedAnimable_AnimableValuePtr_callback");
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
						return this->CNumericAnimationTrack::setAssociatedAnimable(val);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(Real time)
				{
					if (this->_gRef != NULL && this->m_createKeyFrameImpl_Real_callback != "" && this->isCustomExtend())
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
						jdouble time_j = (jdouble) time;
						jmethodID __method = __gr->getMethod("createKeyFrameImpl_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , time_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNumericAnimationTrack::createKeyFrameImpl(time);
					}
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_getNumKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumKeyFrames_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CNumericAnimationTrack::getNumKeyFrames();
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getKeyFrame_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNumericAnimationTrack::getKeyFrame(index);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2, ev_uint16* firstKeyIndex) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jlong firstKeyIndex_j = (jlong) firstKeyIndex;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j, firstKeyIndex_j);
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
						return this->CNumericAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j);
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
						return this->CNumericAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNumericAnimationTrack::createKeyFrame(timePos);
					}
				}
				virtual void removeKeyFrame(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeKeyFrame_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
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
						return this->CNumericAnimationTrack::removeKeyFrame(index);
					}
				}
				virtual void removeAllKeyFrames()
				{
					if (this->_gRef != NULL && this->m_removeAllKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllKeyFrames_void_callback");
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
						return this->CNumericAnimationTrack::removeAllKeyFrames();
					}
				}
				virtual void _keyFrameDataChanged() const
				{
					if (this->_gRef != NULL && this->m__keyFrameDataChanged_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_keyFrameDataChanged_void_callback");
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
						return this->CNumericAnimationTrack::_keyFrameDataChanged();
					}
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_hasNonZeroKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasNonZeroKeyFrames_void_callback");
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
						return this->CNumericAnimationTrack::hasNonZeroKeyFrames();
					}
				}
				virtual void optimise()
				{
					if (this->_gRef != NULL && this->m_optimise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("optimise_void_callback");
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
						return this->CNumericAnimationTrack::optimise();
					}
				}
				virtual void _collectKeyFrameTimes(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__collectKeyFrameTimes_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_collectKeyFrameTimes_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CNumericAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
					}
				}
				virtual void _buildKeyFrameIndexMap(const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_buildKeyFrameIndexMap_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CNumericAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
					}
				}
				virtual void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame* base)
				{
					if (this->_gRef != NULL && this->m__applyBaseKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong base_j = (jlong) base;
						jmethodID __method = __gr->getMethod("_applyBaseKeyFrame_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , base_j);
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
						return this->CNumericAnimationTrack::_applyBaseKeyFrame(base);
					}
				}
				virtual void setListener(EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if (this->_gRef != NULL && this->m_setListener_CAnimationTrackListener_callback != "" && this->isCustomExtend())
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
						jlong ref_l_j = (jlong) ref_l;
						jmethodID __method = __gr->getMethod("setListener_CAnimationTrackListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_l_j);
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
						return this->CNumericAnimationTrack::setListener(ref_l);
					}
				}
				virtual void populateClone(EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if (this->_gRef != NULL && this->m_populateClone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong clone_j = (jlong) clone;
						jmethodID __method = __gr->getMethod("populateClone_CAnimationTrack_callback");
						__env->CallVoidMethod(__obj, __method , clone_j);
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
						return this->CNumericAnimationTrack::populateClone(clone);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCNumericAnimationTrackProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_createNumericKeyFrame_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					EarthView::World::Graphic::CNumericKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::createNumericKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNumericKeyFrame* __values1 = pObjectX->createNumericKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1createNumericKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createNumericKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createNumericKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_createNumericKeyFrame_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CNumericKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::createNumericKeyFrame(timePos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				else
				{
					pObjectX->getInterpolatedKeyFrame(timeIndex, kf);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_apply_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::apply(timeIndex, weight, scale);
				}
				else
				{
					pObjectX->apply(timeIndex, weight, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1apply_1CTimeIndex_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_Real_callback", "(JDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_apply_1CTimeIndex_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::apply(timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_apply_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::apply(timeIndex, weight);
				}
				else
				{
					pObjectX->apply(timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1apply_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_callback", "(JD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_apply_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::apply(timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_apply_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::apply(timeIndex);
				}
				else
				{
					pObjectX->apply(timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1apply_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_apply_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::apply(timeIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_applyToAnimable_1AnimableValuePtr_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong anim_j, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &anim = *(EarthView::World::Graphic::AnimableValuePtr*) anim_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->applyToAnimable(anim, timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_applyToAnimable_1AnimableValuePtr_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong anim_j, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &anim = *(EarthView::World::Graphic::AnimableValuePtr*) anim_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->applyToAnimable(anim, timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_applyToAnimable_1AnimableValuePtr_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong anim_j, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &anim = *(EarthView::World::Graphic::AnimableValuePtr*) anim_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->applyToAnimable(anim, timeIndex);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_getAssociatedAnimable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					const EarthView::World::Graphic::AnimableValuePtr& __values1 = pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::getAssociatedAnimable();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				else
				{
					const EarthView::World::Graphic::AnimableValuePtr& __values1 = pObjectX->getAssociatedAnimable();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1getAssociatedAnimable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAssociatedAnimable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAssociatedAnimable_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_getAssociatedAnimable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				const EarthView::World::Graphic::AnimableValuePtr& __values1 = pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::getAssociatedAnimable();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_setAssociatedAnimable_1AnimableValuePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &val = *(EarthView::World::Graphic::AnimableValuePtr*) val_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::setAssociatedAnimable(val);
				}
				else
				{
					pObjectX->setAssociatedAnimable(val);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1setAssociatedAnimable_1AnimableValuePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAssociatedAnimable_AnimableValuePtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAssociatedAnimable_AnimableValuePtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_setAssociatedAnimable_1AnimableValuePtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
			{
				const EarthView::World::Graphic::AnimableValuePtr &val = *(EarthView::World::Graphic::AnimableValuePtr*) val_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::setAssociatedAnimable(val);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_getNumericKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CNumericKeyFrame* __values1 = pObjectX->getNumericKeyFrame(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack__1clone_1CAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newParent_j)
			{
				EarthView::World::Graphic::CAnimation *newParent = (EarthView::World::Graphic::CAnimation*) newParent_j;
				const 				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CNumericAnimationTrack* __values1 = pObjectX->_clone(newParent);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_createKeyFrameImpl_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNumericAnimationTrackProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1createKeyFrameImpl_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrameImpl_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrameImpl_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_createKeyFrameImpl_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CNumericAnimationTrack *pObjectX = (EarthView::World::Graphic::CNumericAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNumericAnimationTrack::createKeyFrameImpl(time);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1getNumKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumKeyFrames_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1getKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFrame_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback", "(JJJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback", "(JJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1createKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1removeKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeKeyFrame_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1removeAllKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllKeyFrames_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1_1keyFrameDataChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__keyFrameDataChanged_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_keyFrameDataChanged_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1hasNonZeroKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasNonZeroKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasNonZeroKeyFrames_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1optimise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_optimise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"optimise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1_1collectKeyFrameTimes_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__collectKeyFrameTimes_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_collectKeyFrameTimes_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1_1buildKeyFrameIndexMap_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__buildKeyFrameIndexMap_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_buildKeyFrameIndexMap_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1_1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__applyBaseKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_applyBaseKeyFrame_CKeyFrame_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1setListener_1CAnimationTrackListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setListener_CAnimationTrackListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setListener_CAnimationTrackListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NumericAnimationTrack_register_1populateClone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNumericAnimationTrackProxy *pObjectX = (JCNumericAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_populateClone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"populateClone_CAnimationTrack_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCNodeAnimationTrackProxy : public EarthView::World::Graphic::CNodeAnimationTrack
			{
			 private:
				EarthView::World::Core::ev_string m_createNodeKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_getAssociatedNode_void_callback;
				EarthView::World::Core::ev_string m_setAssociatedNode_CNode_callback;
				EarthView::World::Core::ev_string m_applyToNode_CNode_CTimeIndex_Real_Real_callback;
				EarthView::World::Core::ev_string m_applyToNode_CNode_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_applyToNode_CNode_CTimeIndex_callback;
				EarthView::World::Core::ev_string m_setUseShortestRotationPath_ev_bool_callback;
				EarthView::World::Core::ev_string m_getUseShortestRotationPath_void_callback;
				EarthView::World::Core::ev_string m_getNodeKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_buildInterpolationSplines_void_callback;
				EarthView::World::Core::ev_string m_getNumKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_createKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_removeKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeAllKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_callback;
				EarthView::World::Core::ev_string m__keyFrameDataChanged_void_callback;
				EarthView::World::Core::ev_string m_hasNonZeroKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_optimise_void_callback;
				EarthView::World::Core::ev_string m__collectKeyFrameTimes_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__buildKeyFrameIndexMap_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__applyBaseKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_setListener_CAnimationTrackListener_callback;
				EarthView::World::Core::ev_string m_createKeyFrameImpl_Real_callback;
				EarthView::World::Core::ev_string m_populateClone_CAnimationTrack_callback;
			public:
				JCNodeAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CNodeAnimationTrack(pList)
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
				void register_createNodeKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createNodeKeyFrame_Real_callback = __method;
				}
				void register_getAssociatedNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAssociatedNode_void_callback = __method;
				}
				void register_setAssociatedNode_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAssociatedNode_CNode_callback = __method;
				}
				void register_applyToNode_CNode_CTimeIndex_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToNode_CNode_CTimeIndex_Real_Real_callback = __method;
				}
				void register_applyToNode_CNode_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToNode_CNode_CTimeIndex_Real_callback = __method;
				}
				void register_applyToNode_CNode_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToNode_CNode_CTimeIndex_callback = __method;
				}
				void register_setUseShortestRotationPath_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUseShortestRotationPath_ev_bool_callback = __method;
				}
				void register_getUseShortestRotationPath_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getUseShortestRotationPath_void_callback = __method;
				}
				void register_getNodeKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNodeKeyFrame_ev_uint16_callback = __method;
				}
				void register_buildInterpolationSplines_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_buildInterpolationSplines_void_callback = __method;
				}
				void register_getNumKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumKeyFrames_void_callback = __method;
				}
				void register_getKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback = __method;
				}
				void register_createKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrame_Real_callback = __method;
				}
				void register_removeKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeKeyFrame_ev_uint16_callback = __method;
				}
				void register_removeAllKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllKeyFrames_void_callback = __method;
				}
				void register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback = __method;
				}
				void register_apply_CTimeIndex_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_Real_callback = __method;
				}
				void register_apply_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_callback = __method;
				}
				void register_apply_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_callback = __method;
				}
				void register__keyFrameDataChanged_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__keyFrameDataChanged_void_callback = __method;
				}
				void register_hasNonZeroKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasNonZeroKeyFrames_void_callback = __method;
				}
				void register_optimise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_optimise_void_callback = __method;
				}
				void register__collectKeyFrameTimes_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__collectKeyFrameTimes_KeyFrameTimes_callback = __method;
				}
				void register__buildKeyFrameIndexMap_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback = __method;
				}
				void register__applyBaseKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__applyBaseKeyFrame_CKeyFrame_callback = __method;
				}
				void register_setListener_CAnimationTrackListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setListener_CAnimationTrackListener_callback = __method;
				}
				void register_createKeyFrameImpl_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrameImpl_Real_callback = __method;
				}
				void register_populateClone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_populateClone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CTransformKeyFrame* createNodeKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createNodeKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createNodeKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CTransformKeyFrame *__values1 = (EarthView::World::Graphic::CTransformKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNodeAnimationTrack::createNodeKeyFrame(timePos);
					}
				}
				virtual EarthView::World::Graphic::CNode* getAssociatedNode() const
				{
					if (this->_gRef != NULL && this->m_getAssociatedNode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAssociatedNode_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNodeAnimationTrack::getAssociatedNode();
					}
				}
				virtual void setAssociatedNode(EarthView::World::Graphic::CNode* ref_node)
				{
					if (this->_gRef != NULL && this->m_setAssociatedNode_CNode_callback != "" && this->isCustomExtend())
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
						jlong ref_node_j = (jlong) ref_node;
						jmethodID __method = __gr->getMethod("setAssociatedNode_CNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_node_j);
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
						return this->CNodeAnimationTrack::setAssociatedNode(ref_node);
					}
				}
				virtual void applyToNode(EarthView::World::Graphic::CNode* node, const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, Real scale)
				{
					if (this->_gRef != NULL && this->m_applyToNode_CNode_CTimeIndex_Real_Real_callback != "" && this->isCustomExtend())
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
						jlong node_j = (jlong) node;
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("applyToNode_CNode_CTimeIndex_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , node_j, timeIndex_j, weight_j, scale_j);
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
						return this->CNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
					}
				}
				virtual void applyToNode(EarthView::World::Graphic::CNode* node, const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_applyToNode_CNode_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong node_j = (jlong) node;
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("applyToNode_CNode_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , node_j, timeIndex_j, weight_j);
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
						return this->CNodeAnimationTrack::applyToNode(node, timeIndex, weight);
					}
				}
				virtual void applyToNode(EarthView::World::Graphic::CNode* node, const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_applyToNode_CNode_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong node_j = (jlong) node;
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("applyToNode_CNode_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , node_j, timeIndex_j);
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
						return this->CNodeAnimationTrack::applyToNode(node, timeIndex);
					}
				}
				virtual void setUseShortestRotationPath(ev_bool useShortestPath)
				{
					if (this->_gRef != NULL && this->m_setUseShortestRotationPath_ev_bool_callback != "" && this->isCustomExtend())
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
						jboolean useShortestPath_j = (jboolean) useShortestPath;
						jmethodID __method = __gr->getMethod("setUseShortestRotationPath_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , useShortestPath_j);
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
						return this->CNodeAnimationTrack::setUseShortestRotationPath(useShortestPath);
					}
				}
				virtual ev_bool getUseShortestRotationPath() const
				{
					if (this->_gRef != NULL && this->m_getUseShortestRotationPath_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getUseShortestRotationPath_void_callback");
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
						return this->CNodeAnimationTrack::getUseShortestRotationPath();
					}
				}
				virtual void getInterpolatedKeyFrame(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, kf_j);
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
						return this->CNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, Real scale)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j, scale_j);
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
						return this->CNodeAnimationTrack::apply(timeIndex, weight, scale);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j);
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
						return this->CNodeAnimationTrack::apply(timeIndex, weight);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j);
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
						return this->CNodeAnimationTrack::apply(timeIndex);
					}
				}
				virtual void _keyFrameDataChanged() const
				{
					if (this->_gRef != NULL && this->m__keyFrameDataChanged_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_keyFrameDataChanged_void_callback");
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
						return this->CNodeAnimationTrack::_keyFrameDataChanged();
					}
				}
				virtual EarthView::World::Graphic::CTransformKeyFrame* getNodeKeyFrame(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getNodeKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getNodeKeyFrame_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CTransformKeyFrame *__values1 = (EarthView::World::Graphic::CTransformKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNodeAnimationTrack::getNodeKeyFrame(index);
					}
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_hasNonZeroKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasNonZeroKeyFrames_void_callback");
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
						return this->CNodeAnimationTrack::hasNonZeroKeyFrames();
					}
				}
				virtual void optimise()
				{
					if (this->_gRef != NULL && this->m_optimise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("optimise_void_callback");
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
						return this->CNodeAnimationTrack::optimise();
					}
				}
				virtual void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame* base)
				{
					if (this->_gRef != NULL && this->m__applyBaseKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong base_j = (jlong) base;
						jmethodID __method = __gr->getMethod("_applyBaseKeyFrame_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , base_j);
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
						return this->CNodeAnimationTrack::_applyBaseKeyFrame(base);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(Real time)
				{
					if (this->_gRef != NULL && this->m_createKeyFrameImpl_Real_callback != "" && this->isCustomExtend())
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
						jdouble time_j = (jdouble) time;
						jmethodID __method = __gr->getMethod("createKeyFrameImpl_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , time_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNodeAnimationTrack::createKeyFrameImpl(time);
					}
				}
				virtual void buildInterpolationSplines() const
				{
					if (this->_gRef != NULL && this->m_buildInterpolationSplines_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("buildInterpolationSplines_void_callback");
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
						return this->CNodeAnimationTrack::buildInterpolationSplines();
					}
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_getNumKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumKeyFrames_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CNodeAnimationTrack::getNumKeyFrames();
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getKeyFrame_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNodeAnimationTrack::getKeyFrame(index);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2, ev_uint16* firstKeyIndex) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jlong firstKeyIndex_j = (jlong) firstKeyIndex;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j, firstKeyIndex_j);
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
						return this->CNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j);
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
						return this->CNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CNodeAnimationTrack::createKeyFrame(timePos);
					}
				}
				virtual void removeKeyFrame(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeKeyFrame_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
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
						return this->CNodeAnimationTrack::removeKeyFrame(index);
					}
				}
				virtual void removeAllKeyFrames()
				{
					if (this->_gRef != NULL && this->m_removeAllKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllKeyFrames_void_callback");
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
						return this->CNodeAnimationTrack::removeAllKeyFrames();
					}
				}
				virtual void _collectKeyFrameTimes(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__collectKeyFrameTimes_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_collectKeyFrameTimes_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CNodeAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
					}
				}
				virtual void _buildKeyFrameIndexMap(const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_buildKeyFrameIndexMap_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CNodeAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
					}
				}
				virtual void setListener(EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if (this->_gRef != NULL && this->m_setListener_CAnimationTrackListener_callback != "" && this->isCustomExtend())
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
						jlong ref_l_j = (jlong) ref_l;
						jmethodID __method = __gr->getMethod("setListener_CAnimationTrackListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_l_j);
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
						return this->CNodeAnimationTrack::setListener(ref_l);
					}
				}
				virtual void populateClone(EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if (this->_gRef != NULL && this->m_populateClone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong clone_j = (jlong) clone;
						jmethodID __method = __gr->getMethod("populateClone_CAnimationTrack_callback");
						__env->CallVoidMethod(__obj, __method , clone_j);
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
						return this->CNodeAnimationTrack::populateClone(clone);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCNodeAnimationTrackProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_createNodeKeyFrame_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::createNodeKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CTransformKeyFrame* __values1 = pObjectX->createNodeKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1createNodeKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createNodeKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createNodeKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_createNodeKeyFrame_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::createNodeKeyFrame(timePos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getAssociatedNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getAssociatedNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getAssociatedNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getAssociatedNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAssociatedNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAssociatedNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getAssociatedNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getAssociatedNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_setAssociatedNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CNode *ref_node = (EarthView::World::Graphic::CNode*) ref_node_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::setAssociatedNode(ref_node);
				}
				else
				{
					pObjectX->setAssociatedNode(ref_node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1setAssociatedNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAssociatedNode_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAssociatedNode_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_setAssociatedNode_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CNode *ref_node = (EarthView::World::Graphic::CNode*) ref_node_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::setAssociatedNode(ref_node);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
				}
				else
				{
					pObjectX->applyToNode(node, timeIndex, weight, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1applyToNode_1CNode_1CTimeIndex_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToNode_CNode_CTimeIndex_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToNode_CNode_CTimeIndex_Real_Real_callback", "(JJDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, timeIndex, weight);
				}
				else
				{
					pObjectX->applyToNode(node, timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1applyToNode_1CNode_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToNode_CNode_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToNode_CNode_CTimeIndex_Real_callback", "(JJD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_applyToNode_1CNode_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, timeIndex);
				}
				else
				{
					pObjectX->applyToNode(node, timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1applyToNode_1CNode_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToNode_CNode_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToNode_CNode_CTimeIndex_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::applyToNode(node, timeIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_setUseShortestRotationPath_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useShortestPath_j)
			{
				ev_bool useShortestPath = (ev_bool) useShortestPath_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::setUseShortestRotationPath(useShortestPath);
				}
				else
				{
					pObjectX->setUseShortestRotationPath(useShortestPath);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1setUseShortestRotationPath_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUseShortestRotationPath_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUseShortestRotationPath_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_setUseShortestRotationPath_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useShortestPath_j)
			{
				ev_bool useShortestPath = (ev_bool) useShortestPath_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::setUseShortestRotationPath(useShortestPath);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getUseShortestRotationPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getUseShortestRotationPath();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getUseShortestRotationPath();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getUseShortestRotationPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getUseShortestRotationPath_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getUseShortestRotationPath_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getUseShortestRotationPath_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getUseShortestRotationPath();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				else
				{
					pObjectX->getInterpolatedKeyFrame(timeIndex, kf);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_apply_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::apply(timeIndex, weight, scale);
				}
				else
				{
					pObjectX->apply(timeIndex, weight, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1apply_1CTimeIndex_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_Real_callback", "(JDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_apply_1CTimeIndex_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::apply(timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_apply_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::apply(timeIndex, weight);
				}
				else
				{
					pObjectX->apply(timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1apply_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_callback", "(JD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_apply_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::apply(timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_apply_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::apply(timeIndex);
				}
				else
				{
					pObjectX->apply(timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1apply_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_apply_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::apply(timeIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack__1keyFrameDataChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::_keyFrameDataChanged();
				}
				else
				{
					pObjectX->_keyFrameDataChanged();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1_1keyFrameDataChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__keyFrameDataChanged_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_keyFrameDataChanged_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack__1keyFrameDataChanged_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::_keyFrameDataChanged();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getNodeKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getNodeKeyFrame(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CTransformKeyFrame* __values1 = pObjectX->getNodeKeyFrame(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getNodeKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNodeKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNodeKeyFrame_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_getNodeKeyFrame_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::getNodeKeyFrame(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_hasNonZeroKeyFrames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::hasNonZeroKeyFrames();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasNonZeroKeyFrames();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1hasNonZeroKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasNonZeroKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasNonZeroKeyFrames_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_hasNonZeroKeyFrames_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::hasNonZeroKeyFrames();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_optimise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::optimise();
				}
				else
				{
					pObjectX->optimise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1optimise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_optimise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"optimise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_optimise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::optimise();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack__1clone_1CAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newParent_j)
			{
				EarthView::World::Graphic::CAnimation *newParent = (EarthView::World::Graphic::CAnimation*) newParent_j;
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CNodeAnimationTrack* __values1 = pObjectX->_clone(newParent);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack__1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::_applyBaseKeyFrame(base);
				}
				else
				{
					pObjectX->_applyBaseKeyFrame(base);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1_1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__applyBaseKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_applyBaseKeyFrame_CKeyFrame_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack__1applyBaseKeyFrame_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_createKeyFrameImpl_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1createKeyFrameImpl_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrameImpl_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrameImpl_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_createKeyFrameImpl_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::createKeyFrameImpl(time);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_buildInterpolationSplines_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::buildInterpolationSplines();
				}
				else
				{
					pObjectX->buildInterpolationSplines();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1buildInterpolationSplines_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_buildInterpolationSplines_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"buildInterpolationSplines_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_buildInterpolationSplines_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CNodeAnimationTrack::buildInterpolationSplines();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getNumKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumKeyFrames_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFrame_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback", "(JJJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback", "(JJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1createKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1removeKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeKeyFrame_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1removeAllKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllKeyFrames_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1_1collectKeyFrameTimes_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__collectKeyFrameTimes_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_collectKeyFrameTimes_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1_1buildKeyFrameIndexMap_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__buildKeyFrameIndexMap_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_buildKeyFrameIndexMap_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1setListener_1CAnimationTrackListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setListener_CAnimationTrackListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setListener_CAnimationTrackListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_NodeAnimationTrack_register_1populateClone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCNodeAnimationTrackProxy *pObjectX = (JCNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_populateClone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"populateClone_CAnimationTrack_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			class JCSphereNodeAnimationTrackProxy : public EarthView::World::Graphic::CSphereNodeAnimationTrack
			{
			 private:
				EarthView::World::Core::ev_string m_createNodeKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_getAssociatedNode_void_callback;
				EarthView::World::Core::ev_string m_setAssociatedNode_CNode_callback;
				EarthView::World::Core::ev_string m_applyToNode_CNode_CTimeIndex_Real_Real_callback;
				EarthView::World::Core::ev_string m_applyToNode_CNode_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_applyToNode_CNode_CTimeIndex_callback;
				EarthView::World::Core::ev_string m_getNodeKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getNumKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_createKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_removeKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeAllKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_callback;
				EarthView::World::Core::ev_string m__keyFrameDataChanged_void_callback;
				EarthView::World::Core::ev_string m_hasNonZeroKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_optimise_void_callback;
				EarthView::World::Core::ev_string m__collectKeyFrameTimes_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__buildKeyFrameIndexMap_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__applyBaseKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_setListener_CAnimationTrackListener_callback;
				EarthView::World::Core::ev_string m_createKeyFrameImpl_Real_callback;
				EarthView::World::Core::ev_string m_populateClone_CAnimationTrack_callback;
			public:
				JCSphereNodeAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereNodeAnimationTrack(pList)
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
				void register_createNodeKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createNodeKeyFrame_Real_callback = __method;
				}
				void register_getAssociatedNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAssociatedNode_void_callback = __method;
				}
				void register_setAssociatedNode_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setAssociatedNode_CNode_callback = __method;
				}
				void register_applyToNode_CNode_CTimeIndex_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToNode_CNode_CTimeIndex_Real_Real_callback = __method;
				}
				void register_applyToNode_CNode_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToNode_CNode_CTimeIndex_Real_callback = __method;
				}
				void register_applyToNode_CNode_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToNode_CNode_CTimeIndex_callback = __method;
				}
				void register_getNodeKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNodeKeyFrame_ev_uint16_callback = __method;
				}
				void register_getNumKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumKeyFrames_void_callback = __method;
				}
				void register_getKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback = __method;
				}
				void register_createKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrame_Real_callback = __method;
				}
				void register_removeKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeKeyFrame_ev_uint16_callback = __method;
				}
				void register_removeAllKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllKeyFrames_void_callback = __method;
				}
				void register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback = __method;
				}
				void register_apply_CTimeIndex_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_Real_callback = __method;
				}
				void register_apply_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_callback = __method;
				}
				void register_apply_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_callback = __method;
				}
				void register__keyFrameDataChanged_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__keyFrameDataChanged_void_callback = __method;
				}
				void register_hasNonZeroKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasNonZeroKeyFrames_void_callback = __method;
				}
				void register_optimise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_optimise_void_callback = __method;
				}
				void register__collectKeyFrameTimes_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__collectKeyFrameTimes_KeyFrameTimes_callback = __method;
				}
				void register__buildKeyFrameIndexMap_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback = __method;
				}
				void register__applyBaseKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__applyBaseKeyFrame_CKeyFrame_callback = __method;
				}
				void register_setListener_CAnimationTrackListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setListener_CAnimationTrackListener_callback = __method;
				}
				void register_createKeyFrameImpl_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrameImpl_Real_callback = __method;
				}
				void register_populateClone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_populateClone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CSphereTransformKeyFrame* createNodeKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createNodeKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createNodeKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSphereTransformKeyFrame *__values1 = (EarthView::World::Graphic::CSphereTransformKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereNodeAnimationTrack::createNodeKeyFrame(timePos);
					}
				}
				virtual EarthView::World::Graphic::CNode* getAssociatedNode() const
				{
					if (this->_gRef != NULL && this->m_getAssociatedNode_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getAssociatedNode_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CNode *__values1 = (EarthView::World::Graphic::CNode*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereNodeAnimationTrack::getAssociatedNode();
					}
				}
				virtual void setAssociatedNode(EarthView::World::Graphic::CNode* ref_node)
				{
					if (this->_gRef != NULL && this->m_setAssociatedNode_CNode_callback != "" && this->isCustomExtend())
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
						jlong ref_node_j = (jlong) ref_node;
						jmethodID __method = __gr->getMethod("setAssociatedNode_CNode_callback");
						__env->CallVoidMethod(__obj, __method , ref_node_j);
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
						return this->CSphereNodeAnimationTrack::setAssociatedNode(ref_node);
					}
				}
				virtual void applyToNode(EarthView::World::Graphic::CNode* node, const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, Real scale)
				{
					if (this->_gRef != NULL && this->m_applyToNode_CNode_CTimeIndex_Real_Real_callback != "" && this->isCustomExtend())
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
						jlong node_j = (jlong) node;
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("applyToNode_CNode_CTimeIndex_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , node_j, timeIndex_j, weight_j, scale_j);
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
						return this->CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
					}
				}
				virtual void applyToNode(EarthView::World::Graphic::CNode* node, const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_applyToNode_CNode_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong node_j = (jlong) node;
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("applyToNode_CNode_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , node_j, timeIndex_j, weight_j);
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
						return this->CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight);
					}
				}
				virtual void applyToNode(EarthView::World::Graphic::CNode* node, const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_applyToNode_CNode_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong node_j = (jlong) node;
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("applyToNode_CNode_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , node_j, timeIndex_j);
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
						return this->CSphereNodeAnimationTrack::applyToNode(node, timeIndex);
					}
				}
				virtual void getInterpolatedKeyFrame(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, kf_j);
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
						return this->CSphereNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, Real scale)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j, scale_j);
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
						return this->CSphereNodeAnimationTrack::apply(timeIndex, weight, scale);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j);
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
						return this->CSphereNodeAnimationTrack::apply(timeIndex, weight);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j);
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
						return this->CSphereNodeAnimationTrack::apply(timeIndex);
					}
				}
				virtual void _keyFrameDataChanged() const
				{
					if (this->_gRef != NULL && this->m__keyFrameDataChanged_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_keyFrameDataChanged_void_callback");
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
						return this->CSphereNodeAnimationTrack::_keyFrameDataChanged();
					}
				}
				virtual EarthView::World::Graphic::CSphereTransformKeyFrame* getNodeKeyFrame(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getNodeKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getNodeKeyFrame_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CSphereTransformKeyFrame *__values1 = (EarthView::World::Graphic::CSphereTransformKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereNodeAnimationTrack::getNodeKeyFrame(index);
					}
				}
				virtual void setListener(EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if (this->_gRef != NULL && this->m_setListener_CAnimationTrackListener_callback != "" && this->isCustomExtend())
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
						jlong ref_l_j = (jlong) ref_l;
						jmethodID __method = __gr->getMethod("setListener_CAnimationTrackListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_l_j);
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
						return this->CSphereNodeAnimationTrack::setListener(ref_l);
					}
				}
				virtual void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame* base)
				{
					if (this->_gRef != NULL && this->m__applyBaseKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong base_j = (jlong) base;
						jmethodID __method = __gr->getMethod("_applyBaseKeyFrame_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , base_j);
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
						return this->CSphereNodeAnimationTrack::_applyBaseKeyFrame(base);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(Real time)
				{
					if (this->_gRef != NULL && this->m_createKeyFrameImpl_Real_callback != "" && this->isCustomExtend())
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
						jdouble time_j = (jdouble) time;
						jmethodID __method = __gr->getMethod("createKeyFrameImpl_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , time_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereNodeAnimationTrack::createKeyFrameImpl(time);
					}
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_getNumKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumKeyFrames_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CSphereNodeAnimationTrack::getNumKeyFrames();
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getKeyFrame_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereNodeAnimationTrack::getKeyFrame(index);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2, ev_uint16* firstKeyIndex) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jlong firstKeyIndex_j = (jlong) firstKeyIndex;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j, firstKeyIndex_j);
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
						return this->CSphereNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j);
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
						return this->CSphereNodeAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CSphereNodeAnimationTrack::createKeyFrame(timePos);
					}
				}
				virtual void removeKeyFrame(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeKeyFrame_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
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
						return this->CSphereNodeAnimationTrack::removeKeyFrame(index);
					}
				}
				virtual void removeAllKeyFrames()
				{
					if (this->_gRef != NULL && this->m_removeAllKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllKeyFrames_void_callback");
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
						return this->CSphereNodeAnimationTrack::removeAllKeyFrames();
					}
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_hasNonZeroKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasNonZeroKeyFrames_void_callback");
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
						return this->CSphereNodeAnimationTrack::hasNonZeroKeyFrames();
					}
				}
				virtual void optimise()
				{
					if (this->_gRef != NULL && this->m_optimise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("optimise_void_callback");
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
						return this->CSphereNodeAnimationTrack::optimise();
					}
				}
				virtual void _collectKeyFrameTimes(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__collectKeyFrameTimes_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_collectKeyFrameTimes_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CSphereNodeAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
					}
				}
				virtual void _buildKeyFrameIndexMap(const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_buildKeyFrameIndexMap_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CSphereNodeAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
					}
				}
				virtual void populateClone(EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if (this->_gRef != NULL && this->m_populateClone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong clone_j = (jlong) clone;
						jmethodID __method = __gr->getMethod("populateClone_CAnimationTrack_callback");
						__env->CallVoidMethod(__obj, __method , clone_j);
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
						return this->CSphereNodeAnimationTrack::populateClone(clone);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSphereNodeAnimationTrackProxy);
			class JCSphereNodeAnimationTrackListenerProxy : public EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener
			{
			 private:
				EarthView::World::Core::ev_string m_getRadius_CSphereTransformKeyFrame_callback;
				EarthView::World::Core::ev_string m_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback;
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback;
			public:
				JCSphereNodeAnimationTrackListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CSphereNodeAnimationTrackListener(pList)
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
				void register_getRadius_CSphereTransformKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRadius_CSphereTransformKeyFrame_callback = __method;
				}
				void register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback = __method;
				}
				void register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback = __method;
				}
				virtual ev_real64 getRadius(EarthView::World::Graphic::CSphereTransformKeyFrame* kf)
				{
					if (this->_gRef != NULL && this->m_getRadius_CSphereTransformKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getRadius_CSphereTransformKeyFrame_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , kf_j);
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
						return this->CSphereNodeAnimationTrackListener::getRadius(kf);
					}
				}
				virtual ev_real64 getHeading(ev_real64 latA, ev_real64 lonA, ev_real64 latB, ev_real64 lonB)
				{
					if (this->_gRef != NULL && this->m_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
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
						jdouble latA_j = (jdouble) latA;
						jdouble lonA_j = (jdouble) lonA;
						jdouble latB_j = (jdouble) latB;
						jdouble lonB_j = (jdouble) lonB;
						jmethodID __method = __gr->getMethod("getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , latA_j, lonA_j, latB_j, lonB_j);
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
						return this->CSphereNodeAnimationTrackListener::getHeading(latA, lonA, latB, lonB);
					}
				}
				virtual void getEuler(const EarthView::World::Spatial::Math::CDegree& yawA, const EarthView::World::Spatial::Math::CDegree& pitchA, const EarthView::World::Spatial::Math::CDegree& rollA, const EarthView::World::Spatial::Math::CDegree& yawB, const EarthView::World::Spatial::Math::CDegree& pitchB, const EarthView::World::Spatial::Math::CDegree& rollB, ev_real64 timeRatio, EarthView::World::Spatial::Math::CDegree& yaw, EarthView::World::Spatial::Math::CDegree& pitch, EarthView::World::Spatial::Math::CDegree& roll)
				{
					if (this->_gRef != NULL && this->m_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback != "" && this->isCustomExtend())
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
						jlong yawA_j = (jlong) &yawA;
						jlong pitchA_j = (jlong) &pitchA;
						jlong rollA_j = (jlong) &rollA;
						jlong yawB_j = (jlong) &yawB;
						jlong pitchB_j = (jlong) &pitchB;
						jlong rollB_j = (jlong) &rollB;
						jdouble timeRatio_j = (jdouble) timeRatio;
						jlong yaw_j = (jlong) &yaw;
						jlong pitch_j = (jlong) &pitch;
						jlong roll_j = (jlong) &roll;
						jmethodID __method = __gr->getMethod("getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback");
						__env->CallVoidMethod(__obj, __method , yawA_j, pitchA_j, rollA_j, yawB_j, pitchB_j, rollB_j, timeRatio_j, yaw_j, pitch_j, roll_j);
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
						return this->CSphereNodeAnimationTrackListener::getEuler(yawA, pitchA, rollA, yawB, pitchB, rollB, timeRatio, yaw, pitch, roll);
					}
				}
				virtual ev_bool getInterpolatedKeyFrame(const EarthView::World::Graphic::CAnimationTrack* t, const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf)
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong t_j = (jlong) t;
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , t_j, timeIndex_j, kf_j);
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
						return this->CSphereNodeAnimationTrackListener::getInterpolatedKeyFrame(t, timeIndex, kf);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCSphereNodeAnimationTrackListenerProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getRadius_1CSphereTransformKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kf_j)
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame *kf = (EarthView::World::Graphic::CSphereTransformKeyFrame*) kf_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackListenerProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getRadius(kf);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getRadius(kf);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_register_1getRadius_1CSphereTransformKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackListenerProxy *pObjectX = (JCSphereNodeAnimationTrackListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRadius_CSphereTransformKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRadius_CSphereTransformKeyFrame_callback", "(J)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getRadius_1CSphereTransformKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kf_j)
			{
				EarthView::World::Graphic::CSphereTransformKeyFrame *kf = (EarthView::World::Graphic::CSphereTransformKeyFrame*) kf_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getRadius(kf);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getHeading_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
			{
				ev_real64 latA = (ev_real64) latA_j;
				ev_real64 lonA = (ev_real64) lonA_j;
				ev_real64 latB = (ev_real64) latB_j;
				ev_real64 lonB = (ev_real64) lonB_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackListenerProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getHeading(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getHeading(latA, lonA, latB, lonB);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_register_1getHeading_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackListenerProxy *pObjectX = (JCSphereNodeAnimationTrackListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeading_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDD)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getHeading_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble latA_j, jdouble lonA_j, jdouble latB_j, jdouble lonB_j)
			{
				ev_real64 latA = (ev_real64) latA_j;
				ev_real64 lonA = (ev_real64) lonA_j;
				ev_real64 latB = (ev_real64) latB_j;
				ev_real64 lonB = (ev_real64) lonB_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getHeading(latA, lonA, latB, lonB);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getEuler_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong yawA_j, jlong pitchA_j, jlong rollA_j, jlong yawB_j, jlong pitchB_j, jlong rollB_j, jdouble timeRatio_j, jlong yaw_j, jlong pitch_j, jlong roll_j)
			{
				const EarthView::World::Spatial::Math::CDegree &yawA = *(EarthView::World::Spatial::Math::CDegree*) yawA_j;
				const EarthView::World::Spatial::Math::CDegree &pitchA = *(EarthView::World::Spatial::Math::CDegree*) pitchA_j;
				const EarthView::World::Spatial::Math::CDegree &rollA = *(EarthView::World::Spatial::Math::CDegree*) rollA_j;
				const EarthView::World::Spatial::Math::CDegree &yawB = *(EarthView::World::Spatial::Math::CDegree*) yawB_j;
				const EarthView::World::Spatial::Math::CDegree &pitchB = *(EarthView::World::Spatial::Math::CDegree*) pitchB_j;
				const EarthView::World::Spatial::Math::CDegree &rollB = *(EarthView::World::Spatial::Math::CDegree*) rollB_j;
				ev_real64 timeRatio = (ev_real64) timeRatio_j;
				EarthView::World::Spatial::Math::CDegree &yaw = *(EarthView::World::Spatial::Math::CDegree*) yaw_j;
				EarthView::World::Spatial::Math::CDegree &pitch = *(EarthView::World::Spatial::Math::CDegree*) pitch_j;
				EarthView::World::Spatial::Math::CDegree &roll = *(EarthView::World::Spatial::Math::CDegree*) roll_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackListenerProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getEuler(yawA, pitchA, rollA, yawB, pitchB, rollB, timeRatio, yaw, pitch, roll);
				}
				else
				{
					pObjectX->getEuler(yawA, pitchA, rollA, yawB, pitchB, rollB, timeRatio, yaw, pitch, roll);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_register_1getEuler_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackListenerProxy *pObjectX = (JCSphereNodeAnimationTrackListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getEuler_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_callback", "(JJJJJJDJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getEuler_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1CDegree_1ev_1real64_1CDegree_1CDegree_1CDegree_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong yawA_j, jlong pitchA_j, jlong rollA_j, jlong yawB_j, jlong pitchB_j, jlong rollB_j, jdouble timeRatio_j, jlong yaw_j, jlong pitch_j, jlong roll_j)
			{
				const EarthView::World::Spatial::Math::CDegree &yawA = *(EarthView::World::Spatial::Math::CDegree*) yawA_j;
				const EarthView::World::Spatial::Math::CDegree &pitchA = *(EarthView::World::Spatial::Math::CDegree*) pitchA_j;
				const EarthView::World::Spatial::Math::CDegree &rollA = *(EarthView::World::Spatial::Math::CDegree*) rollA_j;
				const EarthView::World::Spatial::Math::CDegree &yawB = *(EarthView::World::Spatial::Math::CDegree*) yawB_j;
				const EarthView::World::Spatial::Math::CDegree &pitchB = *(EarthView::World::Spatial::Math::CDegree*) pitchB_j;
				const EarthView::World::Spatial::Math::CDegree &rollB = *(EarthView::World::Spatial::Math::CDegree*) rollB_j;
				ev_real64 timeRatio = (ev_real64) timeRatio_j;
				EarthView::World::Spatial::Math::CDegree &yaw = *(EarthView::World::Spatial::Math::CDegree*) yaw_j;
				EarthView::World::Spatial::Math::CDegree &pitch = *(EarthView::World::Spatial::Math::CDegree*) pitch_j;
				EarthView::World::Spatial::Math::CDegree &roll = *(EarthView::World::Spatial::Math::CDegree*) roll_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener::getEuler(yawA, pitchA, rollA, yawB, pitchB, rollB, timeRatio, yaw, pitch, roll);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_setEnabledToGetRadius_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enableGetRadius_j)
			{
				ev_bool enableGetRadius = (ev_bool) enableGetRadius_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				pObjectX->setEnabledToGetRadius(enableGetRadius);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getEnabledToGetRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabledToGetRadius();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_setEnabledToGetHeading_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enableGetHeading_j)
			{
				ev_bool enableGetHeading = (ev_bool) enableGetHeading_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				pObjectX->setEnabledToGetHeading(enableGetHeading);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getEnabledToGetHeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabledToGetHeading();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_setEnabledToGetEuler_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enableGetEuler_j)
			{
				ev_bool enableGetEuler = (ev_bool) enableGetEuler_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				pObjectX->setEnabledToGetEuler(enableGetEuler);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_getEnabledToGetEuler_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack::CSphereNodeAnimationTrackListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabledToGetEuler();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_00024SphereNodeAnimationTrackListener_register_1getInterpolatedKeyFrame_1CAnimationTrack_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackListenerProxy *pObjectX = (JCSphereNodeAnimationTrackListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CAnimationTrack_CTimeIndex_CKeyFrame_callback", "(JJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_createNodeKeyFrame_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::createNodeKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* __values1 = pObjectX->createNodeKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1createNodeKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createNodeKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createNodeKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_createNodeKeyFrame_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CSphereTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::createNodeKeyFrame(timePos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_getAssociatedNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::getAssociatedNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getAssociatedNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1getAssociatedNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAssociatedNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAssociatedNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_getAssociatedNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::getAssociatedNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_setAssociatedNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CNode *ref_node = (EarthView::World::Graphic::CNode*) ref_node_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::setAssociatedNode(ref_node);
				}
				else
				{
					pObjectX->setAssociatedNode(ref_node);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1setAssociatedNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setAssociatedNode_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setAssociatedNode_CNode_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_setAssociatedNode_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_node_j)
			{
				EarthView::World::Graphic::CNode *ref_node = (EarthView::World::Graphic::CNode*) ref_node_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::setAssociatedNode(ref_node);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
				}
				else
				{
					pObjectX->applyToNode(node, timeIndex, weight, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1applyToNode_1CNode_1CTimeIndex_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToNode_CNode_CTimeIndex_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToNode_CNode_CTimeIndex_Real_Real_callback", "(JJDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight);
				}
				else
				{
					pObjectX->applyToNode(node, timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1applyToNode_1CNode_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToNode_CNode_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToNode_CNode_CTimeIndex_Real_callback", "(JJD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_applyToNode_1CNode_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, timeIndex);
				}
				else
				{
					pObjectX->applyToNode(node, timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1applyToNode_1CNode_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToNode_CNode_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToNode_CNode_CTimeIndex_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_applyToNode_1CNode_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j, jlong timeIndex_j)
			{
				EarthView::World::Graphic::CNode *node = (EarthView::World::Graphic::CNode*) node_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::applyToNode(node, timeIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				else
				{
					pObjectX->getInterpolatedKeyFrame(timeIndex, kf);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_apply_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(timeIndex, weight, scale);
				}
				else
				{
					pObjectX->apply(timeIndex, weight, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1apply_1CTimeIndex_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_Real_callback", "(JDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_apply_1CTimeIndex_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_apply_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(timeIndex, weight);
				}
				else
				{
					pObjectX->apply(timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1apply_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_callback", "(JD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_apply_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_apply_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(timeIndex);
				}
				else
				{
					pObjectX->apply(timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1apply_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_apply_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::apply(timeIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack__1keyFrameDataChanged_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::_keyFrameDataChanged();
				}
				else
				{
					pObjectX->_keyFrameDataChanged();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1_1keyFrameDataChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__keyFrameDataChanged_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_keyFrameDataChanged_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack__1keyFrameDataChanged_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::_keyFrameDataChanged();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_getNodeKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::getNodeKeyFrame(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CSphereTransformKeyFrame* __values1 = pObjectX->getNodeKeyFrame(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1getNodeKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNodeKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNodeKeyFrame_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_getNodeKeyFrame_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CSphereTransformKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::getNodeKeyFrame(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack__1clone_1CAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newParent_j)
			{
				EarthView::World::Graphic::CAnimation *newParent = (EarthView::World::Graphic::CAnimation*) newParent_j;
				const 				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CSphereNodeAnimationTrack* __values1 = pObjectX->_clone(newParent);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_setListener_1CAnimationTrackListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *ref_l = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) ref_l_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::setListener(ref_l);
				}
				else
				{
					pObjectX->setListener(ref_l);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1setListener_1CAnimationTrackListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setListener_CAnimationTrackListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setListener_CAnimationTrackListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_setListener_1CAnimationTrackListener_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_l_j)
			{
				EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener *ref_l = (EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener*) ref_l_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::setListener(ref_l);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack__1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::_applyBaseKeyFrame(base);
				}
				else
				{
					pObjectX->_applyBaseKeyFrame(base);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1_1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__applyBaseKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_applyBaseKeyFrame_CKeyFrame_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack__1applyBaseKeyFrame_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_createKeyFrameImpl_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCSphereNodeAnimationTrackProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1createKeyFrameImpl_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrameImpl_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrameImpl_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_createKeyFrameImpl_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CSphereNodeAnimationTrack *pObjectX = (EarthView::World::Graphic::CSphereNodeAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CSphereNodeAnimationTrack::createKeyFrameImpl(time);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1getNumKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumKeyFrames_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1getKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFrame_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback", "(JJJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback", "(JJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1createKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1removeKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeKeyFrame_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1removeAllKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllKeyFrames_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1hasNonZeroKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasNonZeroKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasNonZeroKeyFrames_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1optimise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_optimise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"optimise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1_1collectKeyFrameTimes_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__collectKeyFrameTimes_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_collectKeyFrameTimes_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1_1buildKeyFrameIndexMap_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__buildKeyFrameIndexMap_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_buildKeyFrameIndexMap_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SphereNodeAnimationTrack_register_1populateClone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCSphereNodeAnimationTrackProxy *pObjectX = (JCSphereNodeAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_populateClone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"populateClone_CAnimationTrack_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_VertexAnimationTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					VAT_NONE,
					VAT_MORPH,
					VAT_POSE
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			class JCVertexAnimationTrackProxy : public EarthView::World::Graphic::CVertexAnimationTrack
			{
			 private:
				EarthView::World::Core::ev_string m_createVertexMorphKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_createVertexPoseKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback;
				EarthView::World::Core::ev_string m_applyToVertexData_CVertexData_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_applyToVertexData_CVertexData_CTimeIndex_callback;
				EarthView::World::Core::ev_string m_getNumKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_createKeyFrame_Real_callback;
				EarthView::World::Core::ev_string m_removeKeyFrame_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeAllKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_Real_callback;
				EarthView::World::Core::ev_string m_apply_CTimeIndex_callback;
				EarthView::World::Core::ev_string m__keyFrameDataChanged_void_callback;
				EarthView::World::Core::ev_string m_hasNonZeroKeyFrames_void_callback;
				EarthView::World::Core::ev_string m_optimise_void_callback;
				EarthView::World::Core::ev_string m__collectKeyFrameTimes_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__buildKeyFrameIndexMap_KeyFrameTimes_callback;
				EarthView::World::Core::ev_string m__applyBaseKeyFrame_CKeyFrame_callback;
				EarthView::World::Core::ev_string m_setListener_CAnimationTrackListener_callback;
				EarthView::World::Core::ev_string m_createKeyFrameImpl_Real_callback;
				EarthView::World::Core::ev_string m_populateClone_CAnimationTrack_callback;
			public:
				JCVertexAnimationTrackProxy(EarthView::World::Core::CNameValuePairList *pList) : CVertexAnimationTrack(pList)
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
				void register_createVertexMorphKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexMorphKeyFrame_Real_callback = __method;
				}
				void register_createVertexPoseKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexPoseKeyFrame_Real_callback = __method;
				}
				void register_applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback = __method;
				}
				void register_applyToVertexData_CVertexData_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToVertexData_CVertexData_CTimeIndex_Real_callback = __method;
				}
				void register_applyToVertexData_CVertexData_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_applyToVertexData_CVertexData_CTimeIndex_callback = __method;
				}
				void register_getNumKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumKeyFrames_void_callback = __method;
				}
				void register_getKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback = __method;
				}
				void register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback = __method;
				}
				void register_createKeyFrame_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrame_Real_callback = __method;
				}
				void register_removeKeyFrame_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeKeyFrame_ev_uint16_callback = __method;
				}
				void register_removeAllKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllKeyFrames_void_callback = __method;
				}
				void register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback = __method;
				}
				void register_apply_CTimeIndex_Real_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_Real_callback = __method;
				}
				void register_apply_CTimeIndex_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_Real_callback = __method;
				}
				void register_apply_CTimeIndex_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_apply_CTimeIndex_callback = __method;
				}
				void register__keyFrameDataChanged_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__keyFrameDataChanged_void_callback = __method;
				}
				void register_hasNonZeroKeyFrames_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasNonZeroKeyFrames_void_callback = __method;
				}
				void register_optimise_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_optimise_void_callback = __method;
				}
				void register__collectKeyFrameTimes_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__collectKeyFrameTimes_KeyFrameTimes_callback = __method;
				}
				void register__buildKeyFrameIndexMap_KeyFrameTimes_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback = __method;
				}
				void register__applyBaseKeyFrame_CKeyFrame_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__applyBaseKeyFrame_CKeyFrame_callback = __method;
				}
				void register_setListener_CAnimationTrackListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setListener_CAnimationTrackListener_callback = __method;
				}
				void register_createKeyFrameImpl_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createKeyFrameImpl_Real_callback = __method;
				}
				void register_populateClone_CAnimationTrack_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_populateClone_CAnimationTrack_callback = __method;
				}
				virtual EarthView::World::Graphic::CVertexMorphKeyFrame* createVertexMorphKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createVertexMorphKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createVertexMorphKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexMorphKeyFrame *__values1 = (EarthView::World::Graphic::CVertexMorphKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexAnimationTrack::createVertexMorphKeyFrame(timePos);
					}
				}
				virtual EarthView::World::Graphic::CVertexPoseKeyFrame* createVertexPoseKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createVertexPoseKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createVertexPoseKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexPoseKeyFrame *__values1 = (EarthView::World::Graphic::CVertexPoseKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexAnimationTrack::createVertexPoseKeyFrame(timePos);
					}
				}
				virtual void getInterpolatedKeyFrame(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame* kf) const
				{
					if (this->_gRef != NULL && this->m_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong kf_j = (jlong) kf;
						jmethodID __method = __gr->getMethod("getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, kf_j);
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
						return this->CVertexAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, Real scale)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jdouble scale_j = (jdouble) scale;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j, scale_j);
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
						return this->CVertexAnimationTrack::apply(timeIndex, weight, scale);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j, weight_j);
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
						return this->CVertexAnimationTrack::apply(timeIndex, weight);
					}
				}
				virtual void apply(const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_apply_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("apply_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , timeIndex_j);
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
						return this->CVertexAnimationTrack::apply(timeIndex);
					}
				}
				virtual void applyToVertexData(EarthView::World::Graphic::CVertexData* data, const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight, const EarthView::World::Graphic::PoseList* poseList)
				{
					if (this->_gRef != NULL && this->m_applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback != "" && this->isCustomExtend())
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
						jlong data_j = (jlong) data;
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jlong poseList_j = (jlong) poseList;
						jmethodID __method = __gr->getMethod("applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback");
						__env->CallVoidMethod(__obj, __method , data_j, timeIndex_j, weight_j, poseList_j);
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
						return this->CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight, poseList);
					}
				}
				virtual void applyToVertexData(EarthView::World::Graphic::CVertexData* data, const EarthView::World::Graphic::CTimeIndex& timeIndex, Real weight)
				{
					if (this->_gRef != NULL && this->m_applyToVertexData_CVertexData_CTimeIndex_Real_callback != "" && this->isCustomExtend())
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
						jlong data_j = (jlong) data;
						jlong timeIndex_j = (jlong) &timeIndex;
						jdouble weight_j = (jdouble) weight;
						jmethodID __method = __gr->getMethod("applyToVertexData_CVertexData_CTimeIndex_Real_callback");
						__env->CallVoidMethod(__obj, __method , data_j, timeIndex_j, weight_j);
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
						return this->CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight);
					}
				}
				virtual void applyToVertexData(EarthView::World::Graphic::CVertexData* data, const EarthView::World::Graphic::CTimeIndex& timeIndex)
				{
					if (this->_gRef != NULL && this->m_applyToVertexData_CVertexData_CTimeIndex_callback != "" && this->isCustomExtend())
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
						jlong data_j = (jlong) data;
						jlong timeIndex_j = (jlong) &timeIndex;
						jmethodID __method = __gr->getMethod("applyToVertexData_CVertexData_CTimeIndex_callback");
						__env->CallVoidMethod(__obj, __method , data_j, timeIndex_j);
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
						return this->CVertexAnimationTrack::applyToVertexData(data, timeIndex);
					}
				}
				virtual ev_bool hasNonZeroKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_hasNonZeroKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("hasNonZeroKeyFrames_void_callback");
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
						return this->CVertexAnimationTrack::hasNonZeroKeyFrames();
					}
				}
				virtual void optimise()
				{
					if (this->_gRef != NULL && this->m_optimise_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("optimise_void_callback");
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
						return this->CVertexAnimationTrack::optimise();
					}
				}
				virtual void _applyBaseKeyFrame(const EarthView::World::Graphic::CKeyFrame* base)
				{
					if (this->_gRef != NULL && this->m__applyBaseKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong base_j = (jlong) base;
						jmethodID __method = __gr->getMethod("_applyBaseKeyFrame_CKeyFrame_callback");
						__env->CallVoidMethod(__obj, __method , base_j);
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
						return this->CVertexAnimationTrack::_applyBaseKeyFrame(base);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrameImpl(Real time)
				{
					if (this->_gRef != NULL && this->m_createKeyFrameImpl_Real_callback != "" && this->isCustomExtend())
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
						jdouble time_j = (jdouble) time;
						jmethodID __method = __gr->getMethod("createKeyFrameImpl_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , time_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexAnimationTrack::createKeyFrameImpl(time);
					}
				}
				virtual ev_uint16 getNumKeyFrames() const
				{
					if (this->_gRef != NULL && this->m_getNumKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("getNumKeyFrames_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
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
						return this->CVertexAnimationTrack::getNumKeyFrames();
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* getKeyFrame(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("getKeyFrame_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexAnimationTrack::getKeyFrame(index);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2, ev_uint16* firstKeyIndex) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jlong firstKeyIndex_j = (jlong) firstKeyIndex;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j, firstKeyIndex_j);
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
						return this->CVertexAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2, firstKeyIndex);
					}
				}
				virtual Real getKeyFramesAtTime(const EarthView::World::Graphic::CTimeIndex& timeIndex, EarthView::World::Graphic::CKeyFrame** keyFrame1, EarthView::World::Graphic::CKeyFrame** keyFrame2) const
				{
					if (this->_gRef != NULL && this->m_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback != "" && this->isCustomExtend())
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
						jlong timeIndex_j = (jlong) &timeIndex;
						jlong keyFrame1_j = (jlong) keyFrame1;
						jlong keyFrame2_j = (jlong) keyFrame2;
						jmethodID __method = __gr->getMethod("getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , timeIndex_j, keyFrame1_j, keyFrame2_j);
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
						return this->CVertexAnimationTrack::getKeyFramesAtTime(timeIndex, keyFrame1, keyFrame2);
					}
				}
				virtual EarthView::World::Graphic::CKeyFrame* createKeyFrame(Real timePos)
				{
					if (this->_gRef != NULL && this->m_createKeyFrame_Real_callback != "" && this->isCustomExtend())
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
						jdouble timePos_j = (jdouble) timePos;
						jmethodID __method = __gr->getMethod("createKeyFrame_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , timePos_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CKeyFrame *__values1 = (EarthView::World::Graphic::CKeyFrame*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CVertexAnimationTrack::createKeyFrame(timePos);
					}
				}
				virtual void removeKeyFrame(ev_uint16 index)
				{
					if (this->_gRef != NULL && this->m_removeKeyFrame_ev_uint16_callback != "" && this->isCustomExtend())
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
						jint index_j = (jint) index;
						jmethodID __method = __gr->getMethod("removeKeyFrame_ev_uint16_callback");
						__env->CallVoidMethod(__obj, __method , index_j);
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
						return this->CVertexAnimationTrack::removeKeyFrame(index);
					}
				}
				virtual void removeAllKeyFrames()
				{
					if (this->_gRef != NULL && this->m_removeAllKeyFrames_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("removeAllKeyFrames_void_callback");
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
						return this->CVertexAnimationTrack::removeAllKeyFrames();
					}
				}
				virtual void _keyFrameDataChanged() const
				{
					if (this->_gRef != NULL && this->m__keyFrameDataChanged_void_callback != "" && this->isCustomExtend())
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
						jmethodID __method = __gr->getMethod("_keyFrameDataChanged_void_callback");
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
						return this->CVertexAnimationTrack::_keyFrameDataChanged();
					}
				}
				virtual void _collectKeyFrameTimes(EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__collectKeyFrameTimes_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_collectKeyFrameTimes_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CVertexAnimationTrack::_collectKeyFrameTimes(keyFrameTimes);
					}
				}
				virtual void _buildKeyFrameIndexMap(const EarthView::World::Graphic::CAnimationTrack::KeyFrameTimes& keyFrameTimes)
				{
					if (this->_gRef != NULL && this->m__buildKeyFrameIndexMap_KeyFrameTimes_callback != "" && this->isCustomExtend())
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
						jlong keyFrameTimes_j = (jlong) &keyFrameTimes;
						jmethodID __method = __gr->getMethod("_buildKeyFrameIndexMap_KeyFrameTimes_callback");
						__env->CallVoidMethod(__obj, __method , keyFrameTimes_j);
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
						return this->CVertexAnimationTrack::_buildKeyFrameIndexMap(keyFrameTimes);
					}
				}
				virtual void setListener(EarthView::World::Graphic::CAnimationTrack::CAnimationTrackListener* ref_l)
				{
					if (this->_gRef != NULL && this->m_setListener_CAnimationTrackListener_callback != "" && this->isCustomExtend())
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
						jlong ref_l_j = (jlong) ref_l;
						jmethodID __method = __gr->getMethod("setListener_CAnimationTrackListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_l_j);
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
						return this->CVertexAnimationTrack::setListener(ref_l);
					}
				}
				virtual void populateClone(EarthView::World::Graphic::CAnimationTrack* clone) const
				{
					if (this->_gRef != NULL && this->m_populateClone_CAnimationTrack_callback != "" && this->isCustomExtend())
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
						jlong clone_j = (jlong) clone;
						jmethodID __method = __gr->getMethod("populateClone_CAnimationTrack_callback");
						__env->CallVoidMethod(__obj, __method , clone_j);
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
						return this->CVertexAnimationTrack::populateClone(clone);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCVertexAnimationTrackProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_00024TargetModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CVertexAnimationTrack::TM_SOFTWARE,
					CVertexAnimationTrack::TM_HARDWARE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getAnimationType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::VertexAnimationType __values1 = pObjectX->getAnimationType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getVertexAnimationIncludesNormals_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				ev_bool __values1 = pObjectX->getVertexAnimationIncludesNormals();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_createVertexMorphKeyFrame_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					EarthView::World::Graphic::CVertexMorphKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::createVertexMorphKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexMorphKeyFrame* __values1 = pObjectX->createVertexMorphKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1createVertexMorphKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexMorphKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexMorphKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_createVertexMorphKeyFrame_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CVertexMorphKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::createVertexMorphKeyFrame(timePos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_createVertexPoseKeyFrame_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					EarthView::World::Graphic::CVertexPoseKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::createVertexPoseKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexPoseKeyFrame* __values1 = pObjectX->createVertexPoseKeyFrame(timePos);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1createVertexPoseKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexPoseKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexPoseKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_createVertexPoseKeyFrame_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timePos_j)
			{
				Real timePos = (Real) timePos_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::createVertexPoseKeyFrame(timePos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
				}
				else
				{
					pObjectX->getInterpolatedKeyFrame(timeIndex, kf);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getInterpolatedKeyFrame_CTimeIndex_CKeyFrame_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getInterpolatedKeyFrame_1CTimeIndex_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jlong kf_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CKeyFrame *kf = (EarthView::World::Graphic::CKeyFrame*) kf_j;
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::getInterpolatedKeyFrame(timeIndex, kf);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_apply_1CTimeIndex_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::apply(timeIndex, weight, scale);
				}
				else
				{
					pObjectX->apply(timeIndex, weight, scale);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1apply_1CTimeIndex_1Real_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_Real_callback", "(JDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_apply_1CTimeIndex_1Real_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j, jdouble scale_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				Real scale = (Real) scale_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::apply(timeIndex, weight, scale);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_apply_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::apply(timeIndex, weight);
				}
				else
				{
					pObjectX->apply(timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1apply_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_Real_callback", "(JD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_apply_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j, jdouble weight_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::apply(timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_apply_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::apply(timeIndex);
				}
				else
				{
					pObjectX->apply(timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1apply_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_apply_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"apply_CTimeIndex_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_apply_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong timeIndex_j)
			{
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::apply(timeIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_applyToVertexData_1CVertexData_1CTimeIndex_1Real_1PoseList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong timeIndex_j, jdouble weight_j, jlong poseList_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				const EarthView::World::Graphic::PoseList *poseList = (const EarthView::World::Graphic::PoseList*) poseList_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight, poseList);
				}
				else
				{
					pObjectX->applyToVertexData(data, timeIndex, weight, poseList);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1applyToVertexData_1CVertexData_1CTimeIndex_1Real_1PoseList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToVertexData_CVertexData_CTimeIndex_Real_PoseList_callback", "(JJDJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_applyToVertexData_1CVertexData_1CTimeIndex_1Real_1PoseList_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong timeIndex_j, jdouble weight_j, jlong poseList_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				const EarthView::World::Graphic::PoseList *poseList = (const EarthView::World::Graphic::PoseList*) poseList_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight, poseList);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_applyToVertexData_1CVertexData_1CTimeIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong timeIndex_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight);
				}
				else
				{
					pObjectX->applyToVertexData(data, timeIndex, weight);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1applyToVertexData_1CVertexData_1CTimeIndex_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToVertexData_CVertexData_CTimeIndex_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToVertexData_CVertexData_CTimeIndex_Real_callback", "(JJD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_applyToVertexData_1CVertexData_1CTimeIndex_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong timeIndex_j, jdouble weight_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				Real weight = (Real) weight_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, timeIndex, weight);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_applyToVertexData_1CVertexData_1CTimeIndex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong timeIndex_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, timeIndex);
				}
				else
				{
					pObjectX->applyToVertexData(data, timeIndex);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1applyToVertexData_1CVertexData_1CTimeIndex(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_applyToVertexData_CVertexData_CTimeIndex_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"applyToVertexData_CVertexData_CTimeIndex_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_applyToVertexData_1CVertexData_1CTimeIndex_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jlong timeIndex_j)
			{
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				const EarthView::World::Graphic::CTimeIndex &timeIndex = *(EarthView::World::Graphic::CTimeIndex*) timeIndex_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::applyToVertexData(data, timeIndex);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getVertexMorphKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CVertexMorphKeyFrame* __values1 = pObjectX->getVertexMorphKeyFrame(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getVertexPoseKeyFrame_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CVertexPoseKeyFrame* __values1 = pObjectX->getVertexPoseKeyFrame(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_setAssociatedVertexData_1CVertexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_data_j)
			{
				EarthView::World::Graphic::CVertexData *ref_data = (EarthView::World::Graphic::CVertexData*) ref_data_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->setAssociatedVertexData(ref_data);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getAssociatedVertexData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CVertexData* __values1 = pObjectX->getAssociatedVertexData();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_setTargetMode_1TargetMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint m_j)
			{
				EarthView::World::Graphic::CVertexAnimationTrack::TargetMode m = (EarthView::World::Graphic::CVertexAnimationTrack::TargetMode) m_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->setTargetMode(m);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_getTargetMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack::TargetMode __values1 = pObjectX->getTargetMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_hasNonZeroKeyFrames_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::hasNonZeroKeyFrames();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasNonZeroKeyFrames();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1hasNonZeroKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasNonZeroKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasNonZeroKeyFrames_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_hasNonZeroKeyFrames_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::hasNonZeroKeyFrames();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_optimise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::optimise();
				}
				else
				{
					pObjectX->optimise();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1optimise_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_optimise_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"optimise_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_optimise_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::optimise();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack__1clone_1CAnimation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newParent_j)
			{
				EarthView::World::Graphic::CAnimation *newParent = (EarthView::World::Graphic::CAnimation*) newParent_j;
				const 				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CVertexAnimationTrack* __values1 = pObjectX->_clone(newParent);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack__1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::_applyBaseKeyFrame(base);
				}
				else
				{
					pObjectX->_applyBaseKeyFrame(base);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1_1applyBaseKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__applyBaseKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_applyBaseKeyFrame_CKeyFrame_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack__1applyBaseKeyFrame_1CKeyFrame_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong base_j)
			{
				const EarthView::World::Graphic::CKeyFrame *base = (const EarthView::World::Graphic::CKeyFrame*) base_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::_applyBaseKeyFrame(base);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_createKeyFrameImpl_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCVertexAnimationTrackProxy))
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->createKeyFrameImpl(time);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1createKeyFrameImpl_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrameImpl_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrameImpl_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_createKeyFrameImpl_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				Real time = (Real) time_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				EarthView::World::Graphic::CKeyFrame* __values1 = pObjectX->EarthView::World::Graphic::CVertexAnimationTrack::createKeyFrameImpl(time);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_applyPoseToVertexData_1CPose_1CVertexData_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pose_j, jlong data_j, jdouble influence_j)
			{
				const EarthView::World::Graphic::CPose *pose = (const EarthView::World::Graphic::CPose*) pose_j;
				EarthView::World::Graphic::CVertexData *data = (EarthView::World::Graphic::CVertexData*) data_j;
				Real influence = (Real) influence_j;
				EarthView::World::Graphic::CVertexAnimationTrack *pObjectX = (EarthView::World::Graphic::CVertexAnimationTrack*) pObjXXXX;
				pObjectX->applyPoseToVertexData(pose, data, influence);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1getNumKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumKeyFrames_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1getKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFrame_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_ev_uint16_callback", "(JJJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1getKeyFramesAtTime_1CTimeIndex_1CKeyFrame_1CKeyFrame(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getKeyFramesAtTime_CTimeIndex_CKeyFrame_CKeyFrame_callback", "(JJJ)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1createKeyFrame_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createKeyFrame_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createKeyFrame_Real_callback", "(D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1removeKeyFrame_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeKeyFrame_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeKeyFrame_ev_uint16_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1removeAllKeyFrames_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllKeyFrames_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllKeyFrames_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1_1keyFrameDataChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__keyFrameDataChanged_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_keyFrameDataChanged_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1_1collectKeyFrameTimes_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__collectKeyFrameTimes_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_collectKeyFrameTimes_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1_1buildKeyFrameIndexMap_1KeyFrameTimes(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__buildKeyFrameIndexMap_KeyFrameTimes_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_buildKeyFrameIndexMap_KeyFrameTimes_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1setListener_1CAnimationTrackListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setListener_CAnimationTrackListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setListener_CAnimationTrackListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexAnimationTrack_register_1populateClone_1CAnimationTrack(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCVertexAnimationTrackProxy *pObjectX = (JCVertexAnimationTrackProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_populateClone_CAnimationTrack_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"populateClone_CAnimationTrack_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
