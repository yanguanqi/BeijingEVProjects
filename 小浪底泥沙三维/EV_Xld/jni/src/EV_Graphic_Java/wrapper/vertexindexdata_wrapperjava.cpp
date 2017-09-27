/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/vertexindexdata.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BufferUsageList_push_1back_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint t_j)
			{
				EarthView::World::Graphic::CHardwareBuffer::Usage t = (EarthView::World::Graphic::CHardwareBuffer::Usage) t_j;
				EarthView::World::Graphic::BufferUsageList *pObjectX = (EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BufferUsageList_insert_1ev_1uint32_1Usage(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jint t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage t = (EarthView::World::Graphic::CHardwareBuffer::Usage) t_j;
				EarthView::World::Graphic::BufferUsageList *pObjectX = (EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BufferUsageList_erase_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::BufferUsageList *pObjectX = (EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				pObjectX->erase(pos);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BufferUsageList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::BufferUsageList& pObjectX = *(EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CHardwareBuffer::Usage& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BufferUsageList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::BufferUsageList *pObjectX = (EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BufferUsageList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::BufferUsageList *pObjectX = (EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BufferUsageList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::BufferUsageList *pObjectX = (EarthView::World::Graphic::BufferUsageList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_get_1vertexDeclaration_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->vertexDeclaration);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1vertexDeclaration_1CVertexDeclaration(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->vertexDeclaration = (EarthView::World::Graphic::CVertexDeclaration*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_get_1vertexBufferBinding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->vertexBufferBinding);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1vertexBufferBinding_1CVertexBufferBinding(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->vertexBufferBinding = (EarthView::World::Graphic::CVertexBufferBinding*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexData_get_1mDeleteDclBinding_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mDeleteDclBinding);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1mDeleteDclBinding_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->mDeleteDclBinding = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_get_1vertexStart_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->vertexStart);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1vertexStart_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->vertexStart = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_get_1vertexCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->vertexCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1vertexCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->vertexCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationData_get_1targetBufferIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData *pObjectX = (EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)pObjXXXX;
				jint __values1_j = (jint) (pObjectX->targetBufferIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationData_set_1targetBufferIndex_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData *pObjectX = (EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)pObjXXXX;
				pObjectX->targetBufferIndex = (ev_uint16)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationData_get_1parametric_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData *pObjectX = (EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->parametric);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationData_set_1parametric_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData *pObjectX = (EarthView::World::Graphic::CVertexData::CHardwareAnimationData*)pObjXXXX;
				pObjectX->parametric = (Real)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_push_1back_1CHardwareAnimationData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData &t = *(EarthView::World::Graphic::CVertexData::CHardwareAnimationData*) t_j;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_insert_1ev_1uint32_1CHardwareAnimationData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData &t = *(EarthView::World::Graphic::CVertexData::CHardwareAnimationData*) t_j;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList& pObjectX = *(EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				EarthView::World::Graphic::CVertexData::CHardwareAnimationData& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_00024HardwareAnimationDataList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData::HardwareAnimationDataList *pObjectX = (EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_get_1hwAnimationDataList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->hwAnimationDataList);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1hwAnimationDataList_1HardwareAnimationDataList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->hwAnimationDataList = *(EarthView::World::Graphic::CVertexData::HardwareAnimationDataList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_get_1hwAnimDataItemsUsed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->hwAnimDataItemsUsed);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1hwAnimDataItemsUsed_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->hwAnimDataItemsUsed = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_ev_1clone_1ev_1bool_1CHardwareBufferManagerBase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean copyData_j, jlong mgr_j)
			{
				ev_bool copyData = (ev_bool) copyData_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *mgr = (EarthView::World::Graphic::CHardwareBufferManagerBase*) mgr_j;
				const 				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				EarthView::World::Graphic::CVertexData* __values1 = pObjectX->clone(copyData, mgr);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_ev_1clone_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean copyData_j)
			{
				ev_bool copyData = (ev_bool) copyData_j;
				const 				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				EarthView::World::Graphic::CVertexData* __values1 = pObjectX->clone(copyData);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				EarthView::World::Graphic::CVertexData* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_prepareForShadowVolume_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->prepareForShadowVolume();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexData_get_1hardwareShadowVolWBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->hardwareShadowVolWBuffer);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_set_1hardwareShadowVolWBuffer_1CHardwareVertexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*)pObjXXXX;
				pObjectX->hardwareShadowVolWBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_reorganiseBuffers_1CVertexDeclaration_1BufferUsageList_1CHardwareBufferManagerBase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newDeclaration_j, jlong bufferUsage_j, jlong mgr_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *newDeclaration = (EarthView::World::Graphic::CVertexDeclaration*) newDeclaration_j;
				const EarthView::World::Graphic::BufferUsageList &bufferUsage = *(EarthView::World::Graphic::BufferUsageList*) bufferUsage_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *mgr = (EarthView::World::Graphic::CHardwareBufferManagerBase*) mgr_j;
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->reorganiseBuffers(newDeclaration, bufferUsage, mgr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_reorganiseBuffers_1CVertexDeclaration_1BufferUsageList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newDeclaration_j, jlong bufferUsage_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *newDeclaration = (EarthView::World::Graphic::CVertexDeclaration*) newDeclaration_j;
				const EarthView::World::Graphic::BufferUsageList &bufferUsage = *(EarthView::World::Graphic::BufferUsageList*) bufferUsage_j;
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->reorganiseBuffers(newDeclaration, bufferUsage);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_reorganiseBuffers_1CVertexDeclaration_1CHardwareBufferManagerBase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newDeclaration_j, jlong mgr_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *newDeclaration = (EarthView::World::Graphic::CVertexDeclaration*) newDeclaration_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *mgr = (EarthView::World::Graphic::CHardwareBufferManagerBase*) mgr_j;
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->reorganiseBuffers(newDeclaration, mgr);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_reorganiseBuffers_1CVertexDeclaration(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newDeclaration_j)
			{
				EarthView::World::Graphic::CVertexDeclaration *newDeclaration = (EarthView::World::Graphic::CVertexDeclaration*) newDeclaration_j;
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->reorganiseBuffers(newDeclaration);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_closeGapsInBindings_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->closeGapsInBindings();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_removeUnusedBuffers_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->removeUnusedBuffers();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexData_convertPackedColour_1VertexElementType_1VertexElementType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint srcType_j, jint destType_j)
			{
				EarthView::World::Graphic::VertexElementType srcType = (EarthView::World::Graphic::VertexElementType) srcType_j;
				EarthView::World::Graphic::VertexElementType destType = (EarthView::World::Graphic::VertexElementType) destType_j;
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				pObjectX->convertPackedColour(srcType, destType);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_VertexData_allocateHardwareAnimationElements_1ev_1uint16_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint count_j, jboolean animateNormals_j)
			{
				ev_uint16 count = (ev_uint16) count_j;
				bool animateNormals = (bool) animateNormals_j;
				EarthView::World::Graphic::CVertexData *pObjectX = (EarthView::World::Graphic::CVertexData*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->allocateHardwareAnimationElements(count, animateNormals);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexData_get_1indexBuffer_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->indexBuffer);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexData_set_1indexBuffer_1CHardwareIndexBufferSharedPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*)pObjXXXX;
				pObjectX->indexBuffer = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexData_get_1indexStart_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->indexStart);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexData_set_1indexStart_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*)pObjXXXX;
				pObjectX->indexStart = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexData_get_1indexCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->indexCount);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexData_set_1indexCount_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*)pObjXXXX;
				pObjectX->indexCount = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexData_ev_1clone_1ev_1bool_1CHardwareBufferManagerBase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean copyData_j, jlong mgr_j)
			{
				ev_bool copyData = (ev_bool) copyData_j;
				EarthView::World::Graphic::CHardwareBufferManagerBase *mgr = (EarthView::World::Graphic::CHardwareBufferManagerBase*) mgr_j;
				const 				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*) pObjXXXX;
				EarthView::World::Graphic::CIndexData* __values1 = pObjectX->clone(copyData, mgr);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexData_ev_1clone_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean copyData_j)
			{
				ev_bool copyData = (ev_bool) copyData_j;
				const 				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*) pObjXXXX;
				EarthView::World::Graphic::CIndexData* __values1 = pObjectX->clone(copyData);
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexData_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*) pObjXXXX;
				EarthView::World::Graphic::CIndexData* __values1 = pObjectX->clone();
				if(__values1 != NULL) {					((EarthView::World::Core::CBaseObject*)__values1)->setExternFree(true);
				}				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexData_optimiseVertexCacheTriList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CIndexData *pObjectX = (EarthView::World::Graphic::CIndexData*) pObjXXXX;
				pObjectX->optimiseVertexCacheTriList();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_VertexCacheProfiler_00024CacheTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CVertexCacheProfiler::FIFO,
					CVertexCacheProfiler::LRU
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexCacheProfiler_profile_1CHardwareIndexBufferSharedPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indexBuffer_j)
			{
				const EarthView::World::Graphic::CHardwareIndexBufferSharedPtr &indexBuffer = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) indexBuffer_j;
				EarthView::World::Graphic::CVertexCacheProfiler *pObjectX = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjXXXX;
				pObjectX->profile(indexBuffer);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexCacheProfiler_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexCacheProfiler *pObjectX = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexCacheProfiler_flush_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexCacheProfiler *pObjectX = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjXXXX;
				pObjectX->flush();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexCacheProfiler_getHits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexCacheProfiler *pObjectX = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getHits();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexCacheProfiler_getMisses_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexCacheProfiler *pObjectX = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMisses();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexCacheProfiler_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CVertexCacheProfiler *pObjectX = (EarthView::World::Graphic::CVertexCacheProfiler*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getSize();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
