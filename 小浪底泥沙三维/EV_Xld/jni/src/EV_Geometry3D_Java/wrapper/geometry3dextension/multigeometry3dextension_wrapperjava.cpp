/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dextension/multigeometry3dextension.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1vertexs_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->vertexs);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1vertexs_1CVertexVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->vertexs = *(EarthView::World::Geometry3D::CVertexVector*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1existPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->existPosition);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1existPosition_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->existPosition = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1existNormal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->existNormal);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1existNormal_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->existNormal = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1existColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->existColor);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1existColor_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->existColor = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1existTextureCoord_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->existTextureCoord);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1existTextureCoord_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->existTextureCoord = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1indices_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->indices);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1indices_1CIndexVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->indices = *(EarthView::World::Geometry3D::CIndexVector*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1operationType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->operationType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1operationType_1OperationType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->operationType = (EarthView::World::Graphic::CRenderOperation::OperationType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1material_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->material);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1material_1CMaterialPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->material = *(EarthView::World::Graphic::CMaterialPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshData_get_1matrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->matrix);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshData_set_1matrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::SubMeshData *pObjectX = (EarthView::World::Geometry3D::SubMeshData*)pObjXXXX;
				pObjectX->matrix = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong index_j )
			{
				EarthView::World::Geometry3D::CSubMeshDataVector& pObjectX = *(EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Geometry3D::SubMeshData& __values1 = pObjectX[index];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_getSubMeshData_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				EarthView::World::Geometry3D::SubMeshData& __values1 = pObjectX->getSubMeshData(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_addSubMeshData_1SubMeshData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subMeshData_j)
			{
				const EarthView::World::Geometry3D::SubMeshData &subMeshData = *(EarthView::World::Geometry3D::SubMeshData*) subMeshData_j;
				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				pObjectX->addSubMeshData(subMeshData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_insertSubMeshData_1ev_1size_1t_1SubMeshData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong subMeshData_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				const EarthView::World::Geometry3D::SubMeshData &subMeshData = *(EarthView::World::Geometry3D::SubMeshData*) subMeshData_j;
				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				pObjectX->insertSubMeshData(pos, subMeshData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_removeSubMeshData_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				pObjectX->removeSubMeshData(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_removeAllSubMeshDatas_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				pObjectX->removeAllSubMeshDatas();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_getCapacity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCapacity();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_setCapacity_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				pObjectX->setCapacity(count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_SubMeshDataVector_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CSubMeshDataVector *pObjectX = (EarthView::World::Geometry3D::CSubMeshDataVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCRenderableGeometryExtensionListenerProxy : public EarthView::World::Geometry3D::CRenderableGeometryExtensionListener
			{
			 private:
				EarthView::World::Core::ev_string m_preRender_CSceneManager_CRenderSystem_CRenderable_callback;
				EarthView::World::Core::ev_string m_postRender_CSceneManager_CRenderSystem_CRenderable_callback;
				EarthView::World::Core::ev_string m_destroyed_CRenderable_callback;
			public:
				JCRenderableGeometryExtensionListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderableGeometryExtensionListener(pList)
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
				void register_preRender_CSceneManager_CRenderSystem_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preRender_CSceneManager_CRenderSystem_CRenderable_callback = __method;
				}
				void register_postRender_CSceneManager_CRenderSystem_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postRender_CSceneManager_CRenderSystem_CRenderable_callback = __method;
				}
				void register_destroyed_CRenderable_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_destroyed_CRenderable_callback = __method;
				}
				virtual ev_bool preRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys, EarthView::World::Graphic::CRenderable* renderable)
				{
					if (this->_gRef != NULL && this->m_preRender_CSceneManager_CRenderSystem_CRenderable_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jlong renderable_j = (jlong) renderable;
						jmethodID __method = __gr->getMethod("preRender_CSceneManager_CRenderSystem_CRenderable_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , sm_j, rsys_j, renderable_j);
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
						return this->CRenderableGeometryExtensionListener::preRender(sm, rsys, renderable);
					}
				}
				virtual void postRender(EarthView::World::Graphic::CSceneManager* sm, EarthView::World::Graphic::CRenderSystem* rsys, EarthView::World::Graphic::CRenderable* renderable)
				{
					if (this->_gRef != NULL && this->m_postRender_CSceneManager_CRenderSystem_CRenderable_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong sm_j = (jlong) sm;
						jlong rsys_j = (jlong) rsys;
						jlong renderable_j = (jlong) renderable;
						jmethodID __method = __gr->getMethod("postRender_CSceneManager_CRenderSystem_CRenderable_callback");
						__env->CallVoidMethod(__obj, __method , sm_j, rsys_j, renderable_j);
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
						return this->CRenderableGeometryExtensionListener::postRender(sm, rsys, renderable);
					}
				}
				virtual void destroyed(EarthView::World::Graphic::CRenderable* renderable)
				{
					if (this->_gRef != NULL && this->m_destroyed_CRenderable_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong renderable_j = (jlong) renderable;
						jmethodID __method = __gr->getMethod("destroyed_CRenderable_callback");
						__env->CallVoidMethod(__obj, __method , renderable_j);
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
						return this->CRenderableGeometryExtensionListener::destroyed(renderable);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCRenderableGeometryExtensionListenerProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_preRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener *pObjectX = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableGeometryExtensionListenerProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::preRender(sm, rsys, renderable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->preRender(sm, rsys, renderable);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_register_1preRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableGeometryExtensionListenerProxy *pObjectX = (JCRenderableGeometryExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preRender_CSceneManager_CRenderSystem_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preRender_CSceneManager_CRenderSystem_CRenderable_callback", "(JJJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_preRender_1CSceneManager_1CRenderSystem_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener *pObjectX = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::preRender(sm, rsys, renderable);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_postRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener *pObjectX = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableGeometryExtensionListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::postRender(sm, rsys, renderable);
				}
				else
				{
					pObjectX->postRender(sm, rsys, renderable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_register_1postRender_1CSceneManager_1CRenderSystem_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableGeometryExtensionListenerProxy *pObjectX = (JCRenderableGeometryExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postRender_CSceneManager_CRenderSystem_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postRender_CSceneManager_CRenderSystem_CRenderable_callback", "(JJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_postRender_1CSceneManager_1CRenderSystem_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j, jlong rsys_j, jlong renderable_j)
			{
				EarthView::World::Graphic::CSceneManager *sm = (EarthView::World::Graphic::CSceneManager*) sm_j;
				EarthView::World::Graphic::CRenderSystem *rsys = (EarthView::World::Graphic::CRenderSystem*) rsys_j;
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener *pObjectX = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::postRender(sm, rsys, renderable);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_destroyed_1CRenderable(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderable_j)
			{
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener *pObjectX = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCRenderableGeometryExtensionListenerProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::destroyed(renderable);
				}
				else
				{
					pObjectX->destroyed(renderable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_register_1destroyed_1CRenderable(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCRenderableGeometryExtensionListenerProxy *pObjectX = (JCRenderableGeometryExtensionListenerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_destroyed_CRenderable_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"destroyed_CRenderable_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_RenderableGeometryExtensionListener_destroyed_1CRenderable_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong renderable_j)
			{
				EarthView::World::Graphic::CRenderable *renderable = (EarthView::World::Graphic::CRenderable*) renderable_j;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener *pObjectX = (EarthView::World::Geometry3D::CRenderableGeometryExtensionListener*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CRenderableGeometryExtensionListener::destroyed(renderable);
			}
			class JCMultiGeometry3DExtensionProxy : public EarthView::World::Geometry3D::CMultiGeometry3DExtension
			{
			 private:
				EarthView::World::Core::ev_string m_appendGeoObject_CGeoObject_callback;
				EarthView::World::Core::ev_string m_removeGeoObject_CGeoObject_callback;
				EarthView::World::Core::ev_string m_removeAllGeoObjects_void_callback;
				EarthView::World::Core::ev_string m_getGeoObject_ev_uint32_callback;
				EarthView::World::Core::ev_string m_getGeoObjectCount_void_callback;
				EarthView::World::Core::ev_string m_getDrawWireBoundingBox_void_callback;
				EarthView::World::Core::ev_string m_setDrawWireBoundingBox_ev_bool_callback;
				EarthView::World::Core::ev_string m_build_void_callback;
				EarthView::World::Core::ev_string m_build_CSubMeshDataVector_callback;
				EarthView::World::Core::ev_string m_render_void_callback;
				EarthView::World::Core::ev_string m_derender_void_callback;
				EarthView::World::Core::ev_string m_isRendering_void_callback;
				EarthView::World::Core::ev_string m_setVisible_ev_bool_callback;
				EarthView::World::Core::ev_string m_setDenseInterpolation_ev_bool_callback;
				EarthView::World::Core::ev_string m_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback;
				EarthView::World::Core::ev_string m_updateByCamera_CCamera_callback;
				EarthView::World::Core::ev_string m_getLabelVisibleDistance_void_callback;
				EarthView::World::Core::ev_string m_setLabelVisibleDistance_ev_real64_callback;
				EarthView::World::Core::ev_string m_setLabelProjOffsetMaxAngle_Real_callback;
				EarthView::World::Core::ev_string m_getLabelProjOffsetMaxAngle_void_callback;
				EarthView::World::Core::ev_string m_setLabelProjOffsetEnable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getLabelProjOffsetEnable_void_callback;
				EarthView::World::Core::ev_string m_setLabelProjOffset_Real_callback;
				EarthView::World::Core::ev_string m_getLabelProjOffset_void_callback;
				EarthView::World::Core::ev_string m_updateMaterial_void_callback;
				EarthView::World::Core::ev_string m_setVisibilityFilter_ev_bool_IntVector_callback;
				EarthView::World::Core::ev_string m_setObjectVisibility_ev_bool_CGeoObject_callback;
				EarthView::World::Core::ev_string m_getNode_void_callback;
				EarthView::World::Core::ev_string m_isLoaded_void_callback;
				EarthView::World::Core::ev_string m_isAttached_void_callback;
				EarthView::World::Core::ev_string m_load_void_callback;
				EarthView::World::Core::ev_string m_unload_void_callback;
				EarthView::World::Core::ev_string m_attachToNode_CNode_callback;
				EarthView::World::Core::ev_string m_detachFromNode_void_callback;
				EarthView::World::Core::ev_string m_attachToScene_void_callback;
				EarthView::World::Core::ev_string m_detachFromScene_void_callback;
				EarthView::World::Core::ev_string m_setUserData_CFeatureUserData_callback;
				EarthView::World::Core::ev_string m_setSelectable_ev_bool_callback;
				EarthView::World::Core::ev_string m_getSelectable_void_callback;
				EarthView::World::Core::ev_string m_update_void_callback;
				EarthView::World::Core::ev_string m_getLayer_void_callback;
				EarthView::World::Core::ev_string m_getDataset_void_callback;
				EarthView::World::Core::ev_string m_getID_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_setMatrix_CMatrix4_callback;
				EarthView::World::Core::ev_string m_getMatrix_void_callback;
				EarthView::World::Core::ev_string m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
				EarthView::World::Core::ev_string m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback;
			public:
				JCMultiGeometry3DExtensionProxy(EarthView::World::Core::CNameValuePairList *pList) : CMultiGeometry3DExtension(pList)
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
				void register_appendGeoObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_appendGeoObject_CGeoObject_callback = __method;
				}
				void register_removeGeoObject_CGeoObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeGeoObject_CGeoObject_callback = __method;
				}
				void register_removeAllGeoObjects_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllGeoObjects_void_callback = __method;
				}
				void register_getGeoObject_ev_uint32_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGeoObject_ev_uint32_callback = __method;
				}
				void register_getGeoObjectCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGeoObjectCount_void_callback = __method;
				}
				void register_getDrawWireBoundingBox_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDrawWireBoundingBox_void_callback = __method;
				}
				void register_setDrawWireBoundingBox_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDrawWireBoundingBox_ev_bool_callback = __method;
				}
				void register_build_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_build_void_callback = __method;
				}
				void register_build_CSubMeshDataVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_build_CSubMeshDataVector_callback = __method;
				}
				void register_render_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_render_void_callback = __method;
				}
				void register_derender_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_derender_void_callback = __method;
				}
				void register_isRendering_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isRendering_void_callback = __method;
				}
				void register_setVisible_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVisible_ev_bool_callback = __method;
				}
				void register_setDenseInterpolation_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setDenseInterpolation_ev_bool_callback = __method;
				}
				void register_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback = __method;
				}
				void register_updateByCamera_CCamera_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updateByCamera_CCamera_callback = __method;
				}
				void register_getLabelVisibleDistance_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLabelVisibleDistance_void_callback = __method;
				}
				void register_setLabelVisibleDistance_ev_real64_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLabelVisibleDistance_ev_real64_callback = __method;
				}
				void register_setLabelProjOffsetMaxAngle_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLabelProjOffsetMaxAngle_Real_callback = __method;
				}
				void register_getLabelProjOffsetMaxAngle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLabelProjOffsetMaxAngle_void_callback = __method;
				}
				void register_setLabelProjOffsetEnable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLabelProjOffsetEnable_ev_bool_callback = __method;
				}
				void register_getLabelProjOffsetEnable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLabelProjOffsetEnable_void_callback = __method;
				}
				void register_setLabelProjOffset_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setLabelProjOffset_Real_callback = __method;
				}
				void register_getLabelProjOffset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLabelProjOffset_void_callback = __method;
				}
				void register_updateMaterial_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_updateMaterial_void_callback = __method;
				}
				void register_setVisibilityFilter_ev_bool_IntVector_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setVisibilityFilter_ev_bool_IntVector_callback = __method;
				}
				void register_setObjectVisibility_ev_bool_CGeoObject_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setObjectVisibility_ev_bool_CGeoObject_callback = __method;
				}
				void register_getNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNode_void_callback = __method;
				}
				void register_isLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoaded_void_callback = __method;
				}
				void register_isAttached_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isAttached_void_callback = __method;
				}
				void register_load_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_void_callback = __method;
				}
				void register_unload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_void_callback = __method;
				}
				void register_attachToNode_CNode_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachToNode_CNode_callback = __method;
				}
				void register_detachFromNode_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachFromNode_void_callback = __method;
				}
				void register_attachToScene_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_attachToScene_void_callback = __method;
				}
				void register_detachFromScene_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_detachFromScene_void_callback = __method;
				}
				void register_setUserData_CFeatureUserData_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setUserData_CFeatureUserData_callback = __method;
				}
				void register_setSelectable_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setSelectable_ev_bool_callback = __method;
				}
				void register_getSelectable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSelectable_void_callback = __method;
				}
				void register_update_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_update_void_callback = __method;
				}
				void register_getLayer_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLayer_void_callback = __method;
				}
				void register_getDataset_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getDataset_void_callback = __method;
				}
				void register_getID_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getID_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_setMatrix_CMatrix4_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setMatrix_CMatrix4_callback = __method;
				}
				void register_getMatrix_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getMatrix_void_callback = __method;
				}
				void register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
				}
				void register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback = __method;
				}
				virtual ev_bool appendGeoObject(EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if (this->_gRef != NULL && this->m_appendGeoObject_CGeoObject_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_geoObject_j = (jlong) ref_geoObject;
						jmethodID __method = __gr->getMethod("appendGeoObject_CGeoObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , ref_geoObject_j);
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
						return this->CMultiGeometry3DExtension::appendGeoObject(ref_geoObject);
					}
				}
				virtual ev_bool removeGeoObject(EarthView::World::Spatial::CGeoObject* geoObject)
				{
					if (this->_gRef != NULL && this->m_removeGeoObject_CGeoObject_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong geoObject_j = (jlong) geoObject;
						jmethodID __method = __gr->getMethod("removeGeoObject_CGeoObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , geoObject_j);
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
						return this->CMultiGeometry3DExtension::removeGeoObject(geoObject);
					}
				}
				virtual void removeAllGeoObjects()
				{
					if (this->_gRef != NULL && this->m_removeAllGeoObjects_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("removeAllGeoObjects_void_callback");
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
						return this->CMultiGeometry3DExtension::removeAllGeoObjects();
					}
				}
				virtual EarthView::World::Spatial::CGeoObject* getGeoObject(ev_uint32 index) const
				{
					if (this->_gRef != NULL && this->m_getGeoObject_ev_uint32_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong index_j = (jlong) index;
						jmethodID __method = __gr->getMethod("getGeoObject_ev_uint32_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::CGeoObject *__values1 = (EarthView::World::Spatial::CGeoObject*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMultiGeometry3DExtension::getGeoObject(index);
					}
				}
				virtual ev_uint64 getGeoObjectCount() const
				{
					if (this->_gRef != NULL && this->m_getGeoObjectCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getGeoObjectCount_void_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						const char* values_ch = __env->GetStringUTFChars(__values1_j,JNI_FALSE);
						EVString __values1_s = values_ch;
						__env->ReleaseStringUTFChars(__values1_j,values_ch);
						ev_uint64 __values1 = __values1_s.getUint64();
						return __values1;
					}
					else
					{
						return this->CMultiGeometry3DExtension::getGeoObjectCount();
					}
				}
				virtual ev_bool getDrawWireBoundingBox() const
				{
					if (this->_gRef != NULL && this->m_getDrawWireBoundingBox_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDrawWireBoundingBox_void_callback");
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
						return this->CMultiGeometry3DExtension::getDrawWireBoundingBox();
					}
				}
				virtual void setDrawWireBoundingBox(ev_bool isdraw)
				{
					if (this->_gRef != NULL && this->m_setDrawWireBoundingBox_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean isdraw_j = (jboolean) isdraw;
						jmethodID __method = __gr->getMethod("setDrawWireBoundingBox_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , isdraw_j);
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
						return this->CMultiGeometry3DExtension::setDrawWireBoundingBox(isdraw);
					}
				}
				virtual void build()
				{
					if (this->_gRef != NULL && this->m_build_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("build_void_callback");
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
						return this->CMultiGeometry3DExtension::build();
					}
				}
				virtual void build(EarthView::World::Geometry3D::CSubMeshDataVector& subMeshData)
				{
					if (this->_gRef != NULL && this->m_build_CSubMeshDataVector_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong subMeshData_j = (jlong) &subMeshData;
						jmethodID __method = __gr->getMethod("build_CSubMeshDataVector_callback");
						__env->CallVoidMethod(__obj, __method , subMeshData_j);
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
						return this->CMultiGeometry3DExtension::build(subMeshData);
					}
				}
				virtual void render()
				{
					if (this->_gRef != NULL && this->m_render_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("render_void_callback");
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
						return this->CMultiGeometry3DExtension::render();
					}
				}
				virtual void derender()
				{
					if (this->_gRef != NULL && this->m_derender_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("derender_void_callback");
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
						return this->CMultiGeometry3DExtension::derender();
					}
				}
				virtual ev_bool isRendering() const
				{
					if (this->_gRef != NULL && this->m_isRendering_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isRendering_void_callback");
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
						return this->CMultiGeometry3DExtension::isRendering();
					}
				}
				virtual void setVisible(ev_bool visible)
				{
					if (this->_gRef != NULL && this->m_setVisible_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean visible_j = (jboolean) visible;
						jmethodID __method = __gr->getMethod("setVisible_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , visible_j);
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
						return this->CMultiGeometry3DExtension::setVisible(visible);
					}
				}
				virtual void setDenseInterpolation(ev_bool dense)
				{
					if (this->_gRef != NULL && this->m_setDenseInterpolation_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean dense_j = (jboolean) dense;
						jmethodID __method = __gr->getMethod("setDenseInterpolation_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , dense_j);
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
						return this->CMultiGeometry3DExtension::setDenseInterpolation(dense);
					}
				}
				virtual void setUserData(EarthView::World::Spatial3D::CFeatureUserData& userData)
				{
					if (this->_gRef != NULL && this->m_setUserData_CFeatureUserData_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong userData_j = (jlong) &userData;
						jmethodID __method = __gr->getMethod("setUserData_CFeatureUserData_callback");
						__env->CallVoidMethod(__obj, __method , userData_j);
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
						return this->CMultiGeometry3DExtension::setUserData(userData);
					}
				}
				virtual void setSelectable(ev_bool selectable)
				{
					if (this->_gRef != NULL && this->m_setSelectable_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean selectable_j = (jboolean) selectable;
						jmethodID __method = __gr->getMethod("setSelectable_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , selectable_j);
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
						return this->CMultiGeometry3DExtension::setSelectable(selectable);
					}
				}
				virtual void updateLabel(ev_bool resetTextStyle, ev_bool derenderTxt, ev_bool reCreate, ev_bool attachLabel, EarthView::World::Graphic::CCamera* pCamera)
				{
					if (this->_gRef != NULL && this->m_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean resetTextStyle_j = (jboolean) resetTextStyle;
						jboolean derenderTxt_j = (jboolean) derenderTxt;
						jboolean reCreate_j = (jboolean) reCreate;
						jboolean attachLabel_j = (jboolean) attachLabel;
						jlong pCamera_j = (jlong) pCamera;
						jmethodID __method = __gr->getMethod("updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , resetTextStyle_j, derenderTxt_j, reCreate_j, attachLabel_j, pCamera_j);
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
						return this->CMultiGeometry3DExtension::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
					}
				}
				virtual void updateByCamera(EarthView::World::Graphic::CCamera* pCamera)
				{
					if (this->_gRef != NULL && this->m_updateByCamera_CCamera_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong pCamera_j = (jlong) pCamera;
						jmethodID __method = __gr->getMethod("updateByCamera_CCamera_callback");
						__env->CallVoidMethod(__obj, __method , pCamera_j);
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
						return this->CMultiGeometry3DExtension::updateByCamera(pCamera);
					}
				}
				virtual ev_real64 getLabelVisibleDistance()
				{
					if (this->_gRef != NULL && this->m_getLabelVisibleDistance_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLabelVisibleDistance_void_callback");
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
						return this->CMultiGeometry3DExtension::getLabelVisibleDistance();
					}
				}
				virtual void setLabelVisibleDistance(ev_real64 dis)
				{
					if (this->_gRef != NULL && this->m_setLabelVisibleDistance_ev_real64_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble dis_j = (jdouble) dis;
						jmethodID __method = __gr->getMethod("setLabelVisibleDistance_ev_real64_callback");
						__env->CallVoidMethod(__obj, __method , dis_j);
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
						return this->CMultiGeometry3DExtension::setLabelVisibleDistance(dis);
					}
				}
				virtual void setLabelProjOffsetMaxAngle(Real angle)
				{
					if (this->_gRef != NULL && this->m_setLabelProjOffsetMaxAngle_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble angle_j = (jdouble) angle;
						jmethodID __method = __gr->getMethod("setLabelProjOffsetMaxAngle_Real_callback");
						__env->CallVoidMethod(__obj, __method , angle_j);
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
						return this->CMultiGeometry3DExtension::setLabelProjOffsetMaxAngle(angle);
					}
				}
				virtual Real getLabelProjOffsetMaxAngle() const
				{
					if (this->_gRef != NULL && this->m_getLabelProjOffsetMaxAngle_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLabelProjOffsetMaxAngle_void_callback");
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
						return this->CMultiGeometry3DExtension::getLabelProjOffsetMaxAngle();
					}
				}
				virtual void setLabelProjOffsetEnable(ev_bool useProjOffset)
				{
					if (this->_gRef != NULL && this->m_setLabelProjOffsetEnable_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean useProjOffset_j = (jboolean) useProjOffset;
						jmethodID __method = __gr->getMethod("setLabelProjOffsetEnable_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , useProjOffset_j);
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
						return this->CMultiGeometry3DExtension::setLabelProjOffsetEnable(useProjOffset);
					}
				}
				virtual ev_bool getLabelProjOffsetEnable() const
				{
					if (this->_gRef != NULL && this->m_getLabelProjOffsetEnable_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLabelProjOffsetEnable_void_callback");
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
						return this->CMultiGeometry3DExtension::getLabelProjOffsetEnable();
					}
				}
				virtual void setLabelProjOffset(Real offset)
				{
					if (this->_gRef != NULL && this->m_setLabelProjOffset_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jdouble offset_j = (jdouble) offset;
						jmethodID __method = __gr->getMethod("setLabelProjOffset_Real_callback");
						__env->CallVoidMethod(__obj, __method , offset_j);
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
						return this->CMultiGeometry3DExtension::setLabelProjOffset(offset);
					}
				}
				virtual Real getLabelProjOffset() const
				{
					if (this->_gRef != NULL && this->m_getLabelProjOffset_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLabelProjOffset_void_callback");
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
						return this->CMultiGeometry3DExtension::getLabelProjOffset();
					}
				}
				virtual ev_bool updateMaterial()
				{
					if (this->_gRef != NULL && this->m_updateMaterial_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("updateMaterial_void_callback");
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
						return this->CMultiGeometry3DExtension::updateMaterial();
					}
				}
				virtual ev_bool setVisibilityFilter(ev_bool visible, const EarthView::World::Core::IntVector& ids)
				{
					if (this->_gRef != NULL && this->m_setVisibilityFilter_ev_bool_IntVector_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean visible_j = (jboolean) visible;
						jlong ids_j = (jlong) &ids;
						jmethodID __method = __gr->getMethod("setVisibilityFilter_ev_bool_IntVector_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, ids_j);
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
						return this->CMultiGeometry3DExtension::setVisibilityFilter(visible, ids);
					}
				}
				virtual ev_bool setObjectVisibility(ev_bool visible, EarthView::World::Spatial::CGeoObject* ref_geoObject)
				{
					if (this->_gRef != NULL && this->m_setObjectVisibility_ev_bool_CGeoObject_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean visible_j = (jboolean) visible;
						jlong ref_geoObject_j = (jlong) ref_geoObject;
						jmethodID __method = __gr->getMethod("setObjectVisibility_ev_bool_CGeoObject_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , visible_j, ref_geoObject_j);
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
						return this->CMultiGeometry3DExtension::setObjectVisibility(visible, ref_geoObject);
					}
				}
				virtual EarthView::World::Graphic::CNode* getNode()
				{
					if (this->_gRef != NULL && this->m_getNode_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNode_void_callback");
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
						return this->CMultiGeometry3DExtension::getNode();
					}
				}
				virtual ev_bool isLoaded()
				{
					if (this->_gRef != NULL && this->m_isLoaded_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isLoaded_void_callback");
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
						return this->CMultiGeometry3DExtension::isLoaded();
					}
				}
				virtual ev_bool isAttached()
				{
					if (this->_gRef != NULL && this->m_isAttached_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isAttached_void_callback");
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
						return this->CMultiGeometry3DExtension::isAttached();
					}
				}
				virtual ev_bool load()
				{
					if (this->_gRef != NULL && this->m_load_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("load_void_callback");
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
						return this->CMultiGeometry3DExtension::load();
					}
				}
				virtual ev_bool unload()
				{
					if (this->_gRef != NULL && this->m_unload_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("unload_void_callback");
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
						return this->CMultiGeometry3DExtension::unload();
					}
				}
				virtual ev_bool attachToNode(EarthView::World::Graphic::CNode* n)
				{
					if (this->_gRef != NULL && this->m_attachToNode_CNode_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong n_j = (jlong) n;
						jmethodID __method = __gr->getMethod("attachToNode_CNode_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , n_j);
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
						return this->CMultiGeometry3DExtension::attachToNode(n);
					}
				}
				virtual EarthView::World::Graphic::CNode* detachFromNode()
				{
					if (this->_gRef != NULL && this->m_detachFromNode_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("detachFromNode_void_callback");
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
						return this->CMultiGeometry3DExtension::detachFromNode();
					}
				}
				virtual ev_bool attachToScene()
				{
					if (this->_gRef != NULL && this->m_attachToScene_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("attachToScene_void_callback");
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
						return this->CMultiGeometry3DExtension::attachToScene();
					}
				}
				virtual ev_bool detachFromScene()
				{
					if (this->_gRef != NULL && this->m_detachFromScene_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("detachFromScene_void_callback");
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
						return this->CMultiGeometry3DExtension::detachFromScene();
					}
				}
				virtual ev_bool getSelectable()
				{
					if (this->_gRef != NULL && this->m_getSelectable_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getSelectable_void_callback");
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
						return this->CMultiGeometry3DExtension::getSelectable();
					}
				}
				virtual ev_bool update()
				{
					if (this->_gRef != NULL && this->m_update_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("update_void_callback");
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
						return this->CMultiGeometry3DExtension::update();
					}
				}
				virtual EarthView::World::Spatial3D::Atlas::IGlobeLayer* getLayer()
				{
					if (this->_gRef != NULL && this->m_getLayer_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLayer_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial3D::Atlas::IGlobeLayer *__values1 = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMultiGeometry3DExtension::getLayer();
					}
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if (this->_gRef != NULL && this->m_getDataset_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getDataset_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::GeoDataset::IDataset *__values1 = (EarthView::World::Spatial::GeoDataset::IDataset*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMultiGeometry3DExtension::getDataset();
					}
				}
				virtual ev_uint32 getID()
				{
					if (this->_gRef != NULL && this->m_getID_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getID_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_uint32 __values1 = (ev_uint32) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMultiGeometry3DExtension::getID();
					}
				}
				virtual EVString getName()
				{
					if (this->_gRef != NULL && this->m_getName_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getName_void_callback");
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
						return this->CMultiGeometry3DExtension::getName();
					}
				}
				virtual void setMatrix(const EarthView::World::Spatial::Math::CMatrix4& m)
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
						jlong m_j = (jlong) &m;
						jmethodID __method = __gr->getMethod("setMatrix_CMatrix4_callback");
						__env->CallVoidMethod(__obj, __method , m_j);
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
						return this->CMultiGeometry3DExtension::setMatrix(m);
					}
				}
				virtual EarthView::World::Spatial::Math::CMatrix4 getMatrix()
				{
					if (this->_gRef != NULL && this->m_getMatrix_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getMatrix_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Spatial::Math::CMatrix4 __values1 = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMultiGeometry3DExtension::getMatrix();
					}
				}
				virtual void setPosition(ev_real64 latitude, ev_real64 longitude, ev_real64 altitude, const EarthView::World::Spatial::Math::CVector3& scale, const EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if (this->_gRef != NULL && this->m_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jdouble longitude_j = (jdouble) longitude;
						jdouble altitude_j = (jdouble) altitude;
						jlong scale_j = (jlong) &scale;
						jlong qua_j = (jlong) &qua;
						jmethodID __method = __gr->getMethod("setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
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
						return this->CMultiGeometry3DExtension::setPosition(latitude, longitude, altitude, scale, qua);
					}
				}
				virtual void getPosition(ev_real64& latitude, ev_real64& longitude, ev_real64& altitude, EarthView::World::Spatial::Math::CVector3& scale, EarthView::World::Spatial::Math::CQuaternion& qua)
				{
					if (this->_gRef != NULL && this->m_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong latitude_j = (jlong) &latitude;
						jlong longitude_j = (jlong) &longitude;
						jlong altitude_j = (jlong) &altitude;
						jlong scale_j = (jlong) &scale;
						jlong qua_j = (jlong) &qua;
						jmethodID __method = __gr->getMethod("getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback");
						__env->CallVoidMethod(__obj, __method , latitude_j, longitude_j, altitude_j, scale_j, qua_j);
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
						return this->CMultiGeometry3DExtension::getPosition(latitude, longitude, altitude, scale, qua);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMultiGeometry3DExtensionProxy);
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener* __values1 = pObjectX->getListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setListener_1CMultiGeometry3DExtensionListener(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_listener_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener *ref_listener = (EarthView::World::Geometry3D::CMultiGeometry3DExtensionListener*) ref_listener_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setListener(ref_listener);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_appendGeoObject_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::appendGeoObject(ref_geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->appendGeoObject(ref_geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1appendGeoObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_appendGeoObject_CGeoObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"appendGeoObject_CGeoObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_appendGeoObject_1CGeoObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::appendGeoObject(ref_geoObject);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_removeGeoObject_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *geoObject = (EarthView::World::Spatial::CGeoObject*) geoObject_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeGeoObject(geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->removeGeoObject(geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1removeGeoObject_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeGeoObject_CGeoObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeGeoObject_CGeoObject_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_removeGeoObject_1CGeoObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong geoObject_j)
			{
				EarthView::World::Spatial::CGeoObject *geoObject = (EarthView::World::Spatial::CGeoObject*) geoObject_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeGeoObject(geoObject);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_removeAllGeoObjects_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeAllGeoObjects();
				}
				else
				{
					pObjectX->removeAllGeoObjects();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1removeAllGeoObjects_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllGeoObjects_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllGeoObjects_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_removeAllGeoObjects_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::removeAllGeoObjects();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getGeoObject_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->getGeoObject(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getGeoObject_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGeoObject_ev_uint32_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObject_ev_uint32_callback", "(J)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getGeoObject_1ev_1uint32_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				EarthView::World::Spatial::CGeoObject* __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObject(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getGeoObjectCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_uint64 __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObjectCount();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
				else
				{
					ev_uint64 __values1 = pObjectX->getGeoObjectCount();
					EarthView::World::Core::ev_string __values1_ch;
					__values1_ch<<__values1;
					jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getGeoObjectCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGeoObjectCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGeoObjectCount_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getGeoObjectCount_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getGeoObjectCount();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getGeoEntity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				EarthView::World::Geometry3D::CGeoEntity* __values1 = pObjectX->getGeoEntity();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getDrawWireBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getDrawWireBoundingBox();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getDrawWireBoundingBox();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getDrawWireBoundingBox_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDrawWireBoundingBox_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDrawWireBoundingBox_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getDrawWireBoundingBox_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getDrawWireBoundingBox();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setDrawWireBoundingBox_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isdraw_j)
			{
				ev_bool isdraw = (ev_bool) isdraw_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDrawWireBoundingBox(isdraw);
				}
				else
				{
					pObjectX->setDrawWireBoundingBox(isdraw);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setDrawWireBoundingBox_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDrawWireBoundingBox_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDrawWireBoundingBox_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setDrawWireBoundingBox_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isdraw_j)
			{
				ev_bool isdraw = (ev_bool) isdraw_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDrawWireBoundingBox(isdraw);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_draw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->draw();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_build_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build();
				}
				else
				{
					pObjectX->build();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1build_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_build_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"build_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_build_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_build_1CSubMeshDataVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subMeshData_j)
			{
				EarthView::World::Geometry3D::CSubMeshDataVector &subMeshData = *(EarthView::World::Geometry3D::CSubMeshDataVector*) subMeshData_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build(subMeshData);
				}
				else
				{
					pObjectX->build(subMeshData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1build_1CSubMeshDataVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_build_CSubMeshDataVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"build_CSubMeshDataVector_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_build_1CSubMeshDataVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong subMeshData_j)
			{
				EarthView::World::Geometry3D::CSubMeshDataVector &subMeshData = *(EarthView::World::Geometry3D::CSubMeshDataVector*) subMeshData_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::build(subMeshData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_render_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::render();
				}
				else
				{
					pObjectX->render();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1render_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_render_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"render_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_render_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::render();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_derender_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::derender();
				}
				else
				{
					pObjectX->derender();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1derender_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_derender_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"derender_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_derender_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::derender();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_isRendering_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isRendering();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isRendering();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1isRendering_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isRendering_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isRendering_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_isRendering_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isRendering();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setVisible_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisible(visible);
				}
				else
				{
					pObjectX->setVisible(visible);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setVisible_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVisible_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVisible_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setVisible_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisible(visible);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setDenseInterpolation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean dense_j)
			{
				ev_bool dense = (ev_bool) dense_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDenseInterpolation(dense);
				}
				else
				{
					pObjectX->setDenseInterpolation(dense);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setDenseInterpolation_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setDenseInterpolation_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setDenseInterpolation_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setDenseInterpolation_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean dense_j)
			{
				ev_bool dense = (ev_bool) dense_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setDenseInterpolation(dense);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setUserData_1CFeatureUserData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userData_j)
			{
				EarthView::World::Spatial3D::CFeatureUserData &userData = *(EarthView::World::Spatial3D::CFeatureUserData*) userData_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setUserData(userData);
				}
				else
				{
					pObjectX->setUserData(userData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setUserData_1CFeatureUserData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setUserData_CFeatureUserData_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setUserData_CFeatureUserData_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setUserData_1CFeatureUserData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userData_j)
			{
				EarthView::World::Spatial3D::CFeatureUserData &userData = *(EarthView::World::Spatial3D::CFeatureUserData*) userData_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setUserData(userData);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getUserData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				const EarthView::World::Spatial3D::CFeatureUserData& __values1 = pObjectX->getUserData();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setSelectable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
			{
				ev_bool selectable = (ev_bool) selectable_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setSelectable(selectable);
				}
				else
				{
					pObjectX->setSelectable(selectable);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setSelectable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setSelectable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setSelectable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setSelectable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean selectable_j)
			{
				ev_bool selectable = (ev_bool) selectable_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setSelectable(selectable);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getSceneNodePostion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getSceneNodePostion();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setSceneNodePostion_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &pos = *(EarthView::World::Spatial::Math::CVector3*) pos_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setSceneNodePostion(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setAltitudePrecision_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint precision_j)
			{
				ev_int32 precision = (ev_int32) precision_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setAltitudePrecision(precision);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setProjOffsetMaxAngle_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
			{
				Real angle = (Real) angle_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setProjOffsetMaxAngle(angle);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getProjOffsetMaxAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				Real __values1 = pObjectX->getProjOffsetMaxAngle();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setStencilEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useStencil_j)
			{
				ev_bool useStencil = (ev_bool) useStencil_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setStencilEnable(useStencil);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getStencilEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->getStencilEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setProjOffsetEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useProjOffset_j)
			{
				ev_bool useProjOffset = (ev_bool) useProjOffset_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setProjOffsetEnable(useProjOffset);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getProjOffsetEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->getProjOffsetEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setProjOffset_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offset_j)
			{
				Real offset = (Real) offset_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setProjOffset(offset);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getProjOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				Real __values1 = pObjectX->getProjOffset();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getRenderableListener_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				EarthView::World::Geometry3D::CRenderableGeometryExtensionListener* __values1 = pObjectX->getRenderableListener();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLevel_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j)
			{
				ev_int32 level = (ev_int32) level_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setLevel(level);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setRoadMinMaxVisibleDistance_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble min_j, jdouble max_j)
			{
				Real min = (Real) min_j;
				Real max = (Real) max_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->setRoadMinMaxVisibleDistance(min, max);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_exist_1CMultiGeometry3DExtension(JNIEnv *__env , jclass __clazz, jlong extension_j)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *extension = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) extension_j;
				bool __values1 = EarthView::World::Geometry3D::CMultiGeometry3DExtension::exist(extension);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_updateLabel_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean resetTextStyle_j, jboolean derenderTxt_j, jboolean reCreate_j, jboolean attachLabel_j, jlong pCamera_j)
			{
				ev_bool resetTextStyle = (ev_bool) resetTextStyle_j;
				ev_bool derenderTxt = (ev_bool) derenderTxt_j;
				ev_bool reCreate = (ev_bool) reCreate_j;
				ev_bool attachLabel = (ev_bool) attachLabel_j;
				EarthView::World::Graphic::CCamera *pCamera = (EarthView::World::Graphic::CCamera*) pCamera_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
				}
				else
				{
					pObjectX->updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1updateLabel_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updateLabel_ev_bool_ev_bool_ev_bool_ev_bool_CCamera_callback", "(ZZZZJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_updateLabel_1ev_1bool_1ev_1bool_1ev_1bool_1ev_1bool_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean resetTextStyle_j, jboolean derenderTxt_j, jboolean reCreate_j, jboolean attachLabel_j, jlong pCamera_j)
			{
				ev_bool resetTextStyle = (ev_bool) resetTextStyle_j;
				ev_bool derenderTxt = (ev_bool) derenderTxt_j;
				ev_bool reCreate = (ev_bool) reCreate_j;
				ev_bool attachLabel = (ev_bool) attachLabel_j;
				EarthView::World::Graphic::CCamera *pCamera = (EarthView::World::Graphic::CCamera*) pCamera_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateLabel(resetTextStyle, derenderTxt, reCreate, attachLabel, pCamera);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_updateByCamera_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pCamera_j)
			{
				EarthView::World::Graphic::CCamera *pCamera = (EarthView::World::Graphic::CCamera*) pCamera_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateByCamera(pCamera);
				}
				else
				{
					pObjectX->updateByCamera(pCamera);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1updateByCamera_1CCamera(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updateByCamera_CCamera_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updateByCamera_CCamera_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_updateByCamera_1CCamera_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pCamera_j)
			{
				EarthView::World::Graphic::CCamera *pCamera = (EarthView::World::Graphic::CCamera*) pCamera_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateByCamera(pCamera);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelVisibleDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_real64 __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelVisibleDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					ev_real64 __values1 = pObjectX->getLabelVisibleDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getLabelVisibleDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLabelVisibleDistance_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLabelVisibleDistance_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelVisibleDistance_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_real64 __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelVisibleDistance();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelVisibleDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dis_j)
			{
				ev_real64 dis = (ev_real64) dis_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelVisibleDistance(dis);
				}
				else
				{
					pObjectX->setLabelVisibleDistance(dis);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setLabelVisibleDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLabelVisibleDistance_ev_real64_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLabelVisibleDistance_ev_real64_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelVisibleDistance_1ev_1real64_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dis_j)
			{
				ev_real64 dis = (ev_real64) dis_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelVisibleDistance(dis);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelProjOffsetMaxAngle_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
			{
				Real angle = (Real) angle_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetMaxAngle(angle);
				}
				else
				{
					pObjectX->setLabelProjOffsetMaxAngle(angle);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setLabelProjOffsetMaxAngle_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLabelProjOffsetMaxAngle_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLabelProjOffsetMaxAngle_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelProjOffsetMaxAngle_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
			{
				Real angle = (Real) angle_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetMaxAngle(angle);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelProjOffsetMaxAngle_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetMaxAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLabelProjOffsetMaxAngle();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getLabelProjOffsetMaxAngle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLabelProjOffsetMaxAngle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLabelProjOffsetMaxAngle_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelProjOffsetMaxAngle_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetMaxAngle();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelProjOffsetEnable_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useProjOffset_j)
			{
				ev_bool useProjOffset = (ev_bool) useProjOffset_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetEnable(useProjOffset);
				}
				else
				{
					pObjectX->setLabelProjOffsetEnable(useProjOffset);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setLabelProjOffsetEnable_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLabelProjOffsetEnable_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLabelProjOffsetEnable_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelProjOffsetEnable_1ev_1bool_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean useProjOffset_j)
			{
				ev_bool useProjOffset = (ev_bool) useProjOffset_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffsetEnable(useProjOffset);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelProjOffsetEnable_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->getLabelProjOffsetEnable();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getLabelProjOffsetEnable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLabelProjOffsetEnable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLabelProjOffsetEnable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelProjOffsetEnable_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffsetEnable();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelProjOffset_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offset_j)
			{
				Real offset = (Real) offset_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffset(offset);
				}
				else
				{
					pObjectX->setLabelProjOffset(offset);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setLabelProjOffset_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setLabelProjOffset_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setLabelProjOffset_Real_callback", "(D)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setLabelProjOffset_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble offset_j)
			{
				Real offset = (Real) offset_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setLabelProjOffset(offset);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelProjOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					Real __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				else
				{
					Real __values1 = pObjectX->getLabelProjOffset();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getLabelProjOffset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLabelProjOffset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLabelProjOffset_void_callback", "()D");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getLabelProjOffset_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				Real __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getLabelProjOffset();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_updateMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateMaterial();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->updateMaterial();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1updateMaterial_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_updateMaterial_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"updateMaterial_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_updateMaterial_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::updateMaterial();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_attachStatisticsExtension_1CGeoStatistics3DExtension(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong statisticsEx_j)
			{
				EarthView::World::Geometry3D::CGeoStatistics3DExtension *statisticsEx = (EarthView::World::Geometry3D::CGeoStatistics3DExtension*) statisticsEx_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				pObjectX->attachStatisticsExtension(statisticsEx);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getStatisticsExtension_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				EarthView::World::Geometry3D::CGeoStatistics3DExtension* __values1 = pObjectX->getStatisticsExtension();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_updateStatisticsExtension_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean derenderEx_j, jboolean reBuildEx_j, jboolean renderEx_j)
			{
				ev_bool derenderEx = (ev_bool) derenderEx_j;
				ev_bool reBuildEx = (ev_bool) reBuildEx_j;
				ev_bool renderEx = (ev_bool) renderEx_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateStatisticsExtension(derenderEx, reBuildEx, renderEx);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setVisibilityFilter_1ev_1bool_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ids_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				const EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisibilityFilter(visible, ids);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->setVisibilityFilter(visible, ids);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setVisibilityFilter_1ev_1bool_1IntVector(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setVisibilityFilter_ev_bool_IntVector_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setVisibilityFilter_ev_bool_IntVector_callback", "(ZJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setVisibilityFilter_1ev_1bool_1IntVector_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ids_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				const EarthView::World::Core::IntVector &ids = *(EarthView::World::Core::IntVector*) ids_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setVisibilityFilter(visible, ids);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setObjectVisibility_1ev_1bool_1CGeoObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ref_geoObject_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setObjectVisibility(visible, ref_geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->setObjectVisibility(visible, ref_geoObject);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setObjectVisibility_1ev_1bool_1CGeoObject(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setObjectVisibility_ev_bool_CGeoObject_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setObjectVisibility_ev_bool_CGeoObject_callback", "(ZJ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_setObjectVisibility_1ev_1bool_1CGeoObject_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean visible_j, jlong ref_geoObject_j)
			{
				ev_bool visible = (ev_bool) visible_j;
				EarthView::World::Spatial::CGeoObject *ref_geoObject = (EarthView::World::Spatial::CGeoObject*) ref_geoObject_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::setObjectVisibility(visible, ref_geoObject);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->getNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_getNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::getNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_isLoaded_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isLoaded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isLoaded();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_isLoaded_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isLoaded();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_isAttached_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isAttached();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->isAttached();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1isAttached_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isAttached_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isAttached_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_isAttached_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::isAttached();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::load();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->load();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_load_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::load();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::unload();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->unload();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_unload_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::unload();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_attachToNode_1CNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToNode(n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->attachToNode(n);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1attachToNode_1CNode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachToNode_CNode_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachToNode_CNode_callback", "(J)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_attachToNode_1CNode_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				EarthView::World::Graphic::CNode *n = (EarthView::World::Graphic::CNode*) n_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToNode(n);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_detachFromNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CNode* __values1 = pObjectX->detachFromNode();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1detachFromNode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachFromNode_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachFromNode_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_detachFromNode_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				EarthView::World::Graphic::CNode* __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromNode();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_attachToScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->attachToScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1attachToScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_attachToScene_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"attachToScene_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_attachToScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::attachToScene();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_detachFromScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMultiGeometry3DExtensionProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->detachFromScene();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1detachFromScene_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_detachFromScene_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"detachFromScene_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_detachFromScene_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Geometry3D::CMultiGeometry3DExtension::detachFromScene();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_appendMovableObject_1CMovableObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mo_j)
			{
				EarthView::World::Graphic::CMovableObject *mo = (EarthView::World::Graphic::CMovableObject*) mo_j;
				EarthView::World::Geometry3D::CMultiGeometry3DExtension *pObjectX = (EarthView::World::Geometry3D::CMultiGeometry3DExtension*) pObjXXXX;
				ev_bool __values1 = pObjectX->appendMovableObject(mo);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getSelectable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSelectable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSelectable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1update_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_update_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"update_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getLayer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLayer_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLayer_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getDataset_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getDataset_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getDataset_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getID_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getID_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getName_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getName_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getMatrix_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getMatrix_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1setPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(DDDJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_MultiGeometry3DExtension_register_1getPosition_1ev_1real64_1ev_1real64_1ev_1real64_1CVector3_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMultiGeometry3DExtensionProxy *pObjectX = (JCMultiGeometry3DExtensionProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getPosition_ev_real64_ev_real64_ev_real64_CVector3_CQuaternion_callback", "(JJJJJ)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeometryExtensionBackgroundWorkManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager* __values1 = EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeometryExtensionBackgroundWorkManager_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager::releaseSingleton();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_GeometryExtensionBackgroundWorkManager_init_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager *pObjectX = (EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager*) pObjXXXX;
				pObjectX->init();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_GeometryExtensionBackgroundWorkManager_getWorkQuque_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager *pObjectX = (EarthView::World::Geometry3D::CGeometryExtensionBackgroundWorkManager*) pObjXXXX;
				EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getWorkQuque();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
