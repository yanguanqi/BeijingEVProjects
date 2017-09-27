/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueuesortinggrouping.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderablePass_get_1renderable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderablePass *pObjectX = (EarthView::World::Graphic::RenderablePass*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->renderable);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderablePass_set_1renderable_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RenderablePass *pObjectX = (EarthView::World::Graphic::RenderablePass*)pObjXXXX;
				pObjectX->renderable = (EarthView::World::Graphic::CRenderable*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderablePass_get_1pass_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::RenderablePass *pObjectX = (EarthView::World::Graphic::RenderablePass*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pass);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderablePass_set_1pass_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::RenderablePass *pObjectX = (EarthView::World::Graphic::RenderablePass*)pObjXXXX;
				pObjectX->pass = (EarthView::World::Graphic::CPass*) __values1_j;
			}
			class JCQueuedRenderableVisitorProxy : public EarthView::World::Graphic::CQueuedRenderableVisitor
			{
			 private:
				EarthView::World::Core::ev_string m_visit_RenderablePass_callback;
				EarthView::World::Core::ev_string m_visit_CPass_callback;
				EarthView::World::Core::ev_string m_visit_CRenderable_callback;
			public:
				JCQueuedRenderableVisitorProxy(EarthView::World::Core::CNameValuePairList *pList) : CQueuedRenderableVisitor(pList)
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
				void register_visit_RenderablePass_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_visit_RenderablePass_callback = __method;
				}
				void register_visit_CPass_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_visit_CPass_callback = __method;
				}
				void register_visit_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_visit_CRenderable_callback = __method;
				}
				virtual void visit(EarthView::World::Graphic::RenderablePass* rp)
				{
					if (this->_gRef != NULL && this->m_visit_RenderablePass_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong rp_j = (jlong) rp;
						jmethodID __method = __gr->getMethod("visit_RenderablePass_callback");
						__env->CallVoidMethod(__obj, __method , rp_j);
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
						return this->CQueuedRenderableVisitor::visit(rp);
					}
				}
				virtual ev_bool visit(const EarthView::World::Graphic::CPass* p)
				{
					if (this->_gRef != NULL && this->m_visit_CPass_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong p_j = (jlong) p;
						jmethodID __method = __gr->getMethod("visit_CPass_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , p_j);
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
						return this->CQueuedRenderableVisitor::visit(p);
					}
				}
				virtual void visit(EarthView::World::Graphic::CRenderable* r)
				{
					if (this->_gRef != NULL && this->m_visit_CRenderable_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong r_j = (jlong) r;
						jmethodID __method = __gr->getMethod("visit_CRenderable_callback");
						__env->CallVoidMethod(__obj, __method , r_j);
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
						return this->CQueuedRenderableVisitor::visit(r);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCQueuedRenderableVisitorProxy);
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_visit_1RenderablePass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rp_j)
			{
				EarthView::World::Graphic::RenderablePass *rp = (EarthView::World::Graphic::RenderablePass*) rp_j;
				EarthView::World::Graphic::CQueuedRenderableVisitor *pObjectX = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCQueuedRenderableVisitorProxy))
				{
					pObjectX->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(rp);
				}
				else
				{
					pObjectX->visit(rp);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_register_1visit_1RenderablePass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCQueuedRenderableVisitorProxy *pObjectX = (JCQueuedRenderableVisitorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_visit_RenderablePass_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"visit_RenderablePass_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_visit_1RenderablePass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rp_j)
			{
				EarthView::World::Graphic::RenderablePass *rp = (EarthView::World::Graphic::RenderablePass*) rp_j;
				EarthView::World::Graphic::CQueuedRenderableVisitor *pObjectX = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(rp);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_visit_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
			{
				const EarthView::World::Graphic::CPass *p = (const EarthView::World::Graphic::CPass*) p_j;
				EarthView::World::Graphic::CQueuedRenderableVisitor *pObjectX = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCQueuedRenderableVisitorProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(p);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->visit(p);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_register_1visit_1CPass(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCQueuedRenderableVisitorProxy *pObjectX = (JCQueuedRenderableVisitorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_visit_CPass_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"visit_CPass_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_visit_1CPass_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
			{
				const EarthView::World::Graphic::CPass *p = (const EarthView::World::Graphic::CPass*) p_j;
				EarthView::World::Graphic::CQueuedRenderableVisitor *pObjectX = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(p);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_visit_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
			{
				EarthView::World::Graphic::CRenderable *r = (EarthView::World::Graphic::CRenderable*) r_j;
				EarthView::World::Graphic::CQueuedRenderableVisitor *pObjectX = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCQueuedRenderableVisitorProxy))
				{
					pObjectX->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(r);
				}
				else
				{
					pObjectX->visit(r);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_register_1visit_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCQueuedRenderableVisitorProxy *pObjectX = (JCQueuedRenderableVisitorProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_visit_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"visit_CRenderable_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableVisitor_visit_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
			{
				EarthView::World::Graphic::CRenderable *r = (EarthView::World::Graphic::CRenderable*) r_j;
				EarthView::World::Graphic::CQueuedRenderableVisitor *pObjectX = (EarthView::World::Graphic::CQueuedRenderableVisitor*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CQueuedRenderableVisitor::visit(r);
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_00024OrganisationModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CQueuedRenderableCollection::OM_PASS_GROUP,
					CQueuedRenderableCollection::OM_SORT_DESCENDING,
					CQueuedRenderableCollection::OM_SORT_ASCENDING
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_removePassGroup_1CPass(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
			{
				EarthView::World::Graphic::CPass *p = (EarthView::World::Graphic::CPass*) p_j;
				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->removePassGroup(p);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_resetOrganisationModes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->resetOrganisationModes();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_addOrganisationMode_1OrganisationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint om_j)
			{
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode) om_j;
				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->addOrganisationMode(om);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_addRenderable_1CPass_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pass_j, jlong ref_rend_j)
			{
				EarthView::World::Graphic::CPass *ref_pass = (EarthView::World::Graphic::CPass*) ref_pass_j;
				EarthView::World::Graphic::CRenderable *ref_rend = (EarthView::World::Graphic::CRenderable*) ref_rend_j;
				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->addRenderable(ref_pass, ref_rend);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_sort_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->sort(cam);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_acceptVisitor_1CQueuedRenderableVisitor_1OrganisationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong visitor_j, jint om_j)
			{
				EarthView::World::Graphic::CQueuedRenderableVisitor *visitor = (EarthView::World::Graphic::CQueuedRenderableVisitor*) visitor_j;
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode) om_j;
				const 				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->acceptVisitor(visitor, om);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_QueuedRenderableCollection_merge_1CQueuedRenderableCollection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::CQueuedRenderableCollection &rhs = *(EarthView::World::Graphic::CQueuedRenderableCollection*) rhs_j;
				EarthView::World::Graphic::CQueuedRenderableCollection *pObjectX = (EarthView::World::Graphic::CQueuedRenderableCollection*) pObjXXXX;
				pObjectX->merge(rhs);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_getSolidsBasic_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& __values1 = pObjectX->getSolidsBasic();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_getSolidsDiffuseSpecular_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& __values1 = pObjectX->getSolidsDiffuseSpecular();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_getSolidsDecal_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& __values1 = pObjectX->getSolidsDecal();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_getSolidsNoShadowReceive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& __values1 = pObjectX->getSolidsNoShadowReceive();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_getTransparentsUnsorted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& __values1 = pObjectX->getTransparentsUnsorted();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_getTransparents_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				const EarthView::World::Graphic::CQueuedRenderableCollection& __values1 = pObjectX->getTransparents();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_resetOrganisationModes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->resetOrganisationModes();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_addOrganisationMode_1OrganisationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint om_j)
			{
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode) om_j;
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->addOrganisationMode(om);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_defaultOrganisationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->defaultOrganisationMode();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_addRenderable_1CRenderable_1CTechnique(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pRend_j, jlong ref_pTech_j)
			{
				EarthView::World::Graphic::CRenderable *ref_pRend = (EarthView::World::Graphic::CRenderable*) ref_pRend_j;
				EarthView::World::Graphic::CTechnique *ref_pTech = (EarthView::World::Graphic::CTechnique*) ref_pTech_j;
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->addRenderable(ref_pRend, ref_pTech);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_sort_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cam_j)
			{
				const EarthView::World::Graphic::CCamera *cam = (const EarthView::World::Graphic::CCamera*) cam_j;
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->sort(cam);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_setSplitPassesByLightingType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->setSplitPassesByLightingType(split);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_setSplitNoShadowPasses_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->setSplitNoShadowPasses(split);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_setShadowCastersCannotBeReceivers_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean ind_j)
			{
				ev_bool ind = (ev_bool) ind_j;
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->setShadowCastersCannotBeReceivers(ind);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderPriorityGroup_merge_1CRenderPriorityGroup(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::CRenderPriorityGroup *rhs = (const EarthView::World::Graphic::CRenderPriorityGroup*) rhs_j;
				EarthView::World::Graphic::CRenderPriorityGroup *pObjectX = (EarthView::World::Graphic::CRenderPriorityGroup*) pObjXXXX;
				pObjectX->merge(rhs);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_push_1ev_1uint16_1CRenderPriorityGroup(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jlong ref_val_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CRenderPriorityGroup *&ref_val = *(EarthView::World::Graphic::CRenderPriorityGroup**) ref_val_j;
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, ref_val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_exist_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_OperatorIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap& pObjectX = *(EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CRenderPriorityGroup*& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_get_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup*& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_erase_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_uint16 key = (const ev_uint16) key_j;
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::PriorityMap *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapPair_set_1first_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*)pObjXXXX;
				pObjectX->first = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapPair_set_1second_1CRenderPriorityGroup(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair*)pObjXXXX;
				pObjectX->second = (EarthView::World::Graphic::CRenderPriorityGroup*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024PriorityMapIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup** __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				EarthView::World::Graphic::CRenderPriorityGroup* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_00024ConstPriorityMapIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup::ConstPriorityMapIterator*) pObjXXXX;
				const EarthView::World::Graphic::CRenderQueueGroup::PriorityMapPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_getIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator __values1 = pObjectX->getIterator();
				EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator *returnvalues = new EarthView::World::Graphic::CRenderQueueGroup::PriorityMapIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_addRenderable_1CRenderable_1CTechnique_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pRend_j, jlong pTech_j, jint priority_j)
			{
				EarthView::World::Graphic::CRenderable *pRend = (EarthView::World::Graphic::CRenderable*) pRend_j;
				EarthView::World::Graphic::CTechnique *pTech = (EarthView::World::Graphic::CTechnique*) pTech_j;
				ev_uint16 priority = (ev_uint16) priority_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->addRenderable(pRend, pTech, priority);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_clear_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean destroy_j)
			{
				ev_bool destroy = (ev_bool) destroy_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->clear(destroy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_setShadowsEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->setShadowsEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_getShadowsEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				ev_bool __values1 = pObjectX->getShadowsEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_setSplitPassesByLightingType_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->setSplitPassesByLightingType(split);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_setSplitNoShadowPasses_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->setSplitNoShadowPasses(split);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_setShadowCastersCannotBeReceivers_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean ind_j)
			{
				ev_bool ind = (ev_bool) ind_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->setShadowCastersCannotBeReceivers(ind);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_resetOrganisationModes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->resetOrganisationModes();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_addOrganisationMode_1OrganisationMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint om_j)
			{
				EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode om = (EarthView::World::Graphic::CQueuedRenderableCollection::OrganisationMode) om_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->addOrganisationMode(om);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_defaultOrganisationMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->defaultOrganisationMode();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RenderQueueGroup_merge_1CRenderQueueGroup(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
			{
				const EarthView::World::Graphic::CRenderQueueGroup *rhs = (const EarthView::World::Graphic::CRenderQueueGroup*) rhs_j;
				EarthView::World::Graphic::CRenderQueueGroup *pObjectX = (EarthView::World::Graphic::CRenderQueueGroup*) pObjXXXX;
				pObjectX->merge(rhs);
			}
		}
	}
}
