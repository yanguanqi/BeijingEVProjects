/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/meshdata.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_push_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jstring val_j)
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
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* val_ch = (const ev_char*)__env->GetStringUTFChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringUTFChars(val_j, (const char *)val_ch);
					#else
					const ev_wchar* val_ch = (const ev_wchar*)__env->GetStringChars(val_j,JNI_FALSE);
					EVString val = val_ch;
					__env->ReleaseStringChars(val_j, (const jchar *)val_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
				{
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap& pObjectX = *(EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
					#else
					const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
					const EVString key = key_ch;
					__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
					#endif
					EVString& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					EVString& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
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
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshAttrMap_getKeys_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::MeshAttrMap *pObjectX = (EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getKeys();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getPosition_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getPosition();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getScale();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getQuaternion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->getQuaternion();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getMeshPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					const EarthView::World::Graphic::CMeshPtr __values1 = pObjectX->getMeshPtr();
					EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getResGroupName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					EVString __values1 = pObjectX->getResGroupName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getMeshName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					EVString __values1 = pObjectX->getMeshName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getSourcePath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					EVString __values1 = pObjectX->getSourcePath();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_setSourcePath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
					#else
					const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
					const EVString path = path_ch;
					__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
					#endif
					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					pObjectX->setSourcePath(path);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_setNodeAnimationStream_1MemoryDataStreamPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ptr_j)
				{
					EarthView::World::Core::MemoryDataStreamPtr ptr = *(EarthView::World::Core::MemoryDataStreamPtr*) ptr_j;
					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					pObjectX->setNodeAnimationStream(ptr);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getNodeAnimationStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->getNodeAnimationStream();
					EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_getAttr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					const EarthView::World::Spatial3D::DataExchange::MeshAttrMap& __values1 = pObjectX->getAttr();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataexchange_MeshData_setAttr_1MeshAttrMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong attrmap_j)
				{
					const EarthView::World::Spatial3D::DataExchange::MeshAttrMap &attrmap = *(EarthView::World::Spatial3D::DataExchange::MeshAttrMap*) attrmap_j;
					EarthView::World::Spatial3D::DataExchange::CMeshData *pObjectX = (EarthView::World::Spatial3D::DataExchange::CMeshData*) pObjXXXX;
					pObjectX->setAttr(attrmap);
				}
			}
		}
	}
}
