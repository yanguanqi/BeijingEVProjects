/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/controller.h"
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
			class JCControllerFunctionProxy : public EarthView::World::Graphic::CControllerFunction
			{
			 private:
				EarthView::World::Core::ev_string m_calculate_Real_callback;
			public:
				JCControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CControllerFunction(pList)
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
				void register_calculate_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculate_Real_callback = __method;
				}
				virtual Real calculate(Real sourceValue)
				{
					if (this->_gRef != NULL && this->m_calculate_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble sourceValue_j = (jdouble) sourceValue;
						jmethodID __method = __gr->getMethod("calculate_Real_callback");
						jdouble __values1_j = (jdouble)__env->CallDoubleMethod(__obj, __method , sourceValue_j);
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
						return this->CControllerFunction::calculate(sourceValue);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCControllerFunctionProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ControllerFunction_calculate_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble sourceValue_j)
			{
				Real sourceValue = (Real) sourceValue_j;
				EarthView::World::Graphic::CControllerFunction *pObjectX = (EarthView::World::Graphic::CControllerFunction*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCControllerFunctionProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CControllerFunction::calculate(sourceValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->calculate(sourceValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerFunction_register_1calculate_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCControllerFunctionProxy *pObjectX = (JCControllerFunctionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculate_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculate_Real_callback", "(D)D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ControllerFunction_calculate_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble sourceValue_j)
			{
				Real sourceValue = (Real) sourceValue_j;
				EarthView::World::Graphic::CControllerFunction *pObjectX = (EarthView::World::Graphic::CControllerFunction*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CControllerFunction::calculate(sourceValue);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerFunctionRealPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ControllerFunctionRealPtr *pObjectX = (EarthView::World::Graphic::ControllerFunctionRealPtr*) pObjXXXX;
				EarthView::World::Graphic::CControllerFunction* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCControllerValueProxy : public EarthView::World::Graphic::CControllerValue
			{
			 private:
				EarthView::World::Core::ev_string m_getValue_void_callback;
				EarthView::World::Core::ev_string m_setValue_Real_callback;
			public:
				JCControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CControllerValue(pList)
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
				void register_getValue_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getValue_void_callback = __method;
				}
				void register_setValue_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setValue_Real_callback = __method;
				}
				virtual Real getValue() const
				{
					if (this->_gRef != NULL && this->m_getValue_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getValue_void_callback");
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
						return this->CControllerValue::getValue();
					}
				}
				virtual void setValue(Real value)
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
						jdouble value_j = (jdouble) value;
						jmethodID __method = __gr->getMethod("setValue_Real_callback");
						__env->CallVoidMethod(__obj, __method , value_j);
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
						return this->CControllerValue::setValue(value);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCControllerValueProxy);
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ControllerValue_getValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CControllerValue *pObjectX = (EarthView::World::Graphic::CControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCControllerValueProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Graphic::CControllerValue::getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getValue();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerValue_register_1getValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCControllerValueProxy *pObjectX = (JCControllerValueProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getValue_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getValue_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_ControllerValue_getValue_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CControllerValue *pObjectX = (EarthView::World::Graphic::CControllerValue*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Graphic::CControllerValue::getValue();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerValue_setValue_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CControllerValue *pObjectX = (EarthView::World::Graphic::CControllerValue*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCControllerValueProxy))
				{
					pObjectX->EarthView::World::Graphic::CControllerValue::setValue(value);
				}
				else
				{
					pObjectX->setValue(value);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerValue_register_1setValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCControllerValueProxy *pObjectX = (JCControllerValueProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ControllerValue_setValue_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				EarthView::World::Graphic::CControllerValue *pObjectX = (EarthView::World::Graphic::CControllerValue*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CControllerValue::setValue(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ControllerValueRealPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::ControllerValueRealPtr *pObjectX = (EarthView::World::Graphic::ControllerValueRealPtr*) pObjXXXX;
				EarthView::World::Graphic::CControllerValue* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Controller_setSource_1ControllerValueRealPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong src_j)
			{
				const EarthView::World::Graphic::ControllerValueRealPtr &src = *(EarthView::World::Graphic::ControllerValueRealPtr*) src_j;
				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				pObjectX->setSource(src);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Controller_getSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				const EarthView::World::Graphic::ControllerValueRealPtr& __values1 = pObjectX->getSource();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Controller_setDestination_1ControllerValueRealPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dest_j)
			{
				const EarthView::World::Graphic::ControllerValueRealPtr &dest = *(EarthView::World::Graphic::ControllerValueRealPtr*) dest_j;
				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				pObjectX->setDestination(dest);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Controller_getDestination_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				const EarthView::World::Graphic::ControllerValueRealPtr& __values1 = pObjectX->getDestination();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Controller_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Controller_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				pObjectX->setEnabled(enabled);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Controller_setFunction_1ControllerFunctionRealPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong func_j)
			{
				const EarthView::World::Graphic::ControllerFunctionRealPtr &func = *(EarthView::World::Graphic::ControllerFunctionRealPtr*) func_j;
				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				pObjectX->setFunction(func);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Controller_getFunction_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				const EarthView::World::Graphic::ControllerFunctionRealPtr& __values1 = pObjectX->getFunction();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Controller_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CController *pObjectX = (EarthView::World::Graphic::CController*) pObjXXXX;
				pObjectX->update();
			}
		}
	}
}
