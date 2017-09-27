/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendertovertexbuffer.h"
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
			class JCRenderToVertexBufferProxy : public EarthView::World::Graphic::CRenderToVertexBuffer
			{
			 private:
				EarthView::World::Core::ev_string m_getRenderOperation_CRenderOperation_callback;
				EarthView::World::Core::ev_string m_update_CSceneManager_callback;
				EarthView::World::Core::ev_string m_reset_void_callback;
			public:
				JCRenderToVertexBufferProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderToVertexBuffer(pList)
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
				void register_getRenderOperation_CRenderOperation_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getRenderOperation_CRenderOperation_callback = __method;
				}
				void register_update_CSceneManager_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_update_CSceneManager_callback = __method;
				}
				void register_reset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reset_void_callback = __method;
				}
				virtual void getRenderOperation(EarthView::World::Graphic::CRenderOperation& op)
				{
					if (this->_gRef != NULL && this->m_getRenderOperation_CRenderOperation_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong op_j = (jlong) &op;
						jmethodID __method = __gr->getMethod("getRenderOperation_CRenderOperation_callback");
						__env->CallVoidMethod(__obj, __method , op_j);
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
						return this->CRenderToVertexBuffer::getRenderOperation(op);
					}
				}
				virtual void update(EarthView::World::Graphic::CSceneManager* sceneMgr)
				{
					if (this->_gRef != NULL && this->m_update_CSceneManager_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sceneMgr_j = (jlong) sceneMgr;
						jmethodID __method = __gr->getMethod("update_CSceneManager_callback");
						__env->CallVoidMethod(__obj, __method , sceneMgr_j);
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
						return this->CRenderToVertexBuffer::update(sceneMgr);
					}
				}
				virtual void reset()
				{
					if (this->_gRef != NULL && this->m_reset_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("reset_void_callback");
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
						return this->CRenderToVertexBuffer::reset();
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderToVertexBufferProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getVertexDeclaration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				EarthView::World::Graphic::CVertexDeclaration* __values1 = pObjectX->getVertexDeclaration();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getMaxVertexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMaxVertexCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_setMaxVertexCount_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong maxVertexCount_j)
			{
				ev_uint32 maxVertexCount = (ev_uint32) maxVertexCount_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->setMaxVertexCount(maxVertexCount);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getOperationType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				EarthView::World::Graphic::CRenderOperation::OperationType __values1 = pObjectX->getOperationType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_setOperationType_1OperationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint operationType_j)
			{
				EarthView::World::Graphic::CRenderOperation::OperationType operationType = (EarthView::World::Graphic::CRenderOperation::OperationType) operationType_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->setOperationType(operationType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_setResetsEveryUpdate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean resetsEveryUpdate_j)
			{
				ev_bool resetsEveryUpdate = (ev_bool) resetsEveryUpdate_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->setResetsEveryUpdate(resetsEveryUpdate);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getResetsEveryUpdate_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				ev_bool __values1 = pObjectX->getResetsEveryUpdate();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getRenderOperation_1CRenderOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderToVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderToVertexBuffer::getRenderOperation(op);
				}
				else
				{
					pObjectX->getRenderOperation(op);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_register_1getRenderOperation_1CRenderOperation(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderToVertexBufferProxy *pObjectX = (JCRenderToVertexBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getRenderOperation_CRenderOperation_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getRenderOperation_CRenderOperation_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getRenderOperation_1CRenderOperation_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong op_j)
			{
				EarthView::World::Graphic::CRenderOperation &op = *(EarthView::World::Graphic::CRenderOperation*) op_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderToVertexBuffer::getRenderOperation(op);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_update_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sceneMgr_j)
			{
				EarthView::World::Graphic::CSceneManager *sceneMgr = (EarthView::World::Graphic::CSceneManager*) sceneMgr_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderToVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderToVertexBuffer::update(sceneMgr);
				}
				else
				{
					pObjectX->update(sceneMgr);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_register_1update_1CSceneManager(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderToVertexBufferProxy *pObjectX = (JCRenderToVertexBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_update_CSceneManager_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"update_CSceneManager_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_update_1CSceneManager_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sceneMgr_j)
			{
				EarthView::World::Graphic::CSceneManager *sceneMgr = (EarthView::World::Graphic::CSceneManager*) sceneMgr_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderToVertexBuffer::update(sceneMgr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderToVertexBufferProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderToVertexBuffer::reset();
				}
				else
				{
					pObjectX->reset();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_register_1reset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderToVertexBufferProxy *pObjectX = (JCRenderToVertexBufferProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reset_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_reset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderToVertexBuffer::reset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_setSourceRenderable_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_source_j)
			{
				EarthView::World::Graphic::CRenderable *ref_source = (EarthView::World::Graphic::CRenderable*) ref_source_j;
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->setSourceRenderable(ref_source);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getSourceRenderable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				const EarthView::World::Graphic::CRenderable* __values1 = pObjectX->getSourceRenderable();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_getRenderToBufferMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				const EarthView::World::Graphic::CMaterialPtr& __values1 = pObjectX->getRenderToBufferMaterial();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderToVertexBuffer_setRenderToBufferMaterialName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring materialName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* materialName_ch = (const ev_char*)__env->GetStringUTFChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringUTFChars(materialName_j, (const char *)materialName_ch);
				#else
				const ev_wchar* materialName_ch = (const ev_wchar*)__env->GetStringChars(materialName_j,JNI_FALSE);
				const EVString materialName = materialName_ch;
				__env->ReleaseStringChars(materialName_j, (const jchar *)materialName_ch);
				#endif
				EarthView::World::Graphic::CRenderToVertexBuffer *pObjectX = (EarthView::World::Graphic::CRenderToVertexBuffer*) pObjXXXX;
				pObjectX->setRenderToBufferMaterialName(materialName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderToVertexBufferSharedPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::RenderToVertexBufferSharedPtr *pObjectX = (EarthView::World::Graphic::RenderToVertexBufferSharedPtr*) pObjXXXX;
				EarthView::World::Graphic::CRenderToVertexBuffer* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
