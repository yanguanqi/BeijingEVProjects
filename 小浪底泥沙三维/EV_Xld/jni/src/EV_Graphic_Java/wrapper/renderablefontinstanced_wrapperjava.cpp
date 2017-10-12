/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderablefontinstanced.h"
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
			class JCRenderableFontInstancedProxy : public EarthView::World::Graphic::CRenderableFontInstanced
			{
			 private:
				EarthView::World::Core::ev_string m_setDepthCheckEnabled_ev_bool_callback;
			public:
				JCRenderableFontInstancedProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableFontInstanced(pList)
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
				void register_setDepthCheckEnabled_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDepthCheckEnabled_ev_bool_callback = __method;
				}
				virtual void setDepthCheckEnabled(ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setDepthCheckEnabled_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setDepthCheckEnabled_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , enable_j);
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
						return this->CRenderableFontInstanced::setDepthCheckEnabled(enable);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderableFontInstancedProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setAutoLineFeed_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong width_j)
			{
				const ev_uint32 width = (ev_uint32) width_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->setAutoLineFeed(width);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->setVisible(visible);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setRenderQueueGroup_1ev_1uint8(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->setRenderQueueGroup(queueID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setRenderQueueGroupAndPriority_1ev_1uint8_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jshort queueID_j, jint priority_j)
			{
				ev_uint8 queueID = (ev_uint8) queueID_j;
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->setRenderQueueGroupAndPriority(queueID, priority);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_bindWorldMaxtrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mx4_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 *mx4 = (const EarthView::World::Spatial::Math::CMatrix4*) mx4_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->bindWorldMaxtrix(mx4);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setDepthCheckEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableFontInstancedProxy))
				{
					pObjectX->EarthView::World::Graphic::CRenderableFontInstanced::setDepthCheckEnabled(enable);
				}
				else
				{
					pObjectX->setDepthCheckEnabled(enable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_register_1setDepthCheckEnabled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableFontInstancedProxy *pObjectX = (JCRenderableFontInstancedProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDepthCheckEnabled_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDepthCheckEnabled_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setDepthCheckEnabled_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enable_j)
			{
				ev_bool enable = (ev_bool) enable_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CRenderableFontInstanced::setDepthCheckEnabled(enable);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_getDepthCheckEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				ev_bool __values1 = pObjectX->getDepthCheckEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setText_1EarthView_1World_1Core_1CUnicodeString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring wstr_j)
			{
				const ev_wchar* wstr_wch = (const ev_wchar*)__env->GetStringChars(wstr_j,JNI_FALSE);
				const EarthView::World::Core::CUnicodeString wstr = wstr_wch;
				__env->ReleaseStringChars(wstr_j,(jchar*)wstr_wch);
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->setText(wstr);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_getText_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				const EarthView::World::Core::CUnicodeString& __values1 = pObjectX->getText();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_setTextStyle_1CTextureTextStyle(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newStyle_j)
			{
				EarthView::World::Graphic::CTextureTextStyle *newStyle = (EarthView::World::Graphic::CTextureTextStyle*) newStyle_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->setTextStyle(newStyle);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_updateRenderStatus_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean geometryOutOfDate_j, jboolean colorOutOfDate_j)
			{
				ev_bool geometryOutOfDate = (ev_bool) geometryOutOfDate_j;
				ev_bool colorOutOfDate = (ev_bool) colorOutOfDate_j;
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->updateRenderStatus(geometryOutOfDate, colorOutOfDate);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				pObjectX->refresh();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderableFontInstanced_forceRefresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderableFontInstanced *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanced*) pObjXXXX;
				ev_bool __values1 = pObjectX->forceRefresh();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderableFontInstanceObjectCreatorManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager* __values1 = EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager::getSingleton();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanceObjectCreatorManager_destorySingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager::destorySingleton();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderableFontInstanceObjectCreatorManager_createInstanceObject_1CRenderableFontInstanced_1CTextureTextStyle_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textInstance_j, jlong textStyle_j, jlong matName_j)
			{
				EarthView::World::Graphic::CRenderableFontInstanced *textInstance = (EarthView::World::Graphic::CRenderableFontInstanced*) textInstance_j;
				EarthView::World::Graphic::CTextureTextStyle *textStyle = (EarthView::World::Graphic::CTextureTextStyle*) textStyle_j;
				EVString &matName = *(EVString*) matName_j;
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjXXXX;
				EarthView::World::Graphic::CInstanceObject* __values1 = pObjectX->createInstanceObject(textInstance, textStyle, matName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanceObjectCreatorManager_destroyInstanceObjects_1CRenderableFontInstanced(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textInstance_j)
			{
				EarthView::World::Graphic::CRenderableFontInstanced *textInstance = (EarthView::World::Graphic::CRenderableFontInstanced*) textInstance_j;
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjXXXX;
				pObjectX->destroyInstanceObjects(textInstance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanceObjectCreatorManager_addRenderableFontInstancedRequest_1CRenderableFontInstanced(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textInstance_j)
			{
				EarthView::World::Graphic::CRenderableFontInstanced *textInstance = (EarthView::World::Graphic::CRenderableFontInstanced*) textInstance_j;
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjXXXX;
				pObjectX->addRenderableFontInstancedRequest(textInstance);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderableFontInstanceObjectCreatorManager_abortRenderableFontInstancedRequest_1CRenderableFontInstanced(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong textInstance_j)
			{
				EarthView::World::Graphic::CRenderableFontInstanced *textInstance = (EarthView::World::Graphic::CRenderableFontInstanced*) textInstance_j;
				EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager *pObjectX = (EarthView::World::Graphic::CRenderableFontInstanceObjectCreatorManager*) pObjXXXX;
				pObjectX->abortRenderableFontInstancedRequest(textInstance);
			}
		}
	}
}
