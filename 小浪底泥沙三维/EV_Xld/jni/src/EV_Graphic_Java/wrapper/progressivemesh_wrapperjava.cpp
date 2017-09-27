/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/progressivemesh.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Math
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BitArray_OperatorAssign_1CBitArray(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong ba_j )
			{
				EarthView::World::Graphic::CBitArray& pObjectX = *(EarthView::World::Graphic::CBitArray*) pObjXXXX;
				const EarthView::World::Graphic::CBitArray &ba = *(EarthView::World::Graphic::CBitArray*) ba_j;
				pObjectX = ba;
				EarthView::World::Graphic::CBitArray& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_BitArray_getBit_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				size_t i = (size_t) i_j;
				const 				EarthView::World::Graphic::CBitArray *pObjectX = (EarthView::World::Graphic::CBitArray*) pObjXXXX;
				bool __values1 = pObjectX->getBit(i);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BitArray_setBit_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				size_t i = (size_t) i_j;
				EarthView::World::Graphic::CBitArray *pObjectX = (EarthView::World::Graphic::CBitArray*) pObjXXXX;
				pObjectX->setBit(i);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BitArray_clearBit_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong i_j)
			{
				size_t i = (size_t) i_j;
				EarthView::World::Graphic::CBitArray *pObjectX = (EarthView::World::Graphic::CBitArray*) pObjXXXX;
				pObjectX->clearBit(i);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BitArray_clearAllBits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CBitArray *pObjectX = (EarthView::World::Graphic::CBitArray*) pObjXXXX;
				pObjectX->clearAllBits();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_BitArray_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBitArray *pObjectX = (EarthView::World::Graphic::CBitArray*) pObjXXXX;
				bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_BitArray_resize_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong bits_count_j)
			{
				size_t bits_count = (size_t) bits_count_j;
				EarthView::World::Graphic::CBitArray *pObjectX = (EarthView::World::Graphic::CBitArray*) pObjXXXX;
				pObjectX->resize(bits_count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_BitArray_getBitsCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CBitArray *pObjectX = (EarthView::World::Graphic::CBitArray*) pObjXXXX;
				size_t __values1 = pObjectX->getBitsCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			class JCProgressiveMeshProxy : public EarthView::World::Graphic::CProgressiveMesh
			{
			 private:
				EarthView::World::Core::ev_string m_addExtraVertexPositionBuffer_CVertexData_callback;
			public:
				JCProgressiveMeshProxy(EarthView::World::Core::CNameValuePairList *pList) : CProgressiveMesh(pList)
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
				void register_addExtraVertexPositionBuffer_CVertexData_callback(EarthView::World::Core::ev_string __method)
				{
					this->m_addExtraVertexPositionBuffer_CVertexData_callback = __method;
				}
				virtual void addExtraVertexPositionBuffer(const EarthView::World::Graphic::CVertexData* vertexData)
				{
					if (this->_gRef != NULL && this->m_addExtraVertexPositionBuffer_CVertexData_callback != "" && this->isCustomExtend())
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
						jlong vertexData_j = (jlong) vertexData;
						jmethodID __method = __gr->getMethod("addExtraVertexPositionBuffer_CVertexData_callback");
						__env->CallVoidMethod(__obj, __method , vertexData_j);
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
						return this->CProgressiveMesh::addExtraVertexPositionBuffer(vertexData);
					}
				}
			};
			REGISTER_FACTORY_CLASS(JCProgressiveMeshProxy);
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024VertexReductionQuotaHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CProgressiveMesh::VRQ_CONSTANT,
					CProgressiveMesh::VRQ_PROPORTIONAL,
					CProgressiveMesh::VRQ_ERROR_COST
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_push_1back_1CIndexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CIndexData *&ref_t = *(EarthView::World::Graphic::CIndexData**) ref_t_j;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				EarthView::World::Graphic::CIndexData*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				EarthView::World::Graphic::CIndexData*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_insert_1ev_1uint32_1CIndexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CIndexData *&ref_t = *(EarthView::World::Graphic::CIndexData**) ref_t_j;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList& pObjectX = *(EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CIndexData*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				EarthView::World::Graphic::CIndexData*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024Lodfacelist_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::LODFaceList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::LODFaceList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_generateLodLevels_1CMesh_1LodValueList_1VertexReductionQuota_1Real(JNIEnv *__env , jclass __clazz, jlong pMesh_j, jlong lodValues_j, jint reductionMethod_j, jdouble reductionValue_j)
			{
				EarthView::World::Graphic::CMesh *pMesh = (EarthView::World::Graphic::CMesh*) pMesh_j;
				const EarthView::World::Graphic::LodValueList &lodValues = *(EarthView::World::Graphic::LodValueList*) lodValues_j;
				EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota reductionMethod = (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota) reductionMethod_j;
				Real reductionValue = (Real) reductionValue_j;
				bool __values1 = EarthView::World::Graphic::CProgressiveMesh::generateLodLevels(pMesh, lodValues, reductionMethod, reductionValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_generateSimplifiedMesh_1EVString_1EVString_1CMesh_1bool_1LodValueList_1VertexReductionQuota_1Real_1ev_1uint64(JNIEnv *__env , jclass __clazz, jstring name_j, jstring groupName_j, jlong inMesh_j, jboolean dropOriginalGeometry_j, jlong lodValues_j, jint reductionMethod_j, jdouble reductionValue_j, jlong removedVertexDuplicatesCount_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* groupName_ch = (const ev_char*)__env->GetStringUTFChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringUTFChars(groupName_j, (const char *)groupName_ch);
				#else
				const ev_wchar* groupName_ch = (const ev_wchar*)__env->GetStringChars(groupName_j,JNI_FALSE);
				const EVString groupName = groupName_ch;
				__env->ReleaseStringChars(groupName_j, (const jchar *)groupName_ch);
				#endif
				EarthView::World::Graphic::CMesh *inMesh = (EarthView::World::Graphic::CMesh*) inMesh_j;
				bool dropOriginalGeometry = (bool) dropOriginalGeometry_j;
				const EarthView::World::Graphic::LodValueList &lodValues = *(EarthView::World::Graphic::LodValueList*) lodValues_j;
				EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota reductionMethod = (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota) reductionMethod_j;
				Real reductionValue = (Real) reductionValue_j;
				ev_uint64 &removedVertexDuplicatesCount = *(ev_uint64*) removedVertexDuplicatesCount_j;
				EarthView::World::Graphic::CMeshPtr __values1 = EarthView::World::Graphic::CProgressiveMesh::generateSimplifiedMesh(name, groupName, inMesh, dropOriginalGeometry, lodValues, reductionMethod, reductionValue, removedVertexDuplicatesCount);
				EarthView::World::Graphic::CMeshPtr *returnvalues = new EarthView::World::Graphic::CMeshPtr(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_push_1back_1CProgressiveMesh(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_t_j)
			{
				EarthView::World::Graphic::CProgressiveMesh *&ref_t = *(EarthView::World::Graphic::CProgressiveMesh**) ref_t_j;
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				pObjectX->push_back(ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				EarthView::World::Graphic::CProgressiveMesh*& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				EarthView::World::Graphic::CProgressiveMesh*& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_insert_1ev_1uint32_1CProgressiveMesh(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong ref_t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Graphic::CProgressiveMesh *&ref_t = *(EarthView::World::Graphic::CProgressiveMesh**) ref_t_j;
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				pObjectX->insert(pos, ref_t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList& pObjectX = *(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CProgressiveMesh*& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				EarthView::World::Graphic::CProgressiveMesh*& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_00024ProgressiveMeshList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList *pObjectX = (EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_addExtraVertexPositionBuffer_1CVertexData(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexData_j)
			{
				const EarthView::World::Graphic::CVertexData *vertexData = (const EarthView::World::Graphic::CVertexData*) vertexData_j;
				EarthView::World::Graphic::CProgressiveMesh *pObjectX = (EarthView::World::Graphic::CProgressiveMesh*) pObjXXXX;
				if (typeid(*pObjectX) == typeid(JCProgressiveMeshProxy))
				{
					pObjectX->EarthView::World::Graphic::CProgressiveMesh::addExtraVertexPositionBuffer(vertexData);
				}
				else
				{
					pObjectX->addExtraVertexPositionBuffer(vertexData);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_register_1addExtraVertexPositionBuffer_1CVertexData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
			{
				JCProgressiveMeshProxy *pObjectX = (JCProgressiveMeshProxy*) pObjXXXX;
				const char *pMethod = __env->GetStringUTFChars(__method, NULL);
				EarthView::World::Core::ev_string sMethod = pMethod;
				__env->ReleaseStringUTFChars(__method, pMethod);
				pObjectX->register_addExtraVertexPositionBuffer_CVertexData_callback(sMethod);
				if (pObjectX->getJavaReference() != NULL && sMethod != "")
				{
					EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
					jobject __obj1 = __gr->getJObject();
					jclass __clazz1 = __env->GetObjectClass(__obj1);
					jmethodID __method = __env->GetMethodID(__clazz1,"addExtraVertexPositionBuffer_CVertexData_callback", "(J)V");
					__gr->setMethod(sMethod, __method);
				}
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_addExtraVertexPositionBuffer_1CVertexData_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertexData_j)
			{
				const EarthView::World::Graphic::CVertexData *vertexData = (const EarthView::World::Graphic::CVertexData*) vertexData_j;
				EarthView::World::Graphic::CProgressiveMesh *pObjectX = (EarthView::World::Graphic::CProgressiveMesh*) pObjXXXX;
				pObjectX->EarthView::World::Graphic::CProgressiveMesh::addExtraVertexPositionBuffer(vertexData);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_build_1ProgressiveMeshList_1CLodStrategy_1LodValueList_1VertexReductionQuota_1Real(JNIEnv *__env , jclass __clazz, jlong pmInList_j, jlong lodStrategy_j, jlong lodValues_j, jint quota_j, jdouble reductionValue_j)
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList &pmInList = *(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pmInList_j;
				const EarthView::World::Graphic::CLodStrategy *lodStrategy = (const EarthView::World::Graphic::CLodStrategy*) lodStrategy_j;
				const EarthView::World::Graphic::LodValueList &lodValues = *(EarthView::World::Graphic::LodValueList*) lodValues_j;
				EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota = (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota) quota_j;
				Real reductionValue = (Real) reductionValue_j;
				bool __values1 = EarthView::World::Graphic::CProgressiveMesh::build(pmInList, lodStrategy, lodValues, quota, reductionValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_ProgressiveMesh_build_1ProgressiveMeshList_1CLodStrategy_1LodValueList_1VertexReductionQuota(JNIEnv *__env , jclass __clazz, jlong pmInList_j, jlong lodStrategy_j, jlong lodValues_j, jint quota_j)
			{
				EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList &pmInList = *(EarthView::World::Graphic::CProgressiveMesh::ProgressiveMeshList*) pmInList_j;
				const EarthView::World::Graphic::CLodStrategy *lodStrategy = (const EarthView::World::Graphic::CLodStrategy*) lodStrategy_j;
				const EarthView::World::Graphic::LodValueList &lodValues = *(EarthView::World::Graphic::LodValueList*) lodValues_j;
				EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota quota = (EarthView::World::Graphic::CProgressiveMesh::VertexReductionQuota) quota_j;
				bool __values1 = EarthView::World::Graphic::CProgressiveMesh::build(pmInList, lodStrategy, lodValues, quota);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_VertexBufferLockGuard_get_1pData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::VertexBufferLockGuard *pObjectX = (EarthView::World::Graphic::VertexBufferLockGuard*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_VertexBufferLockGuard_set_1pData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::VertexBufferLockGuard *pObjectX = (EarthView::World::Graphic::VertexBufferLockGuard*)pObjXXXX;
				pObjectX->pData = (void*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_IndexBufferLockGuard_get_1pData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::IndexBufferLockGuard *pObjectX = (EarthView::World::Graphic::IndexBufferLockGuard*)pObjXXXX;
				jlong __values1_j = (jlong)(pObjectX->pData);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_IndexBufferLockGuard_set_1pData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Graphic::IndexBufferLockGuard *pObjectX = (EarthView::World::Graphic::IndexBufferLockGuard*)pObjXXXX;
				pObjectX->pData = (void*) __values1_j;
			}
		}
	}
}
