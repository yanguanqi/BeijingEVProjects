/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/mesh.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_InstanceTechniuqeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					IT_None,
					IT_ShaderBased,
					IT_HardwareBased,
					IT_HardwareBasedAndShaderBased
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMeshPtr *pObjectX = (EarthView::World::Graphic::CMeshPtr*) pObjXXXX;
				EarthView::World::Graphic::CMesh* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshPtr_OperatorAssign_1ResourcePtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Graphic::CMeshPtr& pObjectX = *(EarthView::World::Graphic::CMeshPtr*) pObjXXXX;
				const EarthView::World::Graphic::ResourcePtr &r = *(EarthView::World::Graphic::ResourcePtr*) r_j;
				pObjectX = r;
				EarthView::World::Graphic::CMeshPtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_MeshLodUsage_get_1userValue_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->userValue);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshLodUsage_set_1userValue_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				pObjectX->userValue = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_MeshLodUsage_get_1value_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->value);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshLodUsage_set_1value_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				pObjectX->value = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MeshLodUsage_get_1manualName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->manualName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshLodUsage_set_1manualName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->manualName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_MeshLodUsage_get_1manualGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->manualGroup;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshLodUsage_set_1manualGroup_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->manualGroup = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshLodUsage_get_1manualMesh_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->manualMesh);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshLodUsage_set_1manualMesh_1CMeshPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				pObjectX->manualMesh = *(EarthView::World::Graphic::CMeshPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_MeshLodUsage_get_1edgeData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->edgeData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_MeshLodUsage_set_1edgeData_1CEdgeData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::MeshLodUsage *pObjectX = (EarthView::World::Graphic::MeshLodUsage*)pObjXXXX;
				pObjectX->edgeData = (EarthView::World::Graphic::CEdgeData*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexMap_push_1back_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				ev_uint16 t = (ev_uint16) t_j;
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexMap_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexMap_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexMap_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexMap_insert_1ev_1uint32_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jint t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_uint16 t = (ev_uint16) t_j;
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexMap_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_IndexMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexMap_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::IndexMap& pObjectX = *(EarthView::World::Graphic::IndexMap*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_uint16& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexMap_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexMap_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexMap_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IndexMap *pObjectX = (EarthView::World::Graphic::IndexMap*) pObjXXXX;
				pObjectX->clear();
			}
			class JCMeshProxy : public EarthView::World::Graphic::CMesh
			{
			 private:
				EarthView::World::Core::ev_string m_createAnimation_EVString_Real_callback;
				EarthView::World::Core::ev_string m_getAnimation_EVString_callback;
				EarthView::World::Core::ev_string m__getAnimationImpl_EVString_callback;
				EarthView::World::Core::ev_string m_hasAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_removeAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_getNumAnimations_void_callback;
				EarthView::World::Core::ev_string m_getAnimation_ev_uint16_callback;
				EarthView::World::Core::ev_string m_removeAllAnimations_void_callback;
				EarthView::World::Core::ev_string m_getSharedVertexDataAnimationType_void_callback;
				EarthView::World::Core::ev_string m_preLoadImpl_void_callback;
				EarthView::World::Core::ev_string m_postLoadImpl_void_callback;
				EarthView::World::Core::ev_string m_preUnloadImpl_void_callback;
				EarthView::World::Core::ev_string m_postUnloadImpl_void_callback;
				EarthView::World::Core::ev_string m_prepareImpl_void_callback;
				EarthView::World::Core::ev_string m_unprepareImpl_void_callback;
				EarthView::World::Core::ev_string m_loadImpl_void_callback;
				EarthView::World::Core::ev_string m_unloadImpl_void_callback;
				EarthView::World::Core::ev_string m_calculateSize_void_callback;
				EarthView::World::Core::ev_string m_prepare_ev_bool_callback;
				EarthView::World::Core::ev_string m_prepare_void_callback;
				EarthView::World::Core::ev_string m_load_ev_bool_callback;
				EarthView::World::Core::ev_string m_load_void_callback;
				EarthView::World::Core::ev_string m_reload_void_callback;
				EarthView::World::Core::ev_string m_isReloadable_void_callback;
				EarthView::World::Core::ev_string m_isManuallyLoaded_void_callback;
				EarthView::World::Core::ev_string m_unload_void_callback;
				EarthView::World::Core::ev_string m_getSize_void_callback;
				EarthView::World::Core::ev_string m_touch_void_callback;
				EarthView::World::Core::ev_string m_getName_void_callback;
				EarthView::World::Core::ev_string m_getHandle_void_callback;
				EarthView::World::Core::ev_string m_isPrepared_void_callback;
				EarthView::World::Core::ev_string m_isLoaded_void_callback;
				EarthView::World::Core::ev_string m_isLoading_void_callback;
				EarthView::World::Core::ev_string m_getLoadingState_void_callback;
				EarthView::World::Core::ev_string m_isBackgroundLoaded_void_callback;
				EarthView::World::Core::ev_string m_setBackgroundLoaded_ev_bool_callback;
				EarthView::World::Core::ev_string m_escalateLoading_void_callback;
				EarthView::World::Core::ev_string m_addListener_CResourceListener_callback;
				EarthView::World::Core::ev_string m_removeListener_CResourceListener_callback;
				EarthView::World::Core::ev_string m_getGroup_void_callback;
				EarthView::World::Core::ev_string m_changeGroupOwnership_EVString_callback;
				EarthView::World::Core::ev_string m_getCreator_void_callback;
				EarthView::World::Core::ev_string m_getOrigin_void_callback;
				EarthView::World::Core::ev_string m__notifyOrigin_EVString_callback;
				EarthView::World::Core::ev_string m_getStateCount_void_callback;
				EarthView::World::Core::ev_string m__dirtyState_void_callback;
				EarthView::World::Core::ev_string m__fireLoadingComplete_ev_bool_callback;
				EarthView::World::Core::ev_string m__firePreparingComplete_ev_bool_callback;
				EarthView::World::Core::ev_string m__fireUnloadingComplete_void_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_EVString_callback;
				EarthView::World::Core::ev_string m_setParameter_EVString_ev_bool_ev_bool_callback;
				EarthView::World::Core::ev_string m_setParameterList_CommonStringPairList_callback;
				EarthView::World::Core::ev_string m_getParameter_EVString_callback;
				EarthView::World::Core::ev_string m_copyParametersTo_CStringInterface_callback;
			public:
				JCMeshProxy(EarthView::World::Core::CNameValuePairList *pList) : CMesh(pList)
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
				void register_createAnimation_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimation_EVString_Real_callback = __method;
				}
				void register_getAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_EVString_callback = __method;
				}
				void register__getAnimationImpl_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__getAnimationImpl_EVString_callback = __method;
				}
				void register_hasAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnimation_EVString_callback = __method;
				}
				void register_removeAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAnimation_EVString_callback = __method;
				}
				void register_getNumAnimations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumAnimations_void_callback = __method;
				}
				void register_getAnimation_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_ev_uint16_callback = __method;
				}
				void register_removeAllAnimations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAllAnimations_void_callback = __method;
				}
				void register_getSharedVertexDataAnimationType_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSharedVertexDataAnimationType_void_callback = __method;
				}
				void register_preLoadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preLoadImpl_void_callback = __method;
				}
				void register_postLoadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postLoadImpl_void_callback = __method;
				}
				void register_preUnloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_preUnloadImpl_void_callback = __method;
				}
				void register_postUnloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_postUnloadImpl_void_callback = __method;
				}
				void register_prepareImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepareImpl_void_callback = __method;
				}
				void register_unprepareImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unprepareImpl_void_callback = __method;
				}
				void register_loadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_loadImpl_void_callback = __method;
				}
				void register_unloadImpl_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unloadImpl_void_callback = __method;
				}
				void register_calculateSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_calculateSize_void_callback = __method;
				}
				void register_prepare_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_ev_bool_callback = __method;
				}
				void register_prepare_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_prepare_void_callback = __method;
				}
				void register_load_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_ev_bool_callback = __method;
				}
				void register_load_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_load_void_callback = __method;
				}
				void register_reload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_reload_void_callback = __method;
				}
				void register_isReloadable_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isReloadable_void_callback = __method;
				}
				void register_isManuallyLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isManuallyLoaded_void_callback = __method;
				}
				void register_unload_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_unload_void_callback = __method;
				}
				void register_getSize_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getSize_void_callback = __method;
				}
				void register_touch_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_touch_void_callback = __method;
				}
				void register_getName_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getName_void_callback = __method;
				}
				void register_getHandle_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getHandle_void_callback = __method;
				}
				void register_isPrepared_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isPrepared_void_callback = __method;
				}
				void register_isLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoaded_void_callback = __method;
				}
				void register_isLoading_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isLoading_void_callback = __method;
				}
				void register_getLoadingState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getLoadingState_void_callback = __method;
				}
				void register_isBackgroundLoaded_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_isBackgroundLoaded_void_callback = __method;
				}
				void register_setBackgroundLoaded_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setBackgroundLoaded_ev_bool_callback = __method;
				}
				void register_escalateLoading_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_escalateLoading_void_callback = __method;
				}
				void register_addListener_CResourceListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addListener_CResourceListener_callback = __method;
				}
				void register_removeListener_CResourceListener_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeListener_CResourceListener_callback = __method;
				}
				void register_getGroup_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getGroup_void_callback = __method;
				}
				void register_changeGroupOwnership_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_changeGroupOwnership_EVString_callback = __method;
				}
				void register_getCreator_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getCreator_void_callback = __method;
				}
				void register_getOrigin_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getOrigin_void_callback = __method;
				}
				void register__notifyOrigin_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__notifyOrigin_EVString_callback = __method;
				}
				void register_getStateCount_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getStateCount_void_callback = __method;
				}
				void register__dirtyState_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__dirtyState_void_callback = __method;
				}
				void register__fireLoadingComplete_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__fireLoadingComplete_ev_bool_callback = __method;
				}
				void register__firePreparingComplete_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__firePreparingComplete_ev_bool_callback = __method;
				}
				void register__fireUnloadingComplete_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m__fireUnloadingComplete_void_callback = __method;
				}
				void register_setParameter_EVString_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_EVString_callback = __method;
				}
				void register_setParameter_EVString_ev_bool_ev_bool_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameter_EVString_ev_bool_ev_bool_callback = __method;
				}
				void register_setParameterList_CommonStringPairList_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_setParameterList_CommonStringPairList_callback = __method;
				}
				void register_getParameter_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getParameter_EVString_callback = __method;
				}
				void register_copyParametersTo_CStringInterface_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_copyParametersTo_CStringInterface_callback = __method;
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(const EVString& name, Real length)
				{
					if (this->_gRef != NULL && this->m_createAnimation_EVString_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jdouble length_j = (jdouble) length;
						jmethodID __method = __gr->getMethod("createAnimation_EVString_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, length_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::createAnimation(name, length);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getAnimation_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::getAnimation(name);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* _getAnimationImpl(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m__getAnimationImpl_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("_getAnimationImpl_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::_getAnimationImpl(name);
					}
				}
				virtual ev_bool hasAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_hasAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("hasAnimation_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
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
						return this->CMesh::hasAnimation(name);
					}
				}
				virtual void removeAnimation(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("removeAnimation_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CMesh::removeAnimation(name);
					}
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if (this->_gRef != NULL && this->m_getNumAnimations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNumAnimations_void_callback");
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
						return this->CMesh::getNumAnimations();
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("getAnimation_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::getAnimation(index);
					}
				}
				virtual void removeAllAnimations()
				{
					if (this->_gRef != NULL && this->m_removeAllAnimations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("removeAllAnimations_void_callback");
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
						return this->CMesh::removeAllAnimations();
					}
				}
				virtual void prepareImpl()
				{
					if (this->_gRef != NULL && this->m_prepareImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("prepareImpl_void_callback");
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
						return this->CMesh::prepareImpl();
					}
				}
				virtual void unprepareImpl()
				{
					if (this->_gRef != NULL && this->m_unprepareImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("unprepareImpl_void_callback");
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
						return this->CMesh::unprepareImpl();
					}
				}
				virtual void loadImpl()
				{
					if (this->_gRef != NULL && this->m_loadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("loadImpl_void_callback");
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
						return this->CMesh::loadImpl();
					}
				}
				virtual void postLoadImpl()
				{
					if (this->_gRef != NULL && this->m_postLoadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("postLoadImpl_void_callback");
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
						return this->CMesh::postLoadImpl();
					}
				}
				virtual void unloadImpl()
				{
					if (this->_gRef != NULL && this->m_unloadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("unloadImpl_void_callback");
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
						return this->CMesh::unloadImpl();
					}
				}
				virtual ev_size_t calculateSize() const
				{
					if (this->_gRef != NULL && this->m_calculateSize_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("calculateSize_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::calculateSize();
					}
				}
				virtual EarthView::World::Graphic::VertexAnimationType getSharedVertexDataAnimationType() const
				{
					if (this->_gRef != NULL && this->m_getSharedVertexDataAnimationType_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getSharedVertexDataAnimationType_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::VertexAnimationType __values1 = (EarthView::World::Graphic::VertexAnimationType) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::getSharedVertexDataAnimationType();
					}
				}
				virtual void preLoadImpl()
				{
					if (this->_gRef != NULL && this->m_preLoadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("preLoadImpl_void_callback");
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
						return this->CMesh::preLoadImpl();
					}
				}
				virtual void preUnloadImpl()
				{
					if (this->_gRef != NULL && this->m_preUnloadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("preUnloadImpl_void_callback");
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
						return this->CMesh::preUnloadImpl();
					}
				}
				virtual void postUnloadImpl()
				{
					if (this->_gRef != NULL && this->m_postUnloadImpl_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("postUnloadImpl_void_callback");
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
						return this->CMesh::postUnloadImpl();
					}
				}
				virtual void prepare(ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_prepare_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("prepare_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , backgroundThread_j);
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
						return this->CMesh::prepare(backgroundThread);
					}
				}
				virtual void prepare()
				{
					if (this->_gRef != NULL && this->m_prepare_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("prepare_void_callback");
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
						return this->CMesh::prepare();
					}
				}
				virtual void load(ev_bool backgroundThread)
				{
					if (this->_gRef != NULL && this->m_load_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean backgroundThread_j = (jboolean) backgroundThread;
						jmethodID __method = __gr->getMethod("load_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , backgroundThread_j);
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
						return this->CMesh::load(backgroundThread);
					}
				}
				virtual void load()
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
						return this->CMesh::load();
					}
				}
				virtual void reload()
				{
					if (this->_gRef != NULL && this->m_reload_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("reload_void_callback");
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
						return this->CMesh::reload();
					}
				}
				virtual ev_bool isReloadable() const
				{
					if (this->_gRef != NULL && this->m_isReloadable_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isReloadable_void_callback");
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
						return this->CMesh::isReloadable();
					}
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if (this->_gRef != NULL && this->m_isManuallyLoaded_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isManuallyLoaded_void_callback");
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
						return this->CMesh::isManuallyLoaded();
					}
				}
				virtual void unload()
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
						return this->CMesh::unload();
					}
				}
				virtual ev_size_t getSize() const
				{
					if (this->_gRef != NULL && this->m_getSize_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getSize_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::getSize();
					}
				}
				virtual void touch()
				{
					if (this->_gRef != NULL && this->m_touch_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("touch_void_callback");
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
						return this->CMesh::touch();
					}
				}
				virtual EVString getName() const
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
						return this->CMesh::getName();
					}
				}
				virtual ev_uint64 getHandle() const
				{
					if (this->_gRef != NULL && this->m_getHandle_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getHandle_void_callback");
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
						return this->CMesh::getHandle();
					}
				}
				virtual ev_bool isPrepared() const
				{
					if (this->_gRef != NULL && this->m_isPrepared_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isPrepared_void_callback");
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
						return this->CMesh::isPrepared();
					}
				}
				virtual ev_bool isLoaded() const
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
						return this->CMesh::isLoaded();
					}
				}
				virtual ev_bool isLoading() const
				{
					if (this->_gRef != NULL && this->m_isLoading_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isLoading_void_callback");
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
						return this->CMesh::isLoading();
					}
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if (this->_gRef != NULL && this->m_getLoadingState_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getLoadingState_void_callback");
						jint __values1_j = (jint)__env->CallIntMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResource::LoadingState __values1 = (EarthView::World::Graphic::CResource::LoadingState) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::getLoadingState();
					}
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if (this->_gRef != NULL && this->m_isBackgroundLoaded_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("isBackgroundLoaded_void_callback");
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
						return this->CMesh::isBackgroundLoaded();
					}
				}
				virtual void setBackgroundLoaded(ev_bool bl)
				{
					if (this->_gRef != NULL && this->m_setBackgroundLoaded_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean bl_j = (jboolean) bl;
						jmethodID __method = __gr->getMethod("setBackgroundLoaded_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , bl_j);
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
						return this->CMesh::setBackgroundLoaded(bl);
					}
				}
				virtual void escalateLoading()
				{
					if (this->_gRef != NULL && this->m_escalateLoading_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("escalateLoading_void_callback");
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
						return this->CMesh::escalateLoading();
					}
				}
				virtual void addListener(EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if (this->_gRef != NULL && this->m_addListener_CResourceListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong ref_lis_j = (jlong) ref_lis;
						jmethodID __method = __gr->getMethod("addListener_CResourceListener_callback");
						__env->CallVoidMethod(__obj, __method , ref_lis_j);
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
						return this->CMesh::addListener(ref_lis);
					}
				}
				virtual void removeListener(EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if (this->_gRef != NULL && this->m_removeListener_CResourceListener_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong lis_j = (jlong) lis;
						jmethodID __method = __gr->getMethod("removeListener_CResourceListener_callback");
						__env->CallVoidMethod(__obj, __method , lis_j);
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
						return this->CMesh::removeListener(lis);
					}
				}
				virtual EVString getGroup() const
				{
					if (this->_gRef != NULL && this->m_getGroup_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getGroup_void_callback");
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
						return this->CMesh::getGroup();
					}
				}
				virtual void changeGroupOwnership(const EVString& newGroup)
				{
					if (this->_gRef != NULL && this->m_changeGroupOwnership_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring newGroup_wch = newGroup;
						jstring newGroup_j = __env->NewString((const jchar*)newGroup_wch.getString(), newGroup_wch.size());
						jmethodID __method = __gr->getMethod("changeGroupOwnership_EVString_callback");
						__env->CallVoidMethod(__obj, __method , newGroup_j);
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
						return this->CMesh::changeGroupOwnership(newGroup);
					}
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if (this->_gRef != NULL && this->m_getCreator_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getCreator_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CResourceManager *__values1 = (EarthView::World::Graphic::CResourceManager*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::getCreator();
					}
				}
				virtual EVString getOrigin() const
				{
					if (this->_gRef != NULL && this->m_getOrigin_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getOrigin_void_callback");
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
						return this->CMesh::getOrigin();
					}
				}
				virtual void _notifyOrigin(const EVString& origin)
				{
					if (this->_gRef != NULL && this->m__notifyOrigin_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring origin_wch = origin;
						jstring origin_j = __env->NewString((const jchar*)origin_wch.getString(), origin_wch.size());
						jmethodID __method = __gr->getMethod("_notifyOrigin_EVString_callback");
						__env->CallVoidMethod(__obj, __method , origin_j);
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
						return this->CMesh::_notifyOrigin(origin);
					}
				}
				virtual ev_size_t getStateCount() const
				{
					if (this->_gRef != NULL && this->m_getStateCount_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getStateCount_void_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method );
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						ev_size_t __values1 = (ev_size_t) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMesh::getStateCount();
					}
				}
				virtual void _dirtyState()
				{
					if (this->_gRef != NULL && this->m__dirtyState_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_dirtyState_void_callback");
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
						return this->CMesh::_dirtyState();
					}
				}
				virtual void _fireLoadingComplete(ev_bool wasBackgroundLoaded)
				{
					if (this->_gRef != NULL && this->m__fireLoadingComplete_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean wasBackgroundLoaded_j = (jboolean) wasBackgroundLoaded;
						jmethodID __method = __gr->getMethod("_fireLoadingComplete_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , wasBackgroundLoaded_j);
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
						return this->CMesh::_fireLoadingComplete(wasBackgroundLoaded);
					}
				}
				virtual void _firePreparingComplete(ev_bool wasBackgroundLoaded)
				{
					if (this->_gRef != NULL && this->m__firePreparingComplete_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jboolean wasBackgroundLoaded_j = (jboolean) wasBackgroundLoaded;
						jmethodID __method = __gr->getMethod("_firePreparingComplete_ev_bool_callback");
						__env->CallVoidMethod(__obj, __method , wasBackgroundLoaded_j);
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
						return this->CMesh::_firePreparingComplete(wasBackgroundLoaded);
					}
				}
				virtual void _fireUnloadingComplete()
				{
					if (this->_gRef != NULL && this->m__fireUnloadingComplete_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("_fireUnloadingComplete_void_callback");
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
						return this->CMesh::_fireUnloadingComplete();
					}
				}
				virtual ev_bool setParameter(const EVString& name, const EVString& value)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						EarthView::World::Core::ev_wstring value_wch = value;
						jstring value_j = __env->NewString((const jchar*)value_wch.getString(), value_wch.size());
						jmethodID __method = __gr->getMethod("setParameter_EVString_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, value_j);
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
						return this->CMesh::setParameter(name, value);
					}
				}
				virtual ev_bool setParameter(const EVString& name, ev_bool readOnly, ev_bool enable)
				{
					if (this->_gRef != NULL && this->m_setParameter_EVString_ev_bool_ev_bool_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jboolean readOnly_j = (jboolean) readOnly;
						jboolean enable_j = (jboolean) enable;
						jmethodID __method = __gr->getMethod("setParameter_EVString_ev_bool_ev_bool_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j, readOnly_j, enable_j);
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
						return this->CMesh::setParameter(name, readOnly, enable);
					}
				}
				virtual void setParameterList(const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if (this->_gRef != NULL && this->m_setParameterList_CommonStringPairList_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong paramList_j = (jlong) &paramList;
						jmethodID __method = __gr->getMethod("setParameterList_CommonStringPairList_callback");
						__env->CallVoidMethod(__obj, __method , paramList_j);
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
						return this->CMesh::setParameterList(paramList);
					}
				}
				virtual EVString getParameter(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getParameter_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getParameter_EVString_callback");
						jstring __values1_j = (jstring)__env->CallObjectMethod(__obj, __method , name_j);
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
						return this->CMesh::getParameter(name);
					}
				}
				virtual void copyParametersTo(EarthView::World::Core::CStringInterface* dest) const
				{
					if (this->_gRef != NULL && this->m_copyParametersTo_CStringInterface_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jlong dest_j = (jlong) dest;
						jmethodID __method = __gr->getMethod("copyParametersTo_CStringInterface_callback");
						__env->CallVoidMethod(__obj, __method , dest_j);
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
						return this->CMesh::copyParametersTo(dest);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMeshProxy);
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_OperatorLessThan_1SubMeshInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong oth_j )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo& pObjectX = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::SubMeshInfo &oth = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) oth_j;
				ev_bool __values1 = (pObjectX < oth);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_OperatorGreaterThan_1SubMeshInfo(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong oth_j )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo& pObjectX = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::SubMeshInfo &oth = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) oth_j;
				ev_bool __values1 = (pObjectX > oth);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_get_1SubMeshIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->SubMeshIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_set_1SubMeshIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				pObjectX->SubMeshIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_get_1InstanceIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->InstanceIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_set_1InstanceIndex_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				pObjectX->InstanceIndex = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_get_1IndexBegun_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->IndexBegun);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_set_1IndexBegun_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				pObjectX->IndexBegun = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_get_1IndexEnd_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->IndexEnd);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshInfo_set_1IndexEnd_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjXXXX;
				pObjectX->IndexEnd = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNodePtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::MeshNodePtr *pObjectX = (EarthView::World::Graphic::CMesh::MeshNodePtr*) pObjXXXX;
				EarthView::World::Graphic::CMesh::CMeshNode* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_addNode_1MeshNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				EarthView::World::Graphic::CMesh::MeshNodePtr node = *(EarthView::World::Graphic::CMesh::MeshNodePtr*) node_j;
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->addNode(node);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_existNode_1MeshNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				EarthView::World::Graphic::CMesh::MeshNodePtr node = *(EarthView::World::Graphic::CMesh::MeshNodePtr*) node_j;
				const 				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->existNode(node);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_existNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->existNode(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_getNumNodes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumNodes();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_getNode_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr __values1 = pObjectX->getNode(index);
				EarthView::World::Graphic::CMesh::MeshNodePtr *returnvalues = new EarthView::World::Graphic::CMesh::MeshNodePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_getNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr __values1 = pObjectX->getNode(name);
				EarthView::World::Graphic::CMesh::MeshNodePtr *returnvalues = new EarthView::World::Graphic::CMesh::MeshNodePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_removeNode_1MeshNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				EarthView::World::Graphic::CMesh::MeshNodePtr node = *(EarthView::World::Graphic::CMesh::MeshNodePtr*) node_j;
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeNode(node);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_removeNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeNode(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_clearNodes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				pObjectX->clearNodes();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_appendSubMesh_1SubMeshInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo &sm = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) sm_j;
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->appendSubMesh(sm);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_removeSubMesh_1SubMeshInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo &sm = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) sm_j;
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeSubMesh(sm);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_existSubMesh_1SubMeshInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong sm_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo &sm = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) sm_j;
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_bool __values1 = pObjectX->existSubMesh(sm);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_getNumSubMeshes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumSubMeshes();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_getSubMesh_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				EarthView::World::Graphic::CMesh::SubMeshInfo __values1 = pObjectX->getSubMesh(index);
				EarthView::World::Graphic::CMesh::SubMeshInfo *returnvalues = new EarthView::World::Graphic::CMesh::SubMeshInfo(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_clearSubMeshes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				pObjectX->clearSubMeshes();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_setBoundingBox_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong boundingBox_j)
			{
				EarthView::World::Spatial::Math::CAxisAlignedBox boundingBox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) boundingBox_j;
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				pObjectX->setBoundingBox(boundingBox);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_getBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getBoundingBox();
				EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_get_1Name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->Name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_set_1Name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->Name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_get_1OffsetMatrix_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->OffsetMatrix);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshNode_set_1OffsetMatrix_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh::CMeshNode *pObjectX = (EarthView::World::Graphic::CMesh::CMeshNode*)pObjXXXX;
				pObjectX->OffsetMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_addNode_1MeshNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				EarthView::World::Graphic::CMesh::MeshNodePtr node = *(EarthView::World::Graphic::CMesh::MeshNodePtr*) node_j;
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				ev_bool __values1 = pObjectX->addNode(node);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_existNode_1MeshNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				EarthView::World::Graphic::CMesh::MeshNodePtr node = *(EarthView::World::Graphic::CMesh::MeshNodePtr*) node_j;
				const 				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				ev_bool __values1 = pObjectX->existNode(node);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_existNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				ev_bool __values1 = pObjectX->existNode(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_getNumNodes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumNodes();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_getNode_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr __values1 = pObjectX->getNode(index);
				EarthView::World::Graphic::CMesh::MeshNodePtr *returnvalues = new EarthView::World::Graphic::CMesh::MeshNodePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_getNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr __values1 = pObjectX->getNode(name);
				EarthView::World::Graphic::CMesh::MeshNodePtr *returnvalues = new EarthView::World::Graphic::CMesh::MeshNodePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_removeNode_1MeshNodePtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong node_j)
			{
				EarthView::World::Graphic::CMesh::MeshNodePtr node = *(EarthView::World::Graphic::CMesh::MeshNodePtr*) node_j;
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeNode(node);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_removeNode_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeNode(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_clearNodes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjXXXX;
				pObjectX->clearNodes();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_get_1Name_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->Name;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_set_1Name_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->Name = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_get_1mDescription_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mDescription;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_set_1mDescription_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mDescription = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_get_1mId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->mId);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_set_1mId_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				pObjectX->mId = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_get_1mCategoryAttributeList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mCategoryAttributeList);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshCategory_set_1mCategoryAttributeList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh::CMeshCategory *pObjectX = (EarthView::World::Graphic::CMesh::CMeshCategory*)pObjXXXX;
				pObjectX->mCategoryAttributeList = *(EarthView::World::Core::CommonStringPairList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getNumCategorys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumCategorys();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getCategory_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::CMeshCategory& __values1 = pObjectX->getCategory(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getCategory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::CMeshCategory& __values1 = pObjectX->getCategory(name);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_existCategory_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->existCategory(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_addCategory_1CMeshCategory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cate_j)
			{
				const EarthView::World::Graphic::CMesh::CMeshCategory &cate = *(EarthView::World::Graphic::CMesh::CMeshCategory*) cate_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->addCategory(cate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_removeCategory_1CMeshCategory(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cate_j)
			{
				const EarthView::World::Graphic::CMesh::CMeshCategory &cate = *(EarthView::World::Graphic::CMesh::CMeshCategory*) cate_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeCategory(cate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_clearCategorys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->clearCategorys();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getRootMeshNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr __values1 = pObjectX->getRootMeshNode();
				EarthView::World::Graphic::CMesh::MeshNodePtr *returnvalues = new EarthView::World::Graphic::CMesh::MeshNodePtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_createRootMeshNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->createRootMeshNode();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_destroyRootMeshNode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->destroyRootMeshNode();
			}
			class JCMeshAnimationContainerProxy : public EarthView::World::Graphic::CMesh::CMeshAnimationContainer
			{
			 private:
				EarthView::World::Core::ev_string m_getNumAnimations_void_callback;
				EarthView::World::Core::ev_string m_getAnimation_ev_uint16_callback;
				EarthView::World::Core::ev_string m_getAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_createAnimation_EVString_Real_callback;
				EarthView::World::Core::ev_string m_hasAnimation_EVString_callback;
				EarthView::World::Core::ev_string m_removeAnimation_EVString_callback;
			public:
				JCMeshAnimationContainerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshAnimationContainer(pList)
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
				void register_getNumAnimations_void_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getNumAnimations_void_callback = __method;
				}
				void register_getAnimation_ev_uint16_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_ev_uint16_callback = __method;
				}
				void register_getAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_getAnimation_EVString_callback = __method;
				}
				void register_createAnimation_EVString_Real_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_createAnimation_EVString_Real_callback = __method;
				}
				void register_hasAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_hasAnimation_EVString_callback = __method;
				}
				void register_removeAnimation_EVString_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_removeAnimation_EVString_callback = __method;
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if (this->_gRef != NULL && this->m_getNumAnimations_void_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						jmethodID __method = __gr->getMethod("getNumAnimations_void_callback");
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
						return this->CMeshAnimationContainer::getNumAnimations();
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(ev_uint16 index) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_ev_uint16_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
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
						jmethodID __method = __gr->getMethod("getAnimation_ev_uint16_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , index_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshAnimationContainer::getAnimation(index);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_getAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("getAnimation_EVString_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshAnimationContainer::getAnimation(name);
					}
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(const EVString& name, Real length)
				{
					if (this->_gRef != NULL && this->m_createAnimation_EVString_Real_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jdouble length_j = (jdouble) length;
						jmethodID __method = __gr->getMethod("createAnimation_EVString_Real_callback");
						jlong __values1_j = (jlong)__env->CallLongMethod(__obj, __method , name_j, length_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						EarthView::World::Graphic::CAnimation *__values1 = (EarthView::World::Graphic::CAnimation*) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshAnimationContainer::createAnimation(name, length);
					}
				}
				virtual bool hasAnimation(const EVString& name) const
				{
					if (this->_gRef != NULL && this->m_hasAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("hasAnimation_EVString_callback");
						jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , name_j);
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						if(__jniAttachable)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
						#endif
						bool __values1 = (bool) __values1_j;
						return __values1;
					}
					else
					{
						return this->CMeshAnimationContainer::hasAnimation(name);
					}
				}
				virtual void removeAnimation(const EVString& name)
				{
					if (this->_gRef != NULL && this->m_removeAnimation_EVString_callback != "" && this->isCustomExtend())
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						JNIEnv * __env;
						#if EV_PLATFORM == EV_PLATFORM_ANDROID
						bool __jniAttachable = false;
						if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
						{
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							__jniAttachable = true;
						}
						#else
						EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
						#endif
						jobject __obj = __gr->getJObject();
						jclass __clazz = __gr->getClass();
						EarthView::World::Core::ev_wstring name_wch = name;
						jstring name_j = __env->NewString((const jchar*)name_wch.getString(), name_wch.size());
						jmethodID __method = __gr->getMethod("removeAnimation_EVString_callback");
						__env->CallVoidMethod(__obj, __method , name_j);
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
						return this->CMeshAnimationContainer::removeAnimation(name);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCMeshAnimationContainerProxy);
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_getNumAnimations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshAnimationContainerProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_register_1getNumAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshAnimationContainerProxy *pObjectX = (JCMeshAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumAnimations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumAnimations_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_getNumAnimations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getNumAnimations();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_getAnimation_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_register_1getAnimation_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshAnimationContainerProxy *pObjectX = (JCMeshAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_getAnimation_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_getAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_register_1getAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshAnimationContainerProxy *pObjectX = (JCMeshAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_getAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_createAnimation_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
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
				Real length = (Real) length_j;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshAnimationContainerProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_register_1createAnimation_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshAnimationContainerProxy *pObjectX = (JCMeshAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimation_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimation_EVString_Real_callback", "(Ljava/lang/String;D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_createAnimation_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
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
				Real length = (Real) length_j;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::createAnimation(name, length);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_hasAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshAnimationContainerProxy))
				{
					bool __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					bool __values1 = pObjectX->hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_register_1hasAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshAnimationContainerProxy *pObjectX = (JCMeshAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnimation_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_hasAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				bool __values1 = pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::hasAnimation(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_removeAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshAnimationContainerProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::removeAnimation(name);
				}
				else
				{
					pObjectX->removeAnimation(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_register_1removeAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshAnimationContainerProxy *pObjectX = (JCMeshAnimationContainerProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAnimation_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshAnimationContainer_removeAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pObjectX = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::removeAnimation(name);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getAnimationContainerPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer* __values1 = pObjectX->getAnimationContainerPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getAnimationContainer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer& __values1 = pObjectX->getAnimationContainer();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_createAnimation_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
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
				Real length = (Real) length_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->createAnimation(name, length);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1createAnimation_1EVString_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_createAnimation_EVString_Real_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"createAnimation_EVString_Real_callback", "(Ljava/lang/String;D)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_createAnimation_1EVString_1Real_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jdouble length_j)
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
				Real length = (Real) length_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::createAnimation(name, length);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::getAnimation(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh__1getAnimationImpl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::_getAnimationImpl(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->_getAnimationImpl(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1_1getAnimationImpl_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__getAnimationImpl_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_getAnimationImpl_EVString_callback", "(Ljava/lang/String;)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh__1getAnimationImpl_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::_getAnimationImpl(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_hasAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					ev_bool __values1 = pObjectX->EarthView::World::Graphic::CMesh::hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				else
				{
					ev_bool __values1 = pObjectX->hasAnimation(name);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1hasAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_hasAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"hasAnimation_EVString_callback", "(Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_hasAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->EarthView::World::Graphic::CMesh::hasAnimation(name);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removeAnimation_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::removeAnimation(name);
				}
				else
				{
					pObjectX->removeAnimation(name);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1removeAnimation_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAnimation_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAnimation_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removeAnimation_1EVString_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::removeAnimation(name);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getNumAnimations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CMesh::getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					ev_uint16 __values1 = pObjectX->getNumAnimations();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getNumAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getNumAnimations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getNumAnimations_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getNumAnimations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->EarthView::World::Graphic::CMesh::getNumAnimations();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getAnimation_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* __values1 = pObjectX->getAnimation(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getAnimation_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getAnimation_ev_uint16_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getAnimation_ev_uint16_callback", "(I)J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getAnimation_1ev_1uint16_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CAnimation* __values1 = pObjectX->EarthView::World::Graphic::CMesh::getAnimation(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removeAllAnimations_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::removeAllAnimations();
				}
				else
				{
					pObjectX->removeAllAnimations();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1removeAllAnimations_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeAllAnimations_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeAllAnimations_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removeAllAnimations_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::removeAllAnimations();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_push_1back_1MeshLodUsage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::MeshLodUsage &t = *(EarthView::World::Graphic::MeshLodUsage*) t_j;
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				EarthView::World::Graphic::MeshLodUsage& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				EarthView::World::Graphic::MeshLodUsage& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_insert_1ev_1uint32_1MeshLodUsage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::MeshLodUsage &t = *(EarthView::World::Graphic::MeshLodUsage*) t_j;
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList& pObjectX = *(EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::MeshLodUsage& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				EarthView::World::Graphic::MeshLodUsage& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024MeshLodUsageList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList *pObjectX = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_push_1ev_1size_1t_1VertexBoneAssignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong val_j)
			{
				ev_size_t key = (ev_size_t) key_j;
				EarthView::World::Graphic::VertexBoneAssignment &val = *(EarthView::World::Graphic::VertexBoneAssignment*) val_j;
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				pObjectX->push(key, val);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_exist_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				ev_size_t key = (ev_size_t) key_j;
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_erase_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				ev_size_t key = (ev_size_t) key_j;
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_count_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j)
			{
				ev_size_t key = (ev_size_t) key_j;
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->count(key);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_get_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong index_j)
			{
				ev_size_t key = (ev_size_t) key_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				EarthView::World::Graphic::VertexBoneAssignment& __values1 = pObjectX->get(key, index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_erase_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong key_j, jlong index_j)
			{
				ev_size_t key = (ev_size_t) key_j;
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				pObjectX->erase(key, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024VertexBoneAssignmentList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pObjectX = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_push_1back_1CSubMesh(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CSubMesh *&ref_t = *(EarthView::World::Graphic::CSubMesh**) ref_t_j;
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_insert_1ev_1uint32_1CSubMesh(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CSubMesh *&ref_t = *(EarthView::World::Graphic::CSubMesh**) ref_t_j;
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CMesh::SubMeshList& pObjectX = *(EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CSubMesh*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshList *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_push_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jint val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_uint16 val = (ev_uint16) val_j;
				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMap& pObjectX = *(EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				ev_uint16& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				ev_uint16& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::SubMeshNameMap *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMapPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMapPair *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMapPair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMapPair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMapPair *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMapPair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMapPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMapPair *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMapPair*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshNameMapPair_set_1second_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMapPair *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshNameMapPair*)pObjXXXX;
				pObjectX->second = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_prepareImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::prepareImpl();
				}
				else
				{
					pObjectX->prepareImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1prepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepareImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepareImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_prepareImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::prepareImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_unprepareImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::unprepareImpl();
				}
				else
				{
					pObjectX->unprepareImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1unprepareImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unprepareImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unprepareImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_unprepareImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::unprepareImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_loadImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::loadImpl();
				}
				else
				{
					pObjectX->loadImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1loadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_loadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"loadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_loadImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::loadImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_postLoadImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::postLoadImpl();
				}
				else
				{
					pObjectX->postLoadImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1postLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postLoadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postLoadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_postLoadImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::postLoadImpl();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_unloadImpl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CMesh::unloadImpl();
				}
				else
				{
					pObjectX->unloadImpl();
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1unloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_unloadImpl_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CMesh::unloadImpl();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_calculateSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CMesh::calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				else
				{
					ev_size_t __values1 = pObjectX->calculateSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1calculateSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_calculateSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"calculateSize_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_calculateSize_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_size_t __values1 = pObjectX->EarthView::World::Graphic::CMesh::calculateSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_checkInstanceCapability_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::InstanceTechniuqe __values1 = pObjectX->checkInstanceCapability();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_checkHardwareInstanceCapability_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_bool __values1 = EarthView::World::Graphic::CMesh::checkHardwareInstanceCapability();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_createSubMesh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->createSubMesh();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_createSubMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->createSubMesh(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_nameSubMesh_1EVString_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jint index_j)
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
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->nameSubMesh(name, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_unnameSubMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->unnameSubMesh(name);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_calculateGlobalIndex_1ev_1uint16_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint submeshIndex_j, jlong instanceIndex_j)
			{
				ev_uint16 submeshIndex = (ev_uint16) submeshIndex_j;
				ev_uint32 instanceIndex = (ev_uint32) instanceIndex_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_int32 __values1 = pObjectX->calculateGlobalIndex(submeshIndex, instanceIndex);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_calculateInstanceIndex_1ev_1uint32_1ev_1int16_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong globalIndex_j, jlong submeshIndex_j, jlong instanceIndex_j)
			{
				ev_uint32 globalIndex = (ev_uint32) globalIndex_j;
				ev_int16 &submeshIndex = *(ev_int16*) submeshIndex_j;
				ev_int32 &instanceIndex = *(ev_int32*) instanceIndex_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->calculateInstanceIndex(globalIndex, submeshIndex, instanceIndex);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getMaxGlobalIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getMaxGlobalIndex();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh__1getSubMeshIndex_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->_getSubMeshIndex(name);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getNumSubMeshes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumSubMeshes();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getSubMesh_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->getSubMesh(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getSubMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->getSubMesh(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_destroySubMesh_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->destroySubMesh(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_destroySubMesh_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->destroySubMesh(name);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::SubMeshIterator *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024SubMeshIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator *pObjectX = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getSubMeshIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CMesh::SubMeshIterator __values1 = pObjectX->getSubMeshIterator();
				EarthView::World::Graphic::CMesh::SubMeshIterator *returnvalues = new EarthView::World::Graphic::CMesh::SubMeshIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_get_1sharedVertexData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->sharedVertexData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_set_1sharedVertexData_1CVertexData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*)pObjXXXX;
				pObjectX->sharedVertexData = (EarthView::World::Graphic::CVertexData*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_get_1sharedBlendIndexToBoneIndexMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->sharedBlendIndexToBoneIndexMap);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_set_1sharedBlendIndexToBoneIndexMap_1IndexMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*)pObjXXXX;
				pObjectX->sharedBlendIndexToBoneIndexMap = *(EarthView::World::Graphic::IndexMap*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_ev_1clone_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring newName_j, jstring newGroup_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newGroup_ch = (const ev_char*)__env->GetStringUTFChars(newGroup_j,JNI_FALSE);
				const EVString newGroup = newGroup_ch;
				__env->ReleaseStringUTFChars(newGroup_j, (const char *)newGroup_ch);
				#else
				const ev_wchar* newGroup_ch = (const ev_wchar*)__env->GetStringChars(newGroup_j,JNI_FALSE);
				const EVString newGroup = newGroup_ch;
				__env->ReleaseStringChars(newGroup_j, (const jchar *)newGroup_ch);
				#endif
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->clone(newName, newGroup);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_ev_1clone_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring newName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* newName_ch = (const ev_char*)__env->GetStringUTFChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringUTFChars(newName_j, (const char *)newName_ch);
				#else
				const ev_wchar* newName_ch = (const ev_wchar*)__env->GetStringChars(newName_j,JNI_FALSE);
				const EVString newName = newName_ch;
				__env->ReleaseStringChars(newName_j, (const jchar *)newName_ch);
				#endif
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->clone(newName);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getBounds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getBounds();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Mesh_getBoundingSphereRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				Real __values1 = pObjectX->getBoundingSphereRadius();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1setBounds_1CAxisAlignedBox_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bounds_j, jboolean pad_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &bounds = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) bounds_j;
				ev_bool pad = (ev_bool) pad_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_setBounds(bounds, pad);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1setBounds_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bounds_j)
			{
				const EarthView::World::Spatial::Math::CAxisAlignedBox &bounds = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) bounds_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_setBounds(bounds);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1setBoundingSphereRadius_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
			{
				Real radius = (Real) radius_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_setBoundingSphereRadius(radius);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_setSkeletonName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring skelName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* skelName_ch = (const ev_char*)__env->GetStringUTFChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringUTFChars(skelName_j, (const char *)skelName_ch);
				#else
				const ev_wchar* skelName_ch = (const ev_wchar*)__env->GetStringChars(skelName_j,JNI_FALSE);
				const EVString skelName = skelName_ch;
				__env->ReleaseStringChars(skelName_j, (const jchar *)skelName_ch);
				#endif
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->setSkeletonName(skelName);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_hasSkeleton_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasSkeleton();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_hasVertexAnimation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasVertexAnimation();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getSkeleton_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::CSkeletonPtr& __values1 = pObjectX->getSkeleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getSkeletonName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EVString& __values1 = pObjectX->getSkeletonName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1initAnimationState_1CAnimationStateSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				EarthView::World::Graphic::CAnimationStateSet *animSet = (EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_initAnimationState(animSet);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1refreshAnimationState_1CAnimationStateSet(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong animSet_j)
			{
				EarthView::World::Graphic::CAnimationStateSet *animSet = (EarthView::World::Graphic::CAnimationStateSet*) animSet_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_refreshAnimationState(animSet);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_addBoneAssignment_1VertexBoneAssignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertBoneAssign_j)
			{
				const EarthView::World::Graphic::VertexBoneAssignment &vertBoneAssign = *(EarthView::World::Graphic::VertexBoneAssignment*) vertBoneAssign_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->addBoneAssignment(vertBoneAssign);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_clearBoneAssignments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->clearBoneAssignments();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1notifySkeleton_1CSkeletonPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSkel_j)
			{
				EarthView::World::Graphic::CSkeletonPtr &pSkel = *(EarthView::World::Graphic::CSkeletonPtr*) pSkel_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_notifySkeleton(pSkel);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getBoneAssignmentIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::BoneAssignmentIterator __values1 = pObjectX->getBoneAssignmentIterator();
				EarthView::World::Graphic::BoneAssignmentIterator *returnvalues = new EarthView::World::Graphic::BoneAssignmentIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getBoneAssignments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList& __values1 = pObjectX->getBoneAssignments();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getNumLodLevels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumLodLevels();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getLodLevel_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::MeshLodUsage& __values1 = pObjectX->getLodLevel(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_createManualLodLevel_1Real_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jstring meshName_j, jstring groupName_j)
			{
				Real value = (Real) value_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->createManualLodLevel(value, meshName, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_createManualLodLevel_1Real_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j, jstring meshName_j)
			{
				Real value = (Real) value_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->createManualLodLevel(value, meshName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_updateManualLodLevel_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jstring meshName_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* meshName_ch = (const ev_char*)__env->GetStringUTFChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringUTFChars(meshName_j, (const char *)meshName_ch);
				#else
				const ev_wchar* meshName_ch = (const ev_wchar*)__env->GetStringChars(meshName_j,JNI_FALSE);
				const EVString meshName = meshName_ch;
				__env->ReleaseStringChars(meshName_j, (const jchar *)meshName_ch);
				#endif
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->updateManualLodLevel(index, meshName);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getLodIndex_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
			{
				Real value = (Real) value_j;
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getLodIndex(value);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_isLodManual_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->isLodManual();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1setLodInfo_1ev_1uint16_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint numLevels_j, jboolean isManual_j)
			{
				ev_uint16 numLevels = (ev_uint16) numLevels_j;
				ev_bool isManual = (ev_bool) isManual_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_setLodInfo(numLevels, isManual);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1setLodUsage_1ev_1uint16_1MeshLodUsage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jlong usage_j)
			{
				ev_uint16 level = (ev_uint16) level_j;
				EarthView::World::Graphic::MeshLodUsage &usage = *(EarthView::World::Graphic::MeshLodUsage*) usage_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_setLodUsage(level, usage);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1setSubMeshLodFaceList_1ev_1uint16_1ev_1uint16_1CIndexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint subIdx_j, jint level_j, jlong facedata_j)
			{
				ev_uint16 subIdx = (ev_uint16) subIdx_j;
				ev_uint16 level = (ev_uint16) level_j;
				EarthView::World::Graphic::CIndexData *facedata = (EarthView::World::Graphic::CIndexData*) facedata_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_setSubMeshLodFaceList(subIdx, level, facedata);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removeLodLevels_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->removeLodLevels();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_setVertexBufferPolicy_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint usage_j, jboolean shadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool shadowBuffer = (ev_bool) shadowBuffer_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->setVertexBufferPolicy(usage, shadowBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_setVertexBufferPolicy_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->setVertexBufferPolicy(usage);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_setIndexBufferPolicy_1Usage_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint usage_j, jboolean shadowBuffer_j)
			{
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				ev_bool shadowBuffer = (ev_bool) shadowBuffer_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->setIndexBufferPolicy(usage, shadowBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_setIndexBufferPolicy_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint usage_j)
			{
				EarthView::World::Graphic::CHardwareBuffer::Usage usage = (EarthView::World::Graphic::CHardwareBuffer::Usage) usage_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->setIndexBufferPolicy(usage);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getVertexBufferUsage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage __values1 = pObjectX->getVertexBufferUsage();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getIndexBufferUsage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage __values1 = pObjectX->getIndexBufferUsage();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_isVertexBufferShadowed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->isVertexBufferShadowed();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_isIndexBufferShadowed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->isIndexBufferShadowed();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh__1rationaliseBoneAssignments_1ev_1size_1t_1VertexBoneAssignmentList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexCount_j, jlong assignments_j)
			{
				ev_size_t vertexCount = (ev_size_t) vertexCount_j;
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList &assignments = *(EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) assignments_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->_rationaliseBoneAssignments(vertexCount, assignments);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1compileBoneAssignments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_compileBoneAssignments();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1updateCompiledBoneAssignments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_updateCompiledBoneAssignments();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildTangentVectors_1VertexElementSemantic_1ev_1uint16_1ev_1uint16_1ev_1bool_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jint sourceTexCoordSet_j, jint index_j, jboolean splitMirrored_j, jboolean splitRotated_j, jboolean storeParityInW_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 sourceTexCoordSet = (ev_uint16) sourceTexCoordSet_j;
				ev_uint16 index = (ev_uint16) index_j;
				ev_bool splitMirrored = (ev_bool) splitMirrored_j;
				ev_bool splitRotated = (ev_bool) splitRotated_j;
				ev_bool storeParityInW = (ev_bool) storeParityInW_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildTangentVectors(targetSemantic, sourceTexCoordSet, index, splitMirrored, splitRotated, storeParityInW);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildTangentVectors_1VertexElementSemantic_1ev_1uint16_1ev_1uint16_1ev_1bool_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jint sourceTexCoordSet_j, jint index_j, jboolean splitMirrored_j, jboolean splitRotated_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 sourceTexCoordSet = (ev_uint16) sourceTexCoordSet_j;
				ev_uint16 index = (ev_uint16) index_j;
				ev_bool splitMirrored = (ev_bool) splitMirrored_j;
				ev_bool splitRotated = (ev_bool) splitRotated_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildTangentVectors(targetSemantic, sourceTexCoordSet, index, splitMirrored, splitRotated);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildTangentVectors_1VertexElementSemantic_1ev_1uint16_1ev_1uint16_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jint sourceTexCoordSet_j, jint index_j, jboolean splitMirrored_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 sourceTexCoordSet = (ev_uint16) sourceTexCoordSet_j;
				ev_uint16 index = (ev_uint16) index_j;
				ev_bool splitMirrored = (ev_bool) splitMirrored_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildTangentVectors(targetSemantic, sourceTexCoordSet, index, splitMirrored);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildTangentVectors_1VertexElementSemantic_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jint sourceTexCoordSet_j, jint index_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 sourceTexCoordSet = (ev_uint16) sourceTexCoordSet_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildTangentVectors(targetSemantic, sourceTexCoordSet, index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildTangentVectors_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jint sourceTexCoordSet_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 sourceTexCoordSet = (ev_uint16) sourceTexCoordSet_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildTangentVectors(targetSemantic, sourceTexCoordSet);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildTangentVectors_1VertexElementSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildTangentVectors(targetSemantic);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildTangentVectors_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildTangentVectors();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_suggestTangentVectorBuildParams_1VertexElementSemantic_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jlong outSourceCoordSet_j, jlong outIndex_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 &outSourceCoordSet = *(ev_uint16*) outSourceCoordSet_j;
				ev_uint16 &outIndex = *(ev_uint16*) outIndex_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->suggestTangentVectorBuildParams(targetSemantic, outSourceCoordSet, outIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_buildEdgeList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->buildEdgeList();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_freeEdgeList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->freeEdgeList();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_prepareForShadowVolume_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->prepareForShadowVolume();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getEdgeList_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint lodIndex_j)
			{
				ev_uint16 lodIndex = (ev_uint16) lodIndex_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData* __values1 = pObjectX->getEdgeList(lodIndex);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getEdgeList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CEdgeData* __values1 = pObjectX->getEdgeList();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_isPreparedForShadowVolumes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->isPreparedForShadowVolumes();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_isEdgeListBuilt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->isEdgeListBuilt();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_prepareMatricesForVertexBlend_1CMatrix4_1CMatrix4_1IndexMap(JNIEnv *__env , jclass __clazz, jlong blendMatrices_j, jlong boneMatrices_j, jlong indexMap_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 **blendMatrices = (const EarthView::World::Spatial::Math::CMatrix4**) blendMatrices_j;
				const EarthView::World::Spatial::Math::CMatrix4 *boneMatrices = (const EarthView::World::Spatial::Math::CMatrix4*) boneMatrices_j;
				const EarthView::World::Graphic::IndexMap &indexMap = *(EarthView::World::Graphic::IndexMap*) indexMap_j;
				EarthView::World::Graphic::CMesh::prepareMatricesForVertexBlend(blendMatrices, boneMatrices, indexMap);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_softwareVertexBlend_1CVertexData_1CVertexData_1CMatrix4_1ev_1size_1t_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong sourceVertexData_j, jlong targetVertexData_j, jlong blendMatrices_j, jlong numMatrices_j, jboolean blendNormals_j)
			{
				const EarthView::World::Graphic::CVertexData *sourceVertexData = (const EarthView::World::Graphic::CVertexData*) sourceVertexData_j;
				const EarthView::World::Graphic::CVertexData *targetVertexData = (const EarthView::World::Graphic::CVertexData*) targetVertexData_j;
				const EarthView::World::Spatial::Math::CMatrix4 **blendMatrices = (const EarthView::World::Spatial::Math::CMatrix4**) blendMatrices_j;
				ev_size_t numMatrices = (ev_size_t) numMatrices_j;
				ev_bool blendNormals = (ev_bool) blendNormals_j;
				EarthView::World::Graphic::CMesh::softwareVertexBlend(sourceVertexData, targetVertexData, blendMatrices, numMatrices, blendNormals);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_softwareVertexMorph_1Real_1CHardwareVertexBufferSharedPtr_1CHardwareVertexBufferSharedPtr_1CVertexData(JNIEnv *__env , jclass __clazz, jdouble t_j, jlong b1_j, jlong b2_j, jlong targetVertexData_j)
			{
				Real t = (Real) t_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &b1 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) b1_j;
				const EarthView::World::Graphic::CHardwareVertexBufferSharedPtr &b2 = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) b2_j;
				EarthView::World::Graphic::CVertexData *targetVertexData = (EarthView::World::Graphic::CVertexData*) targetVertexData_j;
				EarthView::World::Graphic::CMesh::softwareVertexMorph(t, b1, b2, targetVertexData);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_softwareVertexPoseBlend_1Real_1VertexOffsetMap_1NormalsMap_1CVertexData(JNIEnv *__env , jclass __clazz, jdouble weight_j, jlong vertexOffsetMap_j, jlong normalsMap_j, jlong targetVertexData_j)
			{
				Real weight = (Real) weight_j;
				const EarthView::World::Graphic::CPose::VertexOffsetMap &vertexOffsetMap = *(EarthView::World::Graphic::CPose::VertexOffsetMap*) vertexOffsetMap_j;
				const EarthView::World::Graphic::CPose::NormalsMap &normalsMap = *(EarthView::World::Graphic::CPose::NormalsMap*) normalsMap_j;
				EarthView::World::Graphic::CVertexData *targetVertexData = (EarthView::World::Graphic::CVertexData*) targetVertexData_j;
				EarthView::World::Graphic::CMesh::softwareVertexPoseBlend(weight, vertexOffsetMap, normalsMap, targetVertexData);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getSubMeshNameMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::SubMeshNameMap& __values1 = pObjectX->getSubMeshNameMap();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_setAutoBuildEdgeLists_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autobuild_j)
			{
				ev_bool autobuild = (ev_bool) autobuild_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->setAutoBuildEdgeLists(autobuild);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_getAutoBuildEdgeLists_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->getAutoBuildEdgeLists();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getSharedVertexDataAnimationType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCMeshProxy))
				{
					EarthView::World::Graphic::VertexAnimationType __values1 = pObjectX->EarthView::World::Graphic::CMesh::getSharedVertexDataAnimationType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				else
				{
					EarthView::World::Graphic::VertexAnimationType __values1 = pObjectX->getSharedVertexDataAnimationType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getSharedVertexDataAnimationType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSharedVertexDataAnimationType_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSharedVertexDataAnimationType_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Mesh_getSharedVertexDataAnimationType_1void_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::VertexAnimationType __values1 = pObjectX->EarthView::World::Graphic::CMesh::getSharedVertexDataAnimationType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_getSharedVertexDataAnimationIncludesNormals_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSharedVertexDataAnimationIncludesNormals();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getVertexDataByTrackHandle_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint handle_j)
			{
				ev_uint16 handle = (ev_uint16) handle_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CVertexData* __values1 = pObjectX->getVertexDataByTrackHandle(handle);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_updateMaterialForAllSubMeshes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->updateMaterialForAllSubMeshes();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh__1determineAnimationTypes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->_determineAnimationTypes();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh__1getAnimationTypesDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->_getAnimationTypesDirty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_createPose_1ev_1uint16_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint target_j, jstring name_j)
			{
				ev_uint16 target = (ev_uint16) target_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->createPose(target, name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_createPose_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint target_j)
			{
				ev_uint16 target = (ev_uint16) target_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->createPose(target);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getPoseCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getPoseCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getPose_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getPose(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getPose_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getPose(name);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removePose_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->removePose(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removePose_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->removePose(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_removeAllPoses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->removeAllPoses();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024ConstPoseIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::ConstPoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024ConstPoseIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024ConstPoseIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024ConstPoseIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024ConstPoseIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024ConstPoseIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Mesh_00024PoseIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh::PoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_00024PoseIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::PoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024PoseIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::PoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024PoseIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::PoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->next();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024PoseIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::PoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_00024PoseIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh::PoseIterator *pObjectX = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjXXXX;
				EarthView::World::Graphic::CPose* __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getPoseIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				EarthView::World::Graphic::CMesh::PoseIterator __values1 = pObjectX->getPoseIterator();
				EarthView::World::Graphic::CMesh::PoseIterator *returnvalues = new EarthView::World::Graphic::CMesh::PoseIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getPoseList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::PoseList& __values1 = pObjectX->getPoseList();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Mesh_getLodStrategy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				const EarthView::World::Graphic::CLodStrategy* __values1 = pObjectX->getLodStrategy();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_setLodStrategy_1CLodStrategy(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lodStrategy_j)
			{
				EarthView::World::Graphic::CLodStrategy *lodStrategy = (EarthView::World::Graphic::CLodStrategy*) lodStrategy_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->setLodStrategy(lodStrategy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_loadFromDataStream_1DataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
			{
				EarthView::World::Core::DataStreamPtr stream = *(EarthView::World::Core::DataStreamPtr*) stream_j;
				EarthView::World::Graphic::CMesh *pObjectX = (EarthView::World::Graphic::CMesh*) pObjXXXX;
				pObjectX->loadFromDataStream(stream);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1preLoadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preLoadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preLoadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1preUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_preUnloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"preUnloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1postUnloadImpl_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_postUnloadImpl_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"postUnloadImpl_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1prepare_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1prepare_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_prepare_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"prepare_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1load_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1load_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_load_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"load_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1reload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_reload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"reload_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1isReloadable_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isReloadable_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isReloadable_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1isManuallyLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isManuallyLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isManuallyLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1unload_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_unload_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"unload_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getSize_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getSize_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getSize_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1touch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_touch_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"touch_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getHandle_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getHandle_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getHandle_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1isPrepared_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isPrepared_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isPrepared_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1isLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1isLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isLoading_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isLoading_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getLoadingState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getLoadingState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getLoadingState_void_callback", "()I");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1isBackgroundLoaded_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_isBackgroundLoaded_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"isBackgroundLoaded_void_callback", "()Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1setBackgroundLoaded_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setBackgroundLoaded_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setBackgroundLoaded_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1escalateLoading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_escalateLoading_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"escalateLoading_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1addListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addListener_CResourceListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addListener_CResourceListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1removeListener_1CResourceListener(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_removeListener_CResourceListener_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"removeListener_CResourceListener_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getGroup_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getGroup_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getGroup_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1changeGroupOwnership_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_changeGroupOwnership_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"changeGroupOwnership_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getCreator_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getCreator_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getCreator_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getOrigin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getOrigin_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getOrigin_void_callback", "()Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1_1notifyOrigin_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__notifyOrigin_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_notifyOrigin_EVString_callback", "(Ljava/lang/String;)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getStateCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getStateCount_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getStateCount_void_callback", "()J");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1_1dirtyState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__dirtyState_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_dirtyState_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1_1fireLoadingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__fireLoadingComplete_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_fireLoadingComplete_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1_1firePreparingComplete_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__firePreparingComplete_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_firePreparingComplete_ev_bool_callback", "(Z)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1_1fireUnloadingComplete_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register__fireUnloadingComplete_void_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"_fireUnloadingComplete_void_callback", "()V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1setParameter_1EVString_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_EVString_callback", "(Ljava/lang/String;Ljava/lang/String;)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1setParameter_1EVString_1ev_1bool_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameter_EVString_ev_bool_ev_bool_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameter_EVString_ev_bool_ev_bool_callback", "(Ljava/lang/String;ZZ)Z");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1setParameterList_1CommonStringPairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_setParameterList_CommonStringPairList_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"setParameterList_CommonStringPairList_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1getParameter_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_getParameter_EVString_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"getParameter_EVString_callback", "(Ljava/lang/String;)Ljava/lang/String;");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Mesh_register_1copyParametersTo_1CStringInterface(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCMeshProxy *pObjectX = (JCMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_copyParametersTo_CStringInterface_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"copyParametersTo_CStringInterface_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBoneAssignmentPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::VertexBoneAssignmentPair *pObjectX = (EarthView::World::Graphic::VertexBoneAssignmentPair*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBoneAssignmentPair_set_1first_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::VertexBoneAssignmentPair *pObjectX = (EarthView::World::Graphic::VertexBoneAssignmentPair*)pObjXXXX;
				pObjectX->first = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBoneAssignmentPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::VertexBoneAssignmentPair *pObjectX = (EarthView::World::Graphic::VertexBoneAssignmentPair*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBoneAssignmentPair_set_1second_1VertexBoneAssignment(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::VertexBoneAssignmentPair *pObjectX = (EarthView::World::Graphic::VertexBoneAssignmentPair*)pObjXXXX;
				pObjectX->second = *(EarthView::World::Graphic::VertexBoneAssignment*)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextKey();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				EarthView::World::Graphic::VertexBoneAssignment __values1 = pObjectX->nextValue();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				EarthView::World::Graphic::VertexBoneAssignment* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				EarthView::World::Graphic::VertexBoneAssignment __values1 = pObjectX->next();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				const EarthView::World::Graphic::VertexBoneAssignmentPair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				const EarthView::World::Graphic::VertexBoneAssignmentPair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BoneAssignmentIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::BoneAssignmentIterator *pObjectX = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjXXXX;
				const EarthView::World::Graphic::VertexBoneAssignmentPair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
