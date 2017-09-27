/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/submesh.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_addInstance_1CMatrix4_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j, jlong color_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				bool __values1 = pObjectX->addInstance(matrix, color);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_removeInstance_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				bool __values1 = pObjectX->removeInstance(index);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_clearInstances_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->clearInstances();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_getInstance_1ev_1size_1t_1CMatrix4_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong matrix_j, jlong color_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				bool __values1 = pObjectX->getInstance(index, matrix, color);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_getInstance_1ev_1size_1t_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong matrix_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				bool __values1 = pObjectX->getInstance(index, matrix);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_getInstance_1ev_1size_1t_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong color_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				bool __values1 = pObjectX->getInstance(index, color);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_setInstance_1ev_1size_1t_1CMatrix4_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong matrix_j, jlong color_j)
			{
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
				const EarthView::World::Graphic::CColourValue &color = *(EarthView::World::Graphic::CColourValue*) color_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				bool __values1 = pObjectX->setInstance(index, matrix, color);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getNumInstance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumInstance();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_get_1useSharedVertices_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->useSharedVertices);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1useSharedVertices_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->useSharedVertices = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SubMesh_get_1operationType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->operationType);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1operationType_1OperationType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->operationType = (EarthView::World::Graphic::CRenderOperation::OperationType)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_get_1vertexData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->vertexData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1vertexData_1CVertexData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->vertexData = (EarthView::World::Graphic::CVertexData*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_get_1indexData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->indexData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1indexData_1CIndexData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->indexData = (EarthView::World::Graphic::CIndexData*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_get_1blendIndexToBoneIndexMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->blendIndexToBoneIndexMap);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1blendIndexToBoneIndexMap_1IndexMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->blendIndexToBoneIndexMap = *(EarthView::World::Graphic::IndexMap*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_get_1mLodFaceList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mLodFaceList);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1mLodFaceList_1LODFaceList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->mLodFaceList = *(EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_get_1extremityPoints_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->extremityPoints);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1extremityPoints_1VertexList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->extremityPoints = *(EarthView::World::Spatial::Math::VertexList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_get_1parent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->parent);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_set_1parent_1CMesh(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*)pObjXXXX;
				pObjectX->parent = (EarthView::World::Graphic::CMesh*) __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_setMaterialName_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matName_j, jstring groupName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
				#else
				const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
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
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->setMaterialName(matName, groupName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_setMaterialName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring matName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* matName_ch = (const ev_char*)__env->GetStringUTFChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringUTFChars(matName_j, (const char *)matName_ch);
				#else
				const ev_wchar* matName_ch = (const ev_wchar*)__env->GetStringChars(matName_j,JNI_FALSE);
				const EVString matName = matName_ch;
				__env->ReleaseStringChars(matName_j, (const jchar *)matName_ch);
				#endif
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->setMaterialName(matName);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getMaterialName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				const EVString& __values1 = pObjectX->getMaterialName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_isMatInitialised_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->isMatInitialised();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh__1getRenderOperation_1CRenderOperation_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j, jint lodIndex_j)
			{
				EarthView::World::Graphic::CRenderOperation &rend = *(EarthView::World::Graphic::CRenderOperation*) rend_j;
				ev_uint16 lodIndex = (ev_uint16) lodIndex_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->_getRenderOperation(rend, lodIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh__1getRenderOperation_1CRenderOperation(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rend_j)
			{
				EarthView::World::Graphic::CRenderOperation &rend = *(EarthView::World::Graphic::CRenderOperation*) rend_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->_getRenderOperation(rend);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_addBoneAssignment_1VertexBoneAssignment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertBoneAssign_j)
			{
				const EarthView::World::Graphic::VertexBoneAssignment &vertBoneAssign = *(EarthView::World::Graphic::VertexBoneAssignment*) vertBoneAssign_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->addBoneAssignment(vertBoneAssign);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_clearBoneAssignments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->clearBoneAssignments();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getBoneAssignmentIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				EarthView::World::Graphic::BoneAssignmentIterator __values1 = pObjectX->getBoneAssignmentIterator();
				EarthView::World::Graphic::BoneAssignmentIterator *returnvalues = new EarthView::World::Graphic::BoneAssignmentIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getBoneAssignments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList& __values1 = pObjectX->getBoneAssignments();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh__1compileBoneAssignments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->_compileBoneAssignments();
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTexturePair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTexturePair *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTexturePair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->first;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTexturePair_set_1first_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CSubMesh::AliasTexturePair *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTexturePair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->first = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTexturePair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTexturePair *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTexturePair*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->second;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTexturePair_set_1second_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Graphic::CSubMesh::AliasTexturePair *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTexturePair*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->second = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_hasMoreElements_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasMoreElements();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_moveNext_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				pObjectX->moveNext();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_nextKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->nextKey();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_nextValue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				EVString __values1 = pObjectX->nextValue();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_nextValuePtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				EVString* __values1 = pObjectX->nextValuePtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_next_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				EVString __values1 = pObjectX->next();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_getBegin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair& __values1 = pObjectX->getBegin();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_getEnd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair& __values1 = pObjectX->getEnd();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_00024AliasTextureIterator_getCurrent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *pObjectX = (EarthView::World::Graphic::CSubMesh::AliasTextureIterator*) pObjXXXX;
				const EarthView::World::Graphic::CSubMesh::AliasTexturePair& __values1 = pObjectX->getCurrent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getAliasTextureIterator_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator __values1 = pObjectX->getAliasTextureIterator();
				EarthView::World::Graphic::CSubMesh::AliasTextureIterator *returnvalues = new EarthView::World::Graphic::CSubMesh::AliasTextureIterator(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_addTextureAlias_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j, jstring textureName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
				#else
				const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* textureName_ch = (const ev_char*)__env->GetStringUTFChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringUTFChars(textureName_j, (const char *)textureName_ch);
				#else
				const ev_wchar* textureName_ch = (const ev_wchar*)__env->GetStringChars(textureName_j,JNI_FALSE);
				const EVString textureName = textureName_ch;
				__env->ReleaseStringChars(textureName_j, (const jchar *)textureName_ch);
				#endif
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->addTextureAlias(aliasName, textureName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_removeTextureAlias_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring aliasName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* aliasName_ch = (const ev_char*)__env->GetStringUTFChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringUTFChars(aliasName_j, (const char *)aliasName_ch);
				#else
				const ev_wchar* aliasName_ch = (const ev_wchar*)__env->GetStringChars(aliasName_j,JNI_FALSE);
				const EVString aliasName = aliasName_ch;
				__env->ReleaseStringChars(aliasName_j, (const jchar *)aliasName_ch);
				#endif
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->removeTextureAlias(aliasName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_removeAllTextureAliases_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->removeAllTextureAliases();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_hasTextureAliases_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->hasTextureAliases();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getTextureAliasCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getTextureAliasCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_updateMaterialUsingTextureAliases_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->updateMaterialUsingTextureAliases();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SubMesh_getVertexAnimationType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				EarthView::World::Graphic::VertexAnimationType __values1 = pObjectX->getVertexAnimationType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_getVertexAnimationIncludesNormals_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				bool __values1 = pObjectX->getVertexAnimationIncludesNormals();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_generateExtremes_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->generateExtremes(count);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_isBuildEdgesEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->isBuildEdgesEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_setBuildEdgesEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean b_j)
			{
				ev_bool b = (ev_bool) b_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->setBuildEdgesEnabled(b);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_reserveBlockIndicesSize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong size_j)
			{
				ev_size_t size = (ev_size_t) size_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->reserveBlockIndicesSize(size);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_addBlockIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong startIndex_j)
			{
				ev_uint32 startIndex = (ev_uint32) startIndex_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->addBlockIndex(startIndex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_removeBlockIndex_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				ev_uint32 i = (ev_uint32) i_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->removeBlockIndex(i);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_clearBlockIndices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->clearBlockIndices();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getNumBlockIndices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getNumBlockIndices();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CMatrix4_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong worldMatrix_j, jlong point_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, worldMatrix, point);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CMatrix4_1CVector3_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong worldMatrix_j, jlong point_j, jlong index1_j, jlong index2_j, jlong index3_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				ev_uint32 &index1 = *(ev_uint32*) index1_j;
				ev_uint32 &index2 = *(ev_uint32*) index2_j;
				ev_uint32 &index3 = *(ev_uint32*) index3_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, worldMatrix, point, index1, index2, index3);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, worldMatrix, positiveSide, negativeSide, point);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j, jlong index1_j, jlong index2_j, jlong index3_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				ev_uint32 &index1 = *(ev_uint32*) index1_j;
				ev_uint32 &index2 = *(ev_uint32*) index2_j;
				ev_uint32 &index3 = *(ev_uint32*) index3_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, worldMatrix, positiveSide, negativeSide, point, index1, index2, index3);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CIndexData_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong iData_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j, jlong index1_j, jlong index2_j, jlong index3_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Graphic::CIndexData *iData = (const EarthView::World::Graphic::CIndexData*) iData_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				ev_uint32 &index1 = *(ev_uint32*) index1_j;
				ev_uint32 &index2 = *(ev_uint32*) index2_j;
				ev_uint32 &index3 = *(ev_uint32*) index3_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, iData, worldMatrix, positiveSide, negativeSide, point, index1, index2, index3);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CIndexData_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3_1ev_1uint32_1ev_1uint32_1ev_1uint32_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong iData_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j, jlong index1_j, jlong index2_j, jlong index3_j, jlong segmentIndex_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Graphic::CIndexData *iData = (const EarthView::World::Graphic::CIndexData*) iData_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				ev_uint32 &index1 = *(ev_uint32*) index1_j;
				ev_uint32 &index2 = *(ev_uint32*) index2_j;
				ev_uint32 &index3 = *(ev_uint32*) index3_j;
				EarthView::World::Core::IntVector &segmentIndex = *(EarthView::World::Core::IntVector*) segmentIndex_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, iData, worldMatrix, positiveSide, negativeSide, point, index1, index2, index3, segmentIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CVertexData_1CIndexData_1OperationType_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3_1ev_1uint32_1ev_1uint32_1ev_1uint32_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong vData_j, jlong iData_j, jint ot_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j, jlong index1_j, jlong index2_j, jlong index3_j, jlong segmentIndex_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Graphic::CVertexData *vData = (const EarthView::World::Graphic::CVertexData*) vData_j;
				const EarthView::World::Graphic::CIndexData *iData = (const EarthView::World::Graphic::CIndexData*) iData_j;
				EarthView::World::Graphic::CRenderOperation::OperationType ot = (EarthView::World::Graphic::CRenderOperation::OperationType) ot_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				ev_uint32 &index1 = *(ev_uint32*) index1_j;
				ev_uint32 &index2 = *(ev_uint32*) index2_j;
				ev_uint32 &index3 = *(ev_uint32*) index3_j;
				EarthView::World::Core::IntVector &segmentIndex = *(EarthView::World::Core::IntVector*) segmentIndex_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, vData, iData, ot, worldMatrix, positiveSide, negativeSide, point, index1, index2, index3, segmentIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3_1ev_1uint32_1ev_1uint32_1ev_1uint32_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j, jlong index1_j, jlong index2_j, jlong index3_j, jlong segmentIndex_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				ev_uint32 &index1 = *(ev_uint32*) index1_j;
				ev_uint32 &index2 = *(ev_uint32*) index2_j;
				ev_uint32 &index3 = *(ev_uint32*) index3_j;
				EarthView::World::Core::IntVector &segmentIndex = *(EarthView::World::Core::IntVector*) segmentIndex_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, worldMatrix, positiveSide, negativeSide, point, index1, index2, index3, segmentIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3_1IntVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ray_j, jlong viewport_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j, jlong segmentIndex_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				EarthView::World::Core::IntVector &segmentIndex = *(EarthView::World::Core::IntVector*) segmentIndex_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->select(ray, viewport, worldMatrix, positiveSide, negativeSide, point, segmentIndex);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_select_1CRay_1CViewport_1CVertexData_1CIndexData_1OperationType_1CMatrix4_1ev_1bool_1ev_1bool_1CVector3_1ev_1uint32_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong viewport_j, jlong vData_j, jlong iData_j, jint ot_j, jlong worldMatrix_j, jboolean positiveSide_j, jboolean negativeSide_j, jlong point_j, jlong index1_j, jlong index2_j, jlong index3_j)
			{
				const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
				const EarthView::World::Graphic::CViewport *viewport = (const EarthView::World::Graphic::CViewport*) viewport_j;
				const EarthView::World::Graphic::CVertexData *vData = (const EarthView::World::Graphic::CVertexData*) vData_j;
				const EarthView::World::Graphic::CIndexData *iData = (const EarthView::World::Graphic::CIndexData*) iData_j;
				EarthView::World::Graphic::CRenderOperation::OperationType ot = (EarthView::World::Graphic::CRenderOperation::OperationType) ot_j;
				const EarthView::World::Spatial::Math::CMatrix4 &worldMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) worldMatrix_j;
				ev_bool positiveSide = (ev_bool) positiveSide_j;
				ev_bool negativeSide = (ev_bool) negativeSide_j;
				EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
				ev_uint32 &index1 = *(ev_uint32*) index1_j;
				ev_uint32 &index2 = *(ev_uint32*) index2_j;
				ev_uint32 &index3 = *(ev_uint32*) index3_j;
				ev_bool __values1 = EarthView::World::Graphic::CSubMesh::select(ray, viewport, vData, iData, ot, worldMatrix, positiveSide, negativeSide, point, index1, index2, index3);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getBoundingBox();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getVertexBoundingBox_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getVertexBoundingBox();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_setBoundingBoxDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->setBoundingBoxDirty();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_setVertexBoundingBoxDirty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->setVertexBoundingBoxDirty();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_00024Segment_Create(JNIEnv *__env, jclass __clazz)
			{
				EarthView::World::Graphic::CSubMesh::Segment *pObjectX = new EarthView::World::Graphic::CSubMesh::Segment();
				return (jlong) pObjectX;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_00024Segment_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::Segment *pObjectX = (EarthView::World::Graphic::CSubMesh::Segment*)pObjXXXX;
				delete pObjectX;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_00024Segment_get_1IndexBegun_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::Segment *pObjectX = (EarthView::World::Graphic::CSubMesh::Segment*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->IndexBegun);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_00024Segment_set_1IndexBegun_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh::Segment *pObjectX = (EarthView::World::Graphic::CSubMesh::Segment*)pObjXXXX;
				pObjectX->IndexBegun = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_00024Segment_get_1IndexEnd_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh::Segment *pObjectX = (EarthView::World::Graphic::CSubMesh::Segment*)pObjXXXX;
				jlong __values1_j = (jlong) (pObjectX->IndexEnd);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_00024Segment_set_1IndexEnd_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::CSubMesh::Segment *pObjectX = (EarthView::World::Graphic::CSubMesh::Segment*)pObjXXXX;
				pObjectX->IndexEnd = (ev_uint32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getNumSegments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getNumSegments();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getSegment_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				ev_uint32 i = (ev_uint32) i_j;
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh::Segment __values1 = pObjectX->getSegment(i);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_insertSegment_1Segment(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong segment_j)
			{
				const EarthView::World::Graphic::CSubMesh::Segment &segment = *(EarthView::World::Graphic::CSubMesh::Segment*) segment_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->insertSegment(segment);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_SubMesh_removeSegment_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				ev_uint32 i = (ev_uint32) i_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_bool __values1 = pObjectX->removeSegment(i);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_SubMesh_clearSegments_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				pObjectX->clearSegments();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_SubMesh_findSegment_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				ev_int32 __values1 = pObjectX->findSegment(index);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_SubMesh_getSegmentVertexBoundingBox_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				ev_uint32 i = (ev_uint32) i_j;
				EarthView::World::Graphic::CSubMesh *pObjectX = (EarthView::World::Graphic::CSubMesh*) pObjXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->getSegmentVertexBoundingBox(i);
				EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
