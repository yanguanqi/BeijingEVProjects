/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/mapset.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_getMapCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getMapCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_getMap_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					EarthView::World::Spatial2D::Atlas::CMap* __values1 = pObjectX->getMap(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_add_1CMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_map_j)
				{
					EarthView::World::Spatial2D::Atlas::CMap *ref_map = (EarthView::World::Spatial2D::Atlas::CMap*) ref_map_j;
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->add(ref_map);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_insert_1ev_1uint32_1CMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong ref_map_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Atlas::CMap *ref_map = (EarthView::World::Spatial2D::Atlas::CMap*) ref_map_j;
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->insert(index, ref_map);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_remove_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->remove(index);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_removeAll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					pObjectX->removeAll();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_move_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oldIndex_j, jlong newIndex_j)
				{
					ev_uint32 oldIndex = (ev_uint32) oldIndex_j;
					ev_uint32 newIndex = (ev_uint32) newIndex_j;
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->move(oldIndex, newIndex);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_getCurrentMapIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getCurrentMapIndex();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_setCurrentMapIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					pObjectX->setCurrentMapIndex(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_load_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					pObjectX->load(stream);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_load_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring xml_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* xml_ch = (const ev_char*)__env->GetStringUTFChars(xml_j,JNI_FALSE);
					const EVString xml = xml_ch;
					__env->ReleaseStringUTFChars(xml_j, (const char *)xml_ch);
					#else
					const ev_wchar* xml_ch = (const ev_wchar*)__env->GetStringChars(xml_j,JNI_FALSE);
					const EVString xml = xml_ch;
					__env->ReleaseStringChars(xml_j, (const jchar *)xml_ch);
					#endif
					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					pObjectX->load(xml);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_toStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					const 					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					pObjectX->toStream(stream);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial2d_atlas_MapSet_toXML_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Atlas::CMapSet *pObjectX = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjXXXX;
					EVString __values1 = pObjectX->toXML();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
