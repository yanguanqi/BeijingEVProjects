/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/printer.h"
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
			class JCPrinterProxy : public EarthView::World::Display::CPrinter
			{
			 private:
				EarthView::World::Core::ev_string m_getDC_void_callback;
				EarthView::World::Core::ev_string m_releaseDC_void_callback;
				EarthView::World::Core::ev_string m_getWidth_void_callback;
				EarthView::World::Core::ev_string m_getHeight_void_callback;
				EarthView::World::Core::ev_string m_fill_IColor_callback;
				EarthView::World::Core::ev_string m_fill_ev_int32_callback;
				EarthView::World::Core::ev_string m_getResolution_void_callback;
			public:
				JCPrinterProxy(EarthView::World::Core::CNameValuePairList *pList) : CPrinter(pList)
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
				void register_getDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDC_void_callback = __method;
				}
				void register_releaseDC_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releaseDC_void_callback = __method;
				}
				void register_getWidth_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getWidth_void_callback = __method;
				}
				void register_getHeight_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHeight_void_callback = __method;
				}
				void register_fill_IColor_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fill_IColor_callback = __method;
				}
				void register_fill_ev_int32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_fill_ev_int32_callback = __method;
				}
				void register_getResolution_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getResolution_void_callback = __method;
				}
				virtual ev_int64 getDC()
				{
					if (this->_gRef != NULL && this->m_getDC_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDC_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int64 __values1 = (ev_int64) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrinter::getDC();
					}
				}
				virtual void releaseDC()
				{
					if (this->_gRef != NULL && this->m_releaseDC_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("releaseDC_void_callback");
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
						return this->CPrinter::releaseDC();
					}
				}
				virtual ev_int32 getWidth() const
				{
					if (this->_gRef != NULL && this->m_getWidth_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getWidth_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrinter::getWidth();
					}
				}
				virtual ev_int32 getHeight() const
				{
					if (this->_gRef != NULL && this->m_getHeight_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getHeight_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrinter::getHeight();
					}
				}
				virtual void fill(const EarthView::World::Spatial::Display::IColor* color)
				{
					if (this->_gRef != NULL && this->m_fill_IColor_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong color_j = (jlong) color;
						jmethodID __method = __gr->getMethod("fill_IColor_callback");
						__env->CallVoidMethod(__obj, __method , color_j);
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
						return this->CPrinter::fill(color);
					}
				}
				virtual void fill(ev_int32 color)
				{
					if (this->_gRef != NULL && this->m_fill_ev_int32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint color_j = (jint) color;
						jmethodID __method = __gr->getMethod("fill_ev_int32_callback");
						__env->CallVoidMethod(__obj, __method , color_j);
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
						return this->CPrinter::fill(color);
					}
				}
				virtual ev_int32 getResolution() const
				{
					if (this->_gRef != NULL && this->m_getResolution_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getResolution_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_int32 __values1 = (ev_int32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CPrinter::getResolution();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCPrinterProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVPrinterModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::PM_ScreenResolution,
					CPrinter::PM_PrinterResolution,
					CPrinter::PM_HighResolution
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVPageOrderHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::PO_FirstPageFirst,
					CPrinter::PO_LastPageFirst
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVColorModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::CM_GrayScale,
					CPrinter::CM_Color
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVPaperSourceHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::PS_OnlyOne,
					CPrinter::PS_Lower,
					CPrinter::PS_Middle,
					CPrinter::PS_Manual,
					CPrinter::PS_Envelope,
					CPrinter::PS_EnvelopeManual,
					CPrinter::PS_Auto,
					CPrinter::PS_Tractor,
					CPrinter::PS_SmallFormat,
					CPrinter::PS_LargeFormat,
					CPrinter::PS_LargeCapacity,
					CPrinter::PS_Cassette,
					CPrinter::PS_FormSource
				};
				jintArray array = __env->NewIntArray(13);
				__env->SetIntArrayRegion(array, 0, 13, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVPrinterStateHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::PS_Idle,
					CPrinter::PS_Active,
					CPrinter::PS_Aborted,
					CPrinter::PS_Error
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVOutputFormatHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::OF_NativeFormat,
					CPrinter::OF_PdfFormat,
					CPrinter::OF_PostScriptFormat
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVPrintUnitHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::PU_Millimeter,
					CPrinter::PU_Point,
					CPrinter::PU_Inch,
					CPrinter::PU_Pica,
					CPrinter::PU_Didot,
					CPrinter::PU_Cicero,
					CPrinter::PU_DevicePixel
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVDuplexModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::DM_DuplexNone,
					CPrinter::_DuplexAuto,
					CPrinter::_DuplexLongSide,
					CPrinter::_DuplexShortSide
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVPrinterOptionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::PO_PrintToFile,
					CPrinter::PO_PrintSelection,
					CPrinter::PO_PrintPageRange
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_display_Printer_00024EVPrintDeviceMetricHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPrinter::PdmWidth,
					CPrinter::PdmHeight,
					CPrinter::PdmWidthMM,
					CPrinter::PdmHeightMM,
					CPrinter::PdmNumColors,
					CPrinter::PdmDepth,
					CPrinter::PdmDpiX,
					CPrinter::PdmDpiY,
					CPrinter::PdmPhysicalDpiX,
					CPrinter::PdmPhysicalDpiY
				};
				jintArray array = __env->NewIntArray(10);
				__env->SetIntArrayRegion(array, 0, 10, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_getDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrinterProxy))
				{
					ev_int64 __values1 = pObjectX->EarthView::World::Display::CPrinter::getDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
				else
				{
					ev_int64 __values1 = pObjectX->getDC();
					jlong __values1_j = (jlong)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_register_1getDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrinterProxy *pObjectX = (JCPrinterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDC_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_getDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_int64 __values1 = pObjectX->EarthView::World::Display::CPrinter::getDC();
				jlong __values1_j = (jlong)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_releaseDC_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrinterProxy))
				{
					pObjectX->EarthView::World::Display::CPrinter::releaseDC();
				}
				else
				{
					pObjectX->releaseDC();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_register_1releaseDC_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrinterProxy *pObjectX = (JCPrinterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releaseDC_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releaseDC_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_releaseDC_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrinter::releaseDC();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrinterProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrinter::getWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_register_1getWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrinterProxy *pObjectX = (JCPrinterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getWidth_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getWidth_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getWidth_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrinter::getWidth();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrinterProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrinter::getHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_register_1getHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrinterProxy *pObjectX = (JCPrinterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHeight_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHeight_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getHeight_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrinter::getHeight();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_fill_1IColor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrinterProxy))
				{
					pObjectX->EarthView::World::Display::CPrinter::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_register_1fill_1IColor(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrinterProxy *pObjectX = (JCPrinterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fill_IColor_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fill_IColor_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_fill_1IColor_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong color_j)
			{
				const EarthView::World::Spatial::Display::IColor *color = (const EarthView::World::Spatial::Display::IColor*) color_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrinter::fill(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_fill_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrinterProxy))
				{
					pObjectX->EarthView::World::Display::CPrinter::fill(color);
				}
				else
				{
					pObjectX->fill(color);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_register_1fill_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrinterProxy *pObjectX = (JCPrinterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_fill_ev_int32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"fill_ev_int32_callback", "(I)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_fill_1ev_1int32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint color_j)
			{
				ev_int32 color = (ev_int32) color_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->EarthView::World::Display::CPrinter::fill(color);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setResolution_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint resolution_j)
			{
				ev_int32 resolution = (ev_int32) resolution_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setResolution(resolution);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getResolution_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCPrinterProxy))
				{
					ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrinter::getResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				else
				{
					ev_int32 __values1 = pObjectX->getResolution();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_register_1getResolution_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCPrinterProxy *pObjectX = (JCPrinterProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getResolution_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getResolution_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getResolution_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->EarthView::World::Display::CPrinter::getResolution();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setPrinterName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setPrinterName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_Printer_getPrinterName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EVString __values1 = pObjectX->getPrinterName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Printer_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setDocName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setDocName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_Printer_getDocName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EVString __values1 = pObjectX->getDocName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setOrientation_1EVPageOrientation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint orientation_j)
			{
				EarthView::World::Spatial::Carto::EVPageOrientation orientation = (EarthView::World::Spatial::Carto::EVPageOrientation) orientation_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setOrientation(orientation);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getOrientation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Spatial::Carto::EVPageOrientation __values1 = pObjectX->getOrientation();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setPageSize_1EVPageSize(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint size_j)
			{
				EarthView::World::Spatial::Carto::EVPageSize size = (EarthView::World::Spatial::Carto::EVPageSize) size_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setPageSize(size);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getPageSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Spatial::Carto::EVPageSize __values1 = pObjectX->getPageSize();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setPageSize_1CPageSize_1EVPrintUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong paperSize_j, jint unit_j)
			{
				const EarthView::World::Display::CPageSize &paperSize = *(EarthView::World::Display::CPageSize*) paperSize_j;
				EarthView::World::Display::CPrinter::EVPrintUnit unit = (EarthView::World::Display::CPrinter::EVPrintUnit) unit_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setPageSize(paperSize, unit);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_getPageSize_1EVPrintUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint unit_j)
			{
				EarthView::World::Display::CPrinter::EVPrintUnit unit = (EarthView::World::Display::CPrinter::EVPrintUnit) unit_j;
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPageSize __values1 = pObjectX->getPageSize(unit);
				EarthView::World::Display::CPageSize *returnvalues = new EarthView::World::Display::CPageSize(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setPageOrder_1EVPageOrder(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint order_j)
			{
				EarthView::World::Display::CPrinter::EVPageOrder order = (EarthView::World::Display::CPrinter::EVPageOrder) order_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setPageOrder(order);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getPageOrder_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVPageOrder __values1 = pObjectX->getPageOrder();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setPrinterMode_1EVPrinterMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::CPrinter::EVPrinterMode mode = (EarthView::World::Display::CPrinter::EVPrinterMode) mode_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setPrinterMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getPrinterMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVPrinterMode __values1 = pObjectX->getPrinterMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setColorMode_1EVColorMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mode_j)
			{
				EarthView::World::Display::CPrinter::EVColorMode mode = (EarthView::World::Display::CPrinter::EVColorMode) mode_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setColorMode(mode);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getColorMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVColorMode __values1 = pObjectX->getColorMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setCopyCount_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j)
			{
				int count = (int) count_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setCopyCount(count);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getCopyCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				int __values1 = pObjectX->getCopyCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Printer_isSupportsMultipleCopies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				bool __values1 = pObjectX->isSupportsMultipleCopies();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setPaperSource_1EVPaperSource(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint soure_j)
			{
				EarthView::World::Display::CPrinter::EVPaperSource soure = (EarthView::World::Display::CPrinter::EVPaperSource) soure_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setPaperSource(soure);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getPaperSource_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVPaperSource __values1 = pObjectX->getPaperSource();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_getPageRect_1EVPrintUnit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint unit_j)
			{
				EarthView::World::Display::CPrinter::EVPrintUnit unit = (EarthView::World::Display::CPrinter::EVPrintUnit) unit_j;
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPageRect __values1 = pObjectX->getPageRect(unit);
				EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_getPageRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPageRect __values1 = pObjectX->getPageRect();
				EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Printer_newPage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				bool __values1 = pObjectX->newPage();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getPrinterState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVPrinterState __values1 = pObjectX->getPrinterState();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_getPrintEngine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPrintEngine* __values1 = pObjectX->getPrintEngine();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_getNativeGraphics_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				void* __values1 = pObjectX->getNativeGraphics();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Printer_startPrint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_bool __values1 = pObjectX->startPrint();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Printer_endPrint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_bool __values1 = pObjectX->endPrint();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setOutputFormat_1EVOutputFormat(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint format_j)
			{
				EarthView::World::Display::CPrinter::EVOutputFormat format = (EarthView::World::Display::CPrinter::EVOutputFormat) format_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setOutputFormat(format);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_getOutputFormat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Display::CPrinter::EVOutputFormat __values1 = pObjectX->getOutputFormat();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Printer_abort_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				bool __values1 = pObjectX->abort();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setCollateCopies_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean collate_j)
			{
				bool collate = (bool) collate_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setCollateCopies(collate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_Printer_isCollateCopies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				bool __values1 = pObjectX->isCollateCopies();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_setOutputFileName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->setOutputFileName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_display_Printer_getOutputFileName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EVString __values1 = pObjectX->getOutputFileName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_display_Printer_setPrinterProperty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				ev_int32 __values1 = pObjectX->setPrinterProperty();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_Printer_fromXmlElement_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong element_j)
			{
				EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				pObjectX->fromXmlElement(element);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_Printer_toXmlElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPrinter *pObjectX = (EarthView::World::Display::CPrinter*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->toXmlElement();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
