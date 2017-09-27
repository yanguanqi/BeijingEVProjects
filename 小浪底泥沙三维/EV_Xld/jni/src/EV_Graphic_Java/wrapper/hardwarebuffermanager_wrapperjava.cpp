/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/hardwarebuffermanager.h"
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
			class JCHardwareBufferLicenseeProxy : public EarthView::World::Graphic::CHardwareBufferLicensee
			{
			 private:
				EarthView::World::Core::ev_string m_licenseExpired_CHardwareBuffer_callback;
			public:
				JCHardwareBufferLicenseeProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBufferLicensee(pList)
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
				void register_licenseExpired_CHardwareBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_licenseExpired_CHardwareBuffer_callback = __method;
				}
				virtual void licenseExpired(EarthView::World::Graphic::CHardwareBuffer* buffer)
				{
					if (this->_gRef != NULL && this->m_licenseExpired_CHardwareBuffer_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong buffer_j = (jlong) buffer;
						jmethodID __method = __gr->getMethod("licenseExpired_CHardwareBuffer_callback");
						__env->CallVoidMethod(__obj, __method , buffer_j);
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
						return this->CHardwareBufferLicensee::licenseExpired(buffer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHardwareBufferLicenseeProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferLicensee_licenseExpired_1CHardwareBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer *buffer = (EarthView::World::Graphic::CHardwareBuffer*) buffer_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *pObjectX = (EarthView::World::Graphic::CHardwareBufferLicensee*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferLicenseeProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferLicensee::licenseExpired(buffer);
				}
				else
				{
					pObjectX->licenseExpired(buffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferLicensee_register_1licenseExpired_1CHardwareBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferLicenseeProxy *pObjectX = (JCHardwareBufferLicenseeProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_licenseExpired_CHardwareBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"licenseExpired_CHardwareBuffer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferLicensee_licenseExpired_1CHardwareBuffer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer *buffer = (EarthView::World::Graphic::CHardwareBuffer*) buffer_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *pObjectX = (EarthView::World::Graphic::CHardwareBufferLicensee*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferLicensee::licenseExpired(buffer);
			}
			class JCTempBlendedBufferInfoProxy : public EarthView::World::Graphic::CTempBlendedBufferInfo
			{
			 private:
				EarthView::World::Core::ev_string m_licenseExpired_CHardwareBuffer_callback;
			public:
				JCTempBlendedBufferInfoProxy(EarthView::World::Core::CNameValuePairList *pList) : CTempBlendedBufferInfo(pList)
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
				void register_licenseExpired_CHardwareBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_licenseExpired_CHardwareBuffer_callback = __method;
				}
				virtual void licenseExpired(EarthView::World::Graphic::CHardwareBuffer* buffer)
				{
					if (this->_gRef != NULL && this->m_licenseExpired_CHardwareBuffer_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong buffer_j = (jlong) buffer;
						jmethodID __method = __gr->getMethod("licenseExpired_CHardwareBuffer_callback");
						__env->CallVoidMethod(__obj, __method , buffer_j);
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
						return this->CTempBlendedBufferInfo::licenseExpired(buffer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCTempBlendedBufferInfoProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_extractFrom_1CVertexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceData_j)
			{
				const EarthView::World::Graphic::CVertexData *sourceData = (const EarthView::World::Graphic::CVertexData*) sourceData_j;
				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				pObjectX->extractFrom(sourceData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_checkoutTempCopies_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean positions_j, jboolean normals_j)
			{
				ev_bool positions = (ev_bool) positions_j;
				ev_bool normals = (ev_bool) normals_j;
				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				pObjectX->checkoutTempCopies(positions, normals);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_checkoutTempCopies_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean positions_j)
			{
				ev_bool positions = (ev_bool) positions_j;
				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				pObjectX->checkoutTempCopies(positions);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_checkoutTempCopies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				pObjectX->checkoutTempCopies();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_bindTempCopies_1CVertexData_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong targetData_j, jboolean suppressHardwareUpload_j)
			{
				EarthView::World::Graphic::CVertexData *targetData = (EarthView::World::Graphic::CVertexData*) targetData_j;
				ev_bool suppressHardwareUpload = (ev_bool) suppressHardwareUpload_j;
				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				pObjectX->bindTempCopies(targetData, suppressHardwareUpload);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_licenseExpired_1CHardwareBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer *buffer = (EarthView::World::Graphic::CHardwareBuffer*) buffer_j;
				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCTempBlendedBufferInfoProxy))
				{
					pObjectX->EarthView::World::Graphic::CTempBlendedBufferInfo::licenseExpired(buffer);
				}
				else
				{
					pObjectX->licenseExpired(buffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_register_1licenseExpired_1CHardwareBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCTempBlendedBufferInfoProxy *pObjectX = (JCTempBlendedBufferInfoProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_licenseExpired_CHardwareBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"licenseExpired_CHardwareBuffer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_licenseExpired_1CHardwareBuffer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer *buffer = (EarthView::World::Graphic::CHardwareBuffer*) buffer_j;
				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CTempBlendedBufferInfo::licenseExpired(buffer);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_buffersCheckedOut_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean positions_j, jboolean normals_j)
			{
				ev_bool positions = (ev_bool) positions_j;
				ev_bool normals = (ev_bool) normals_j;
				const 				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->buffersCheckedOut(positions, normals);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_buffersCheckedOut_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean positions_j)
			{
				ev_bool positions = (ev_bool) positions_j;
				const 				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->buffersCheckedOut(positions);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TempBlendedBufferInfo_buffersCheckedOut_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTempBlendedBufferInfo *pObjectX = (EarthView::World::Graphic::CTempBlendedBufferInfo*) pObjXXXX;
				ev_bool __values1 = pObjectX->buffersCheckedOut();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			class JCHardwareBufferManagerBaseProxy : public EarthView::World::Graphic::CHardwareBufferManagerBase
			{
			 private:
				EarthView::World::Core::ev_string m_destroyAllDeclarations_void_callback;
				EarthView::World::Core::ev_string m_destroyAllBindings_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclarationImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclarationImpl_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBindingImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createRenderToVertexBuffer_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclaration_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclaration_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBinding_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBinding_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback;
				EarthView::World::Core::ev_string m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__freeUnusedBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_ev_bool_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback;
			public:
				JCHardwareBufferManagerBaseProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBufferManagerBase(pList)
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
				void register_destroyAllDeclarations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllDeclarations_void_callback = __method;
				}
				void register_destroyAllBindings_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllBindings_void_callback = __method;
				}
				void register_createVertexDeclarationImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclarationImpl_void_callback = __method;
				}
				void register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBindingImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBindingImpl_void_callback = __method;
				}
				void register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback = __method;
				}
				void register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback = __method;
				}
				void register_createRenderToVertexBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createRenderToVertexBuffer_void_callback = __method;
				}
				void register_createVertexDeclaration_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclaration_void_callback = __method;
				}
				void register_destroyVertexDeclaration_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclaration_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBinding_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBinding_void_callback = __method;
				}
				void register_destroyVertexBufferBinding_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback = __method;
				}
				void register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback = __method;
				}
				void register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__freeUnusedBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__freeUnusedBufferCopies_void_callback = __method;
				}
				void register__releaseBufferCopies_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_ev_bool_callback = __method;
				}
				void register__releaseBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_void_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback = __method;
				}
				virtual void destroyAllDeclarations()
				{
					if (this->_gRef != NULL && this->m_destroyAllDeclarations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("destroyAllDeclarations_void_callback");
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
						return this->CHardwareBufferManagerBase::destroyAllDeclarations();
					}
				}
				virtual void destroyAllBindings()
				{
					if (this->_gRef != NULL && this->m_destroyAllBindings_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("destroyAllBindings_void_callback");
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
						return this->CHardwareBufferManagerBase::destroyAllBindings();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclarationImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexDeclarationImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexDeclaration *__values1 = (EarthView::World::Graphic::CVertexDeclaration*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createVertexDeclarationImpl();
					}
				}
				virtual void destroyVertexDeclarationImpl(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclarationImpl_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBindingImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexBufferBindingImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createVertexBufferBindingImpl();
					}
				}
				virtual void destroyVertexBufferBindingImpl(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBindingImpl_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong source_j = (jlong) &source;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::makeBufferCopy(source, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
					}
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if (this->_gRef != NULL && this->m_createRenderToVertexBuffer_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createRenderToVertexBuffer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createRenderToVertexBuffer();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclaration_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexDeclaration_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexDeclaration *__values1 = (EarthView::World::Graphic::CVertexDeclaration*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createVertexDeclaration();
					}
				}
				virtual void destroyVertexDeclaration(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclaration_CVertexDeclaration_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclaration_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CHardwareBufferManagerBase::destroyVertexDeclaration(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBinding_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexBufferBinding_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::createVertexBufferBinding();
					}
				}
				virtual void destroyVertexBufferBinding(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBinding_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
					}
				}
				virtual void registerVertexBufferSourceAndCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if (this->_gRef != NULL && this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jlong copy_j = (jlong) &copy;
						jmethodID __method = __gr->getMethod("registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j, copy_j);
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
						return this->CHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee, ev_bool copyData)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jboolean copyData_j = (jboolean) copyData;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j, copyData_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					}
				}
				virtual void releaseVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CHardwareBufferManagerBase::releaseVertexBufferCopy(bufferCopy);
					}
				}
				virtual void touchVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CHardwareBufferManagerBase::touchVertexBufferCopy(bufferCopy);
					}
				}
				virtual void _freeUnusedBufferCopies()
				{
					if (this->_gRef != NULL && this->m__freeUnusedBufferCopies_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_freeUnusedBufferCopies_void_callback");
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
						return this->CHardwareBufferManagerBase::_freeUnusedBufferCopies();
					}
				}
				virtual void _releaseBufferCopies(ev_bool forceFreeUnused)
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean forceFreeUnused_j = (jboolean) forceFreeUnused;
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , forceFreeUnused_j);
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
						return this->CHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
					}
				}
				virtual void _releaseBufferCopies()
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_void_callback");
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
						return this->CHardwareBufferManagerBase::_releaseBufferCopies();
					}
				}
				virtual void _forceReleaseBufferCopies(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
				virtual void _forceReleaseBufferCopies(EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBuffer_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHardwareBufferManagerBaseProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyAllDeclarations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllDeclarations();
				}
				else
				{
					pObjectX->destroyAllDeclarations();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1destroyAllDeclarations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllDeclarations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllDeclarations_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyAllDeclarations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllDeclarations();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyAllBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllBindings();
				}
				else
				{
					pObjectX->destroyAllBindings();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1destroyAllBindings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllBindings_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllBindings_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyAllBindings_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyAllBindings();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexDeclarationImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclarationImpl();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->createVertexDeclarationImpl();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createVertexDeclarationImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclarationImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclarationImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexDeclarationImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclarationImpl();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexDeclarationImpl_1CVertexDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
				}
				else
				{
					pObjectX->destroyVertexDeclarationImpl(decl);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1destroyVertexDeclarationImpl_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclarationImpl_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexDeclarationImpl_1CVertexDeclaration_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclarationImpl(decl);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBufferBindingImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBindingImpl();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->createVertexBufferBindingImpl();
					if(__values1 != NULL) {						((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
					}					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createVertexBufferBindingImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBindingImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBindingImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBufferBindingImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBindingImpl();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexBufferBindingImpl_1CVertexBufferBinding(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
				}
				else
				{
					pObjectX->destroyVertexBufferBindingImpl(binding);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1destroyVertexBufferBindingImpl_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBindingImpl_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexBufferBindingImpl_1CVertexBufferBinding_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBindingImpl(binding);
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_00024BufferLicenseTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CHardwareBufferManagerBase::BLT_MANUAL_RELEASE,
					CHardwareBufferManagerBase::BLT_AUTOMATIC_RELEASE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_makeBufferCopy_1CHardwareVertexBufferSharedPtr_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &source = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) source_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::makeBufferCopy(source, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->makeBufferCopy(source, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1makeBufferCopy_1CHardwareVertexBufferSharedPtr_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback", "(JIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_makeBufferCopy_1CHardwareVertexBufferSharedPtr_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong source_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &source = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) source_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::makeBufferCopy(source, usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback", "(JJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->createVertexBuffer(vertexSize, numVerts, usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_callback", "(JJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBuffer(vertexSize, numVerts, usage);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback", "(IJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->createIndexBuffer(itype, numIndexes, usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_callback", "(IJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createIndexBuffer(itype, numIndexes, usage);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createRenderToVertexBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createRenderToVertexBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createRenderToVertexBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createRenderToVertexBuffer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createRenderToVertexBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createRenderToVertexBuffer();
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexDeclaration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclaration();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->createVertexDeclaration();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createVertexDeclaration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclaration_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclaration_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexDeclaration_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexDeclaration();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexDeclaration_1CVertexDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclaration(decl);
				}
				else
				{
					pObjectX->destroyVertexDeclaration(decl);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1destroyVertexDeclaration_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclaration_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclaration_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexDeclaration_1CVertexDeclaration_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexDeclaration(decl);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBufferBinding_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBinding();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->createVertexBufferBinding();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1createVertexBufferBinding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBinding_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBinding_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_createVertexBufferBinding_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::createVertexBufferBinding();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
				}
				else
				{
					pObjectX->destroyVertexBufferBinding(binding);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1destroyVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBinding_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBinding_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_destroyVertexBufferBinding_1CVertexBufferBinding_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::destroyVertexBufferBinding(binding);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jlong copy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &copy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) copy_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
				else
				{
					pObjectX->registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jlong copy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &copy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) copy_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j, jboolean copyData_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				ev_bool copyData = (ev_bool) copyData_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback", "(JIJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j, jboolean copyData_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				ev_bool copyData = (ev_bool) copyData_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback", "(JIJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::releaseVertexBufferCopy(bufferCopy);
				}
				else
				{
					pObjectX->releaseVertexBufferCopy(bufferCopy);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::releaseVertexBufferCopy(bufferCopy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::touchVertexBufferCopy(bufferCopy);
				}
				else
				{
					pObjectX->touchVertexBufferCopy(bufferCopy);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::touchVertexBufferCopy(bufferCopy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1freeUnusedBufferCopies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_freeUnusedBufferCopies();
				}
				else
				{
					pObjectX->_freeUnusedBufferCopies();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1_1freeUnusedBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__freeUnusedBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_freeUnusedBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1freeUnusedBufferCopies_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_freeUnusedBufferCopies();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1releaseBufferCopies_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceFreeUnused_j)
			{
				ev_bool forceFreeUnused = (ev_bool) forceFreeUnused_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
				}
				else
				{
					pObjectX->_releaseBufferCopies(forceFreeUnused);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1_1releaseBufferCopies_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1releaseBufferCopies_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceFreeUnused_j)
			{
				ev_bool forceFreeUnused = (ev_bool) forceFreeUnused_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies(forceFreeUnused);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1releaseBufferCopies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies();
				}
				else
				{
					pObjectX->_releaseBufferCopies();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1_1releaseBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1releaseBufferCopies_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_releaseBufferCopies();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
				}
				else
				{
					pObjectX->_forceReleaseBufferCopies(sourceBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1_1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1forceReleaseBufferCopies_1CHardwareVertexBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *sourceBuffer = (EarthView::World::Graphic::CHardwareVertexBuffer*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerBaseProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
				}
				else
				{
					pObjectX->_forceReleaseBufferCopies(sourceBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase_register_1_1forceReleaseBufferCopies_1CHardwareVertexBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerBaseProxy *pObjectX = (JCHardwareBufferManagerBaseProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBuffer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1forceReleaseBufferCopies_1CHardwareVertexBuffer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *sourceBuffer = (EarthView::World::Graphic::CHardwareVertexBuffer*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManagerBase::_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1notifyVertexBufferDestroyed_1CHardwareVertexBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *buf = (EarthView::World::Graphic::CHardwareVertexBuffer*) buf_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->_notifyVertexBufferDestroyed(buf);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManagerBase__1notifyIndexBufferDestroyed_1CHardwareIndexBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer *buf = (EarthView::World::Graphic::CHardwareIndexBuffer*) buf_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *pObjectX = (EarthView::World::Graphic::CHardwareBufferManagerBase*) pObjXXXX;
				pObjectX->_notifyIndexBufferDestroyed(buf);
			}
			class JCHardwareBufferManagerProxy : public EarthView::World::Graphic::CHardwareBufferManager
			{
			 private:
				EarthView::World::Core::ev_string m_destroyAllDeclarations_void_callback;
				EarthView::World::Core::ev_string m_destroyAllBindings_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclarationImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclarationImpl_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBindingImpl_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback;
				EarthView::World::Core::ev_string m_createIndexBuffer_IndexType_ev_size_t_Usage_callback;
				EarthView::World::Core::ev_string m_createRenderToVertexBuffer_void_callback;
				EarthView::World::Core::ev_string m_createVertexDeclaration_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexDeclaration_CVertexDeclaration_callback;
				EarthView::World::Core::ev_string m_createVertexBufferBinding_void_callback;
				EarthView::World::Core::ev_string m_destroyVertexBufferBinding_CVertexBufferBinding_callback;
				EarthView::World::Core::ev_string m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback;
				EarthView::World::Core::ev_string m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback;
				EarthView::World::Core::ev_string m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__freeUnusedBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_ev_bool_callback;
				EarthView::World::Core::ev_string m__releaseBufferCopies_void_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback;
				EarthView::World::Core::ev_string m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback;
			public:
				JCHardwareBufferManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CHardwareBufferManager(pList)
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
				void register_destroyAllDeclarations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllDeclarations_void_callback = __method;
				}
				void register_destroyAllBindings_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyAllBindings_void_callback = __method;
				}
				void register_createVertexDeclarationImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclarationImpl_void_callback = __method;
				}
				void register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBindingImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBindingImpl_void_callback = __method;
				}
				void register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback = __method;
				}
				void register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback = __method;
				}
				void register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback = __method;
				}
				void register_createRenderToVertexBuffer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createRenderToVertexBuffer_void_callback = __method;
				}
				void register_createVertexDeclaration_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexDeclaration_void_callback = __method;
				}
				void register_destroyVertexDeclaration_CVertexDeclaration_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexDeclaration_CVertexDeclaration_callback = __method;
				}
				void register_createVertexBufferBinding_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createVertexBufferBinding_void_callback = __method;
				}
				void register_destroyVertexBufferBinding_CVertexBufferBinding_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback = __method;
				}
				void register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback = __method;
				}
				void register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback = __method;
				}
				void register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__freeUnusedBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__freeUnusedBufferCopies_void_callback = __method;
				}
				void register__releaseBufferCopies_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_ev_bool_callback = __method;
				}
				void register__releaseBufferCopies_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__releaseBufferCopies_void_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback = __method;
				}
				void register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback = __method;
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr createVertexBuffer(ev_size_t vertexSize, ev_size_t numVerts, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong vertexSize_j = (jlong) vertexSize;
						jlong numVerts_j = (jlong) numVerts;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createVertexBuffer_ev_size_t_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , vertexSize_j, numVerts_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					}
				}
				virtual EarthView::World::Graphic::CHardwareIndexBufferSharedPtr createIndexBuffer(EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype, ev_size_t numIndexes, EarthView::World::Graphic::CHardwareBuffer::Usage usage)
				{
					if (this->_gRef != NULL && this->m_createIndexBuffer_IndexType_ev_size_t_Usage_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jint itype_j = (jint) itype;
						jlong numIndexes_j = (jlong) numIndexes;
						jint usage_j = (jint) usage;
						jmethodID __method = __gr->getMethod("createIndexBuffer_IndexType_ev_size_t_Usage_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , itype_j, numIndexes_j, usage_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage);
					}
				}
				virtual EarthView::World::Graphic::RenderToVertexBufferSharedPtr createRenderToVertexBuffer()
				{
					if (this->_gRef != NULL && this->m_createRenderToVertexBuffer_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createRenderToVertexBuffer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::RenderToVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createRenderToVertexBuffer();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclaration()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclaration_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexDeclaration_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexDeclaration *__values1 = (EarthView::World::Graphic::CVertexDeclaration*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createVertexDeclaration();
					}
				}
				virtual void destroyVertexDeclaration(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclaration_CVertexDeclaration_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclaration_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CHardwareBufferManager::destroyVertexDeclaration(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBinding()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBinding_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexBufferBinding_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createVertexBufferBinding();
					}
				}
				virtual void destroyVertexBufferBinding(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBinding_CVertexBufferBinding_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBinding_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CHardwareBufferManager::destroyVertexBufferBinding(binding);
					}
				}
				virtual void registerVertexBufferSourceAndCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& copy)
				{
					if (this->_gRef != NULL && this->m_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jlong copy_j = (jlong) &copy;
						jmethodID __method = __gr->getMethod("registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j, copy_j);
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
						return this->CHardwareBufferManager::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee, ev_bool copyData)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jboolean copyData_j = (jboolean) copyData;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j, copyData_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr allocateVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer, EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType, EarthView::World::Graphic::CHardwareBufferLicensee* licensee)
				{
					if (this->_gRef != NULL && this->m_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jint licenseType_j = (jint) licenseType;
						jlong licensee_j = (jlong) licensee;
						jmethodID __method = __gr->getMethod("allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , sourceBuffer_j, licenseType_j, licensee_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					}
				}
				virtual void releaseVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CHardwareBufferManager::releaseVertexBufferCopy(bufferCopy);
					}
				}
				virtual void touchVertexBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& bufferCopy)
				{
					if (this->_gRef != NULL && this->m_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong bufferCopy_j = (jlong) &bufferCopy;
						jmethodID __method = __gr->getMethod("touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , bufferCopy_j);
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
						return this->CHardwareBufferManager::touchVertexBufferCopy(bufferCopy);
					}
				}
				virtual void _freeUnusedBufferCopies()
				{
					if (this->_gRef != NULL && this->m__freeUnusedBufferCopies_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_freeUnusedBufferCopies_void_callback");
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
						return this->CHardwareBufferManager::_freeUnusedBufferCopies();
					}
				}
				virtual void _releaseBufferCopies(ev_bool forceFreeUnused)
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean forceFreeUnused_j = (jboolean) forceFreeUnused;
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , forceFreeUnused_j);
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
						return this->CHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
					}
				}
				virtual void _releaseBufferCopies()
				{
					if (this->_gRef != NULL && this->m__releaseBufferCopies_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_releaseBufferCopies_void_callback");
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
						return this->CHardwareBufferManager::_releaseBufferCopies();
					}
				}
				virtual void _forceReleaseBufferCopies(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) &sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
				virtual void _forceReleaseBufferCopies(EarthView::World::Graphic::CHardwareVertexBuffer* sourceBuffer)
				{
					if (this->_gRef != NULL && this->m__forceReleaseBufferCopies_CHardwareVertexBuffer_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sourceBuffer_j = (jlong) sourceBuffer;
						jmethodID __method = __gr->getMethod("_forceReleaseBufferCopies_CHardwareVertexBuffer_callback");
						__env->CallVoidMethod(__obj, __method , sourceBuffer_j);
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
						return this->CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
					}
				}
				virtual void destroyAllDeclarations()
				{
					if (this->_gRef != NULL && this->m_destroyAllDeclarations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("destroyAllDeclarations_void_callback");
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
						return this->CHardwareBufferManager::destroyAllDeclarations();
					}
				}
				virtual void destroyAllBindings()
				{
					if (this->_gRef != NULL && this->m_destroyAllBindings_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("destroyAllBindings_void_callback");
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
						return this->CHardwareBufferManager::destroyAllBindings();
					}
				}
				virtual EarthView::World::Graphic::CVertexDeclaration* createVertexDeclarationImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexDeclarationImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexDeclarationImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexDeclaration *__values1 = (EarthView::World::Graphic::CVertexDeclaration*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createVertexDeclarationImpl();
					}
				}
				virtual void destroyVertexDeclarationImpl(EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if (this->_gRef != NULL && this->m_destroyVertexDeclarationImpl_CVertexDeclaration_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong decl_j = (jlong) decl;
						jmethodID __method = __gr->getMethod("destroyVertexDeclarationImpl_CVertexDeclaration_callback");
						__env->CallVoidMethod(__obj, __method , decl_j);
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
						return this->CHardwareBufferManager::destroyVertexDeclarationImpl(decl);
					}
				}
				virtual EarthView::World::Graphic::CVertexBufferBinding* createVertexBufferBindingImpl()
				{
					if (this->_gRef != NULL && this->m_createVertexBufferBindingImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("createVertexBufferBindingImpl_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CVertexBufferBinding *__values1 = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
						if(__values1 != NULL) {
							((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(false);
						}
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::createVertexBufferBindingImpl();
					}
				}
				virtual void destroyVertexBufferBindingImpl(EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if (this->_gRef != NULL && this->m_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong binding_j = (jlong) binding;
						jmethodID __method = __gr->getMethod("destroyVertexBufferBindingImpl_CVertexBufferBinding_callback");
						__env->CallVoidMethod(__obj, __method , binding_j);
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
						return this->CHardwareBufferManager::destroyVertexBufferBindingImpl(binding);
					}
				}
				virtual EarthView::World::Graphic::CHardwareVertexBufferSharedPtr makeBufferCopy(const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr& source, EarthView::World::Graphic::CHardwareBuffer::Usage usage, ev_bool useShadowBuffer)
				{
					if (this->_gRef != NULL && this->m_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong source_j = (jlong) &source;
						jint usage_j = (jint) usage;
						jboolean useShadowBuffer_j = (jboolean) useShadowBuffer;
						jmethodID __method = __gr->getMethod("makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , source_j, usage_j, useShadowBuffer_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CHardwareBufferManager::makeBufferCopy(source, usage, useShadowBuffer);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCHardwareBufferManagerProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_ev_bool_callback", "(JJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->createVertexBuffer(vertexSize, numVerts, usage);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBuffer_ev_size_t_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBuffer_ev_size_t_ev_size_t_Usage_callback", "(JJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexBuffer_1ev_1size_1t_1ev_1size_1t_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexSize_j, jlong numVerts_j, jint usage_j)
			{
				ev_size_t vertexSize = (ev_size_t) vertexSize_j;
				ev_size_t numVerts = (ev_size_t) numVerts_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexBuffer(vertexSize, numVerts, usage);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_ev_bool_callback", "(IJIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j, jboolean useShadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool useShadowBuffer = (ev_bool) useShadowBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage, useShadowBuffer);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->createIndexBuffer(itype, numIndexes, usage);
					EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createIndexBuffer_1IndexType_1ev_1size_1t_1Usage(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createIndexBuffer_IndexType_ev_size_t_Usage_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createIndexBuffer_IndexType_ev_size_t_Usage_callback", "(IJI)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createIndexBuffer_1IndexType_1ev_1size_1t_1Usage_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint itype_j, jlong numIndexes_j, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer::IndexType itype = (EarthView::World::Graphic::CHardwareIndexBuffer::IndexType) itype_j;
				ev_size_t numIndexes = (ev_size_t) numIndexes_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createIndexBuffer(itype, numIndexes, usage);
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareIndexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createRenderToVertexBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->createRenderToVertexBuffer();
					EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createRenderToVertexBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createRenderToVertexBuffer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createRenderToVertexBuffer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createRenderToVertexBuffer_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createRenderToVertexBuffer();
				EarthView::World::Graphic::RenderToVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::RenderToVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexDeclaration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexDeclaration();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->createVertexDeclaration();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createVertexDeclaration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclaration_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclaration_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexDeclaration_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexDeclaration();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_destroyVertexDeclaration_1CVertexDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexDeclaration(decl);
				}
				else
				{
					pObjectX->destroyVertexDeclaration(decl);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1destroyVertexDeclaration_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclaration_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclaration_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_destroyVertexDeclaration_1CVertexDeclaration_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong decl_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *decl = (EarthView::World::Graphic::CVertexDeclaration*) decl_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexDeclaration(decl);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexBufferBinding_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexBufferBinding();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->createVertexBufferBinding();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createVertexBufferBinding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBinding_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBinding_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_createVertexBufferBinding_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CVertexBufferBinding* __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::createVertexBufferBinding();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_destroyVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexBufferBinding(binding);
				}
				else
				{
					pObjectX->destroyVertexBufferBinding(binding);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1destroyVertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBinding_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBinding_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_destroyVertexBufferBinding_1CVertexBufferBinding_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong binding_j)
			{
				EarthView::World::Graphic::CVertexBufferBinding *binding = (EarthView::World::Graphic::CVertexBufferBinding*) binding_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::destroyVertexBufferBinding(binding);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jlong copy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &copy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) copy_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
				else
				{
					pObjectX->registerVertexBufferSourceAndCopy(sourceBuffer, copy);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"registerVertexBufferSourceAndCopy_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_callback", "(JJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_registerVertexBufferSourceAndCopy_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jlong copy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &copy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) copy_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::registerVertexBufferSourceAndCopy(sourceBuffer, copy);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j, jboolean copyData_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				ev_bool copyData = (ev_bool) copyData_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_ev_bool_callback", "(JIJZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j, jboolean copyData_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				ev_bool copyData = (ev_bool) copyData_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee, copyData);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
					EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"allocateVertexBufferCopy_CHardwareVertexBufferSharedPtr_BufferLicenseType_CHardwareBufferLicensee_callback", "(JIJ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_allocateVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1BufferLicenseType_1CHardwareBufferLicensee_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j, jint licenseType_j, jlong licensee_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType licenseType = (EarthView::World::Graphic::CHardwareBufferManagerBase::BufferLicenseType) licenseType_j;
				EarthView::World::Graphic::CHardwareBufferLicensee *licensee = (EarthView::World::Graphic::CHardwareBufferLicensee*) licensee_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr __values1 = pObjectX->EarthView::World::Graphic::CHardwareBufferManager::allocateVertexBufferCopy(sourceBuffer, licenseType, licensee);
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *returnvalues = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::releaseVertexBufferCopy(bufferCopy);
				}
				else
				{
					pObjectX->releaseVertexBufferCopy(bufferCopy);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"releaseVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_releaseVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::releaseVertexBufferCopy(bufferCopy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::touchVertexBufferCopy(bufferCopy);
				}
				else
				{
					pObjectX->touchVertexBufferCopy(bufferCopy);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"touchVertexBufferCopy_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_touchVertexBufferCopy_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bufferCopy_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &bufferCopy = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) bufferCopy_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::touchVertexBufferCopy(bufferCopy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1freeUnusedBufferCopies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_freeUnusedBufferCopies();
				}
				else
				{
					pObjectX->_freeUnusedBufferCopies();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1_1freeUnusedBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__freeUnusedBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_freeUnusedBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1freeUnusedBufferCopies_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_freeUnusedBufferCopies();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1releaseBufferCopies_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceFreeUnused_j)
			{
				ev_bool forceFreeUnused = (ev_bool) forceFreeUnused_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
				}
				else
				{
					pObjectX->_releaseBufferCopies(forceFreeUnused);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1_1releaseBufferCopies_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1releaseBufferCopies_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean forceFreeUnused_j)
			{
				ev_bool forceFreeUnused = (ev_bool) forceFreeUnused_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies(forceFreeUnused);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1releaseBufferCopies_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies();
				}
				else
				{
					pObjectX->_releaseBufferCopies();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1_1releaseBufferCopies_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__releaseBufferCopies_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_releaseBufferCopies_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1releaseBufferCopies_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_releaseBufferCopies();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
				}
				else
				{
					pObjectX->_forceReleaseBufferCopies(sourceBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1_1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBufferSharedPtr_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1forceReleaseBufferCopies_1CHardwareVertexBufferSharedPtr_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &sourceBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1forceReleaseBufferCopies_1CHardwareVertexBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *sourceBuffer = (EarthView::World::Graphic::CHardwareVertexBuffer*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCHardwareBufferManagerProxy))
				{
					pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
				}
				else
				{
					pObjectX->_forceReleaseBufferCopies(sourceBuffer);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1_1forceReleaseBufferCopies_1CHardwareVertexBuffer(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__forceReleaseBufferCopies_CHardwareVertexBuffer_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_forceReleaseBufferCopies_CHardwareVertexBuffer_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1forceReleaseBufferCopies_1CHardwareVertexBuffer_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sourceBuffer_j)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *sourceBuffer = (EarthView::World::Graphic::CHardwareVertexBuffer*) sourceBuffer_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CHardwareBufferManager::_forceReleaseBufferCopies(sourceBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1notifyVertexBufferDestroyed_1CHardwareVertexBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j)
			{
				EarthView::World::Graphic::CHardwareVertexBuffer *buf = (EarthView::World::Graphic::CHardwareVertexBuffer*) buf_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->_notifyVertexBufferDestroyed(buf);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager__1notifyIndexBufferDestroyed_1CHardwareIndexBuffer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong buf_j)
			{
				EarthView::World::Graphic::CHardwareIndexBuffer *buf = (EarthView::World::Graphic::CHardwareIndexBuffer*) buf_j;
				EarthView::World::Graphic::CHardwareBufferManager *pObjectX = (EarthView::World::Graphic::CHardwareBufferManager*) pObjXXXX;
				pObjectX->_notifyIndexBufferDestroyed(buf);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CHardwareBufferManager& __values1 = EarthView::World::Graphic::CHardwareBufferManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CHardwareBufferManager* __values1 = EarthView::World::Graphic::CHardwareBufferManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1destroyAllDeclarations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllDeclarations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllDeclarations_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1destroyAllBindings_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyAllBindings_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyAllBindings_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createVertexDeclarationImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexDeclarationImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexDeclarationImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1destroyVertexDeclarationImpl_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexDeclarationImpl_CVertexDeclaration_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexDeclarationImpl_CVertexDeclaration_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1createVertexBufferBindingImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createVertexBufferBindingImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createVertexBufferBindingImpl_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1destroyVertexBufferBindingImpl_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyVertexBufferBindingImpl_CVertexBufferBinding_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyVertexBufferBindingImpl_CVertexBufferBinding_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_HardwareBufferManager_register_1makeBufferCopy_1CHardwareVertexBufferSharedPtr_1Usage_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCHardwareBufferManagerProxy *pObjectX = (JCHardwareBufferManagerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"makeBufferCopy_CHardwareVertexBufferSharedPtr_Usage_ev_bool_callback", "(JIZ)J");
					__gr->setMethod(sMethod, __method);
				}
			}
		}
	}
}
