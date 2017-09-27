/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/datapath.h"
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
			class JCDataPathProxy : public EarthView::World::Display::CDataPath
			{
			 private:
				EarthView::World::Core::ev_string m_addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_addPathCircle_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback;
				EarthView::World::Core::ev_string m_closePath_void_callback;
				EarthView::World::Core::ev_string m_clearPath_void_callback;
				EarthView::World::Core::ev_string m_setRotateAngle_ev_real64_callback;
				EarthView::World::Core::ev_string m_getRotateAngle_void_callback;
			public:
				JCDataPathProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataPath(pList)
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
				void register_addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_addPathCircle_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPathCircle_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback = __method;
				}
				void register_closePath_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_closePath_void_callback = __method;
				}
				void register_clearPath_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_clearPath_void_callback = __method;
				}
				void register_setRotateAngle_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setRotateAngle_ev_real64_callback = __method;
				}
				void register_getRotateAngle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRotateAngle_void_callback = __method;
				}
				virtual void addPathLine(ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2)
				{
					if (this->_gRef != NULL && this->m_addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x1_j = (jdouble) x1;
						jdouble y1_j = (jdouble) y1;
						jdouble x2_j = (jdouble) x2;
						jdouble y2_j = (jdouble) y2;
						jmethodID __method = __gr->getMethod("addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x1_j, y1_j, x2_j, y2_j);
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
						return this->CDataPath::addPathLine(x1, y1, x2, y2);
					}
				}
				virtual void addPathArc(ev_real64 x, ev_real64 y, ev_real64 majorAxe, ev_real64 minorAxe, ev_real64 startAngle, ev_real64 sweepAngle)
				{
					if (this->_gRef != NULL && this->m_addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jdouble majorAxe_j = (jdouble) majorAxe;
						jdouble minorAxe_j = (jdouble) minorAxe;
						jdouble startAngle_j = (jdouble) startAngle;
						jdouble sweepAngle_j = (jdouble) sweepAngle;
						jmethodID __method = __gr->getMethod("addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, majorAxe_j, minorAxe_j, startAngle_j, sweepAngle_j);
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
						return this->CDataPath::addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					}
				}
				virtual void addPathPie(ev_real64 x, ev_real64 y, ev_real64 majorAxe, ev_real64 minorAxe, ev_real64 startAngle, ev_real64 sweepAngle)
				{
					if (this->_gRef != NULL && this->m_addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jdouble majorAxe_j = (jdouble) majorAxe;
						jdouble minorAxe_j = (jdouble) minorAxe;
						jdouble startAngle_j = (jdouble) startAngle;
						jdouble sweepAngle_j = (jdouble) sweepAngle;
						jmethodID __method = __gr->getMethod("addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, majorAxe_j, minorAxe_j, startAngle_j, sweepAngle_j);
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
						return this->CDataPath::addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
					}
				}
				virtual void addPathEllipse(ev_real64 x, ev_real64 y, ev_real64 majorAxe, ev_real64 minorAxe)
				{
					if (this->_gRef != NULL && this->m_addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jdouble majorAxe_j = (jdouble) majorAxe;
						jdouble minorAxe_j = (jdouble) minorAxe;
						jmethodID __method = __gr->getMethod("addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, majorAxe_j, minorAxe_j);
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
						return this->CDataPath::addPathEllipse(x, y, majorAxe, minorAxe);
					}
				}
				virtual void addPathCircle(ev_real64 x, ev_real64 y, ev_real64 radius)
				{
					if (this->_gRef != NULL && this->m_addPathCircle_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jdouble radius_j = (jdouble) radius;
						jmethodID __method = __gr->getMethod("addPathCircle_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, radius_j);
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
						return this->CDataPath::addPathCircle(x, y, radius);
					}
				}
				virtual void addPathBezier(ev_real64 x1, ev_real64 y1, ev_real64 x2, ev_real64 y2, ev_real64 x3, ev_real64 y3, ev_real64 x4, ev_real64 y4)
				{
					if (this->_gRef != NULL && this->m_addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble x1_j = (jdouble) x1;
						jdouble y1_j = (jdouble) y1;
						jdouble x2_j = (jdouble) x2;
						jdouble y2_j = (jdouble) y2;
						jdouble x3_j = (jdouble) x3;
						jdouble y3_j = (jdouble) y3;
						jdouble x4_j = (jdouble) x4;
						jdouble y4_j = (jdouble) y4;
						jmethodID __method = __gr->getMethod("addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x1_j, y1_j, x2_j, y2_j, x3_j, y3_j, x4_j, y4_j);
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
						return this->CDataPath::addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
					}
				}
				virtual void getBound(ev_real64& x, ev_real64& y, ev_real64& width, ev_real64& height) const
				{
					if (this->_gRef != NULL && this->m_getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong x_j = (jlong) &x;
						jlong y_j = (jlong) &y;
						jlong width_j = (jlong) &width;
						jlong height_j = (jlong) &height;
						jmethodID __method = __gr->getMethod("getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , x_j, y_j, width_j, height_j);
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
						return this->CDataPath::getBound(x, y, width, height);
					}
				}
				virtual ev_bool closePath() const
				{
					if (this->_gRef != NULL && this->m_closePath_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("closePath_void_callback");
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
						return this->CDataPath::closePath();
					}
				}
				virtual ev_bool clearPath()
				{
					if (this->_gRef != NULL && this->m_clearPath_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("clearPath_void_callback");
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
						return this->CDataPath::clearPath();
					}
				}
				virtual void setRotateAngle(const ev_real64 rotateAngle)
				{
					if (this->_gRef != NULL && this->m_setRotateAngle_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble rotateAngle_j = (jdouble) rotateAngle;
						jmethodID __method = __gr->getMethod("setRotateAngle_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , rotateAngle_j);
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
						return this->CDataPath::setRotateAngle(rotateAngle);
					}
				}
				virtual ev_real64 getRotateAngle() const
				{
					if (this->_gRef != NULL && this->m_getRotateAngle_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getRotateAngle_void_callback");
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
						return this->CDataPath::getRotateAngle();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCDataPathProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathLine_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j)
			{
				ev_real64 x1 = (ev_real64) x1_j;
				ev_real64 y1 = (ev_real64) y1_j;
				ev_real64 x2 = (ev_real64) x2_j;
				ev_real64 y2 = (ev_real64) y2_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::addPathLine(x1, y1, x2, y2);
				}
				else
				{
					pObjectX->addPathLine(x1, y1, x2, y2);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1addPathLine_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPathLine_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathLine_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j)
			{
				ev_real64 x1 = (ev_real64) x1_j;
				ev_real64 y1 = (ev_real64) y1_j;
				ev_real64 x2 = (ev_real64) x2_j;
				ev_real64 y2 = (ev_real64) y2_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::addPathLine(x1, y1, x2, y2);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathArc_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble majorAxe_j, jdouble minorAxe_j, jdouble startAngle_j, jdouble sweepAngle_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 majorAxe = (ev_real64) majorAxe_j;
				ev_real64 minorAxe = (ev_real64) minorAxe_j;
				ev_real64 startAngle = (ev_real64) startAngle_j;
				ev_real64 sweepAngle = (ev_real64) sweepAngle_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				}
				else
				{
					pObjectX->addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1addPathArc_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPathArc_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathArc_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble majorAxe_j, jdouble minorAxe_j, jdouble startAngle_j, jdouble sweepAngle_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 majorAxe = (ev_real64) majorAxe_j;
				ev_real64 minorAxe = (ev_real64) minorAxe_j;
				ev_real64 startAngle = (ev_real64) startAngle_j;
				ev_real64 sweepAngle = (ev_real64) sweepAngle_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::addPathArc(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathPie_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble majorAxe_j, jdouble minorAxe_j, jdouble startAngle_j, jdouble sweepAngle_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 majorAxe = (ev_real64) majorAxe_j;
				ev_real64 minorAxe = (ev_real64) minorAxe_j;
				ev_real64 startAngle = (ev_real64) startAngle_j;
				ev_real64 sweepAngle = (ev_real64) sweepAngle_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				}
				else
				{
					pObjectX->addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1addPathPie_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPathPie_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathPie_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble majorAxe_j, jdouble minorAxe_j, jdouble startAngle_j, jdouble sweepAngle_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 majorAxe = (ev_real64) majorAxe_j;
				ev_real64 minorAxe = (ev_real64) minorAxe_j;
				ev_real64 startAngle = (ev_real64) startAngle_j;
				ev_real64 sweepAngle = (ev_real64) sweepAngle_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::addPathPie(x, y, majorAxe, minorAxe, startAngle, sweepAngle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathEllipse_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble majorAxe_j, jdouble minorAxe_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 majorAxe = (ev_real64) majorAxe_j;
				ev_real64 minorAxe = (ev_real64) minorAxe_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::addPathEllipse(x, y, majorAxe, minorAxe);
				}
				else
				{
					pObjectX->addPathEllipse(x, y, majorAxe, minorAxe);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1addPathEllipse_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPathEllipse_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathEllipse_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble majorAxe_j, jdouble minorAxe_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 majorAxe = (ev_real64) majorAxe_j;
				ev_real64 minorAxe = (ev_real64) minorAxe_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::addPathEllipse(x, y, majorAxe, minorAxe);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathCircle_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble radius_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 radius = (ev_real64) radius_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::addPathCircle(x, y, radius);
				}
				else
				{
					pObjectX->addPathCircle(x, y, radius);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1addPathCircle_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPathCircle_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPathCircle_ev_real64_ev_real64_ev_real64_callback", "(DDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathCircle_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble radius_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 radius = (ev_real64) radius_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::addPathCircle(x, y, radius);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathBezier_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j, jdouble x3_j, jdouble y3_j, jdouble x4_j, jdouble y4_j)
			{
				ev_real64 x1 = (ev_real64) x1_j;
				ev_real64 y1 = (ev_real64) y1_j;
				ev_real64 x2 = (ev_real64) x2_j;
				ev_real64 y2 = (ev_real64) y2_j;
				ev_real64 x3 = (ev_real64) x3_j;
				ev_real64 y3 = (ev_real64) y3_j;
				ev_real64 x4 = (ev_real64) x4_j;
				ev_real64 y4 = (ev_real64) y4_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
				}
				else
				{
					pObjectX->addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1addPathBezier_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addPathBezier_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(DDDDDDDD)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addPathBezier_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j, jdouble x3_j, jdouble y3_j, jdouble x4_j, jdouble y4_j)
			{
				ev_real64 x1 = (ev_real64) x1_j;
				ev_real64 y1 = (ev_real64) y1_j;
				ev_real64 x2 = (ev_real64) x2_j;
				ev_real64 y2 = (ev_real64) y2_j;
				ev_real64 x3 = (ev_real64) x3_j;
				ev_real64 y3 = (ev_real64) y3_j;
				ev_real64 x4 = (ev_real64) x4_j;
				ev_real64 y4 = (ev_real64) y4_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::addPathBezier(x1, y1, x2, y2, x3, y3, x4, y4);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_addRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->addRect(x, y, w, h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_getBound_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong width_j, jlong height_j)
			{
				ev_real64 &x = *(ev_real64*) x_j;
				ev_real64 &y = *(ev_real64*) y_j;
				ev_real64 &width = *(ev_real64*) width_j;
				ev_real64 &height = *(ev_real64*) height_j;
				const 				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::getBound(x, y, width, height);
				}
				else
				{
					pObjectX->getBound(x, y, width, height);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1getBound_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getBound_ev_real64_ev_real64_ev_real64_ev_real64_callback", "(JJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_getBound_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong width_j, jlong height_j)
			{
				ev_real64 &x = *(ev_real64*) x_j;
				ev_real64 &y = *(ev_real64*) y_j;
				ev_real64 &width = *(ev_real64*) width_j;
				ev_real64 &height = *(ev_real64*) height_j;
				const 				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::getBound(x, y, width, height);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_DataPath_closePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::CDataPath::closePath();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->closePath();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1closePath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_closePath_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"closePath_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_DataPath_closePath_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::CDataPath::closePath();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_DataPath_clearPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Display::CDataPath::clearPath();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->clearPath();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1clearPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_clearPath_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"clearPath_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_DataPath_clearPath_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Display::CDataPath::clearPath();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_setRotateAngle_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble rotateAngle_j)
			{
				const ev_real64 rotateAngle = (ev_real64) rotateAngle_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					pObjectX->EarthView::World::Display::CDataPath::setRotateAngle(rotateAngle);
				}
				else
				{
					pObjectX->setRotateAngle(rotateAngle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1setRotateAngle_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setRotateAngle_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setRotateAngle_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_setRotateAngle_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble rotateAngle_j)
			{
				const ev_real64 rotateAngle = (ev_real64) rotateAngle_j;
				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				pObjectX->EarthView::World::Display::CDataPath::setRotateAngle(rotateAngle);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_DataPath_getRotateAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCDataPathProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::World::Display::CDataPath::getRotateAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getRotateAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataPath_register_1getRotateAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCDataPathProxy *pObjectX = (JCDataPathProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRotateAngle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRotateAngle_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_DataPath_getRotateAngle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::World::Display::CDataPath::getRotateAngle();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_DataPath_getNativePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CDataPath *pObjectX = (EarthView::World::Display::CDataPath*) pObjXXXX;
				void* __values1 = pObjectX->getNativePath();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_EVCombineModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CM_Replace,
					CM_Intersect,
					CM_ModeUnion,
					CM_Xor,
					CM_Exclude,
					CM_Complement
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataRegion_addRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1EVCombineMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j, jint mode_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::EVCombineMode mode = (EarthView::World::Display::EVCombineMode) mode_j;
				EarthView::World::Display::CDataRegion *pObjectX = (EarthView::World::Display::CDataRegion*) pObjXXXX;
				pObjectX->addRect(x, y, w, h, mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataRegion_addPath_1CDataPath_1EVCombineMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong path_j, jint mode_j)
			{
				EarthView::World::Display::CDataPath *path = (EarthView::World::Display::CDataPath*) path_j;
				EarthView::World::Display::EVCombineMode mode = (EarthView::World::Display::EVCombineMode) mode_j;
				EarthView::World::Display::CDataRegion *pObjectX = (EarthView::World::Display::CDataRegion*) pObjXXXX;
				pObjectX->addPath(path, mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataRegion_addRegion_1CDataRegion_1EVCombineMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong region_j, jint mode_j)
			{
				EarthView::World::Display::CDataRegion *region = (EarthView::World::Display::CDataRegion*) region_j;
				EarthView::World::Display::EVCombineMode mode = (EarthView::World::Display::EVCombineMode) mode_j;
				EarthView::World::Display::CDataRegion *pObjectX = (EarthView::World::Display::CDataRegion*) pObjXXXX;
				pObjectX->addRegion(region, mode);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_DataRegion_makeEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CDataRegion *pObjectX = (EarthView::World::Display::CDataRegion*) pObjXXXX;
				pObjectX->makeEmpty();
			}
		}
	}
}
