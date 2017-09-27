/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/tangentspacecalc.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplit_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->first);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplit_set_1first_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)pObjXXXX;
				pObjectX->first = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplit_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->second);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplit_set_1second_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*)pObjXXXX;
				pObjectX->second = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemap_get_1indexSet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->indexSet);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemap_set_1indexSet_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjXXXX;
				pObjectX->indexSet = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemap_get_1faceIndex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->faceIndex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemap_set_1faceIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjXXXX;
				pObjectX->faceIndex = (ev_size_t)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemap_get_1splitVertex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->splitVertex);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemap_set_1splitVertex_1VertexSplit(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*)pObjXXXX;
				pObjectX->splitVertex = *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_push_1back_1IndexRemap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap &t = *(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*) t_j;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_push_1front_1IndexRemap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap &t = *(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*) t_j;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_insert_1ev_1uint32_1IndexRemap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap &t = *(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemap*) t_j;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024IndexRemapList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_push_1back_1VertexSplit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &t = *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*) t_j;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_push_1front_1VertexSplit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &t = *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*) t_j;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->push_front(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->pop_front();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit& __values1 = pObjectX->at(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_insert_1ev_1uint32_1VertexSplit(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit &t = *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplit*) t_j;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024VertexSplits_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024Result_get_1vertexSplits_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::Result*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->vertexSplits);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024Result_set_1vertexSplits_1VertexSplits(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::Result*)pObjXXXX;
				pObjectX->vertexSplits = *(EarthView::World::Graphic::CTangentSpaceCalc::VertexSplits*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024Result_get_1indexesRemapped_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::Result*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->indexesRemapped);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_00024Result_set_1indexesRemapped_1IndexRemapList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CTangentSpaceCalc::Result *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc::Result*)pObjXXXX;
				pObjectX->indexesRemapped = *(EarthView::World::Graphic::CTangentSpaceCalc::IndexRemapList*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_setVertexData_1CVertexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_in_j)
			{
				EarthView::World::Graphic::CVertexData *v_in = (EarthView::World::Graphic::CVertexData*) v_in_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				pObjectX->setVertexData(v_in);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_addIndexData_1CIndexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_in_j)
			{
				EarthView::World::Graphic::CIndexData *i_in = (EarthView::World::Graphic::CIndexData*) i_in_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				pObjectX->addIndexData(i_in);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_addIndexData_1CIndexData_1OperationType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_in_j, jint opType_j)
			{
				EarthView::World::Graphic::CIndexData *i_in = (EarthView::World::Graphic::CIndexData*) i_in_j;
				EarthView::World::Graphic::CRenderOperation::OperationType opType = (EarthView::World::Graphic::CRenderOperation::OperationType) opType_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				pObjectX->addIndexData(i_in, opType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_setStoreParityInW_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				pObjectX->setStoreParityInW(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_getStoreParityInW_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				ev_bool __values1 = pObjectX->getStoreParityInW();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_setSplitMirrored_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				pObjectX->setSplitMirrored(split);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_getSplitMirrored_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSplitMirrored();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_setSplitRotated_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean split_j)
			{
				ev_bool split = (ev_bool) split_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				pObjectX->setSplitRotated(split);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_getSplitRotated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				ev_bool __values1 = pObjectX->getSplitRotated();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_build_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result __values1 = pObjectX->build();
				EarthView::World::Graphic::CTangentSpaceCalc::Result *returnvalues = new EarthView::World::Graphic::CTangentSpaceCalc::Result(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_build_1VertexElementSemantic(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result __values1 = pObjectX->build(targetSemantic);
				EarthView::World::Graphic::CTangentSpaceCalc::Result *returnvalues = new EarthView::World::Graphic::CTangentSpaceCalc::Result(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_build_1VertexElementSemantic_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jint sourceTexCoordSet_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 sourceTexCoordSet = (ev_uint16) sourceTexCoordSet_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result __values1 = pObjectX->build(targetSemantic, sourceTexCoordSet);
				EarthView::World::Graphic::CTangentSpaceCalc::Result *returnvalues = new EarthView::World::Graphic::CTangentSpaceCalc::Result(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_TangentSpaceCalc_build_1VertexElementSemantic_1ev_1uint16_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint targetSemantic_j, jint sourceTexCoordSet_j, jint index_j)
			{
				EarthView::World::Graphic::VertexElementSemantic targetSemantic = (EarthView::World::Graphic::VertexElementSemantic) targetSemantic_j;
				ev_uint16 sourceTexCoordSet = (ev_uint16) sourceTexCoordSet_j;
				ev_uint16 index = (ev_uint16) index_j;
				EarthView::World::Graphic::CTangentSpaceCalc *pObjectX = (EarthView::World::Graphic::CTangentSpaceCalc*) pObjXXXX;
				EarthView::World::Graphic::CTangentSpaceCalc::Result __values1 = pObjectX->build(targetSemantic, sourceTexCoordSet, index);
				EarthView::World::Graphic::CTangentSpaceCalc::Result *returnvalues = new EarthView::World::Graphic::CTangentSpaceCalc::Result(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
