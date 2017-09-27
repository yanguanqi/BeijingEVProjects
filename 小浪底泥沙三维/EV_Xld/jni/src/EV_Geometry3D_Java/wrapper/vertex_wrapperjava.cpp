/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/vertex.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_getPostion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getPostion();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_setPostion_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				pObjectX->setPostion(position);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_getNormal_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getNormal();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_setNormal_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong normal_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &normal = *(EarthView::World::Spatial::Math::CVector3*) normal_j;
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				pObjectX->setNormal(normal);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_getTangent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getTangent();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_setTangent_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tangent_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &tangent = *(EarthView::World::Spatial::Math::CVector3*) tangent_j;
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				pObjectX->setTangent(tangent);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_getTexCoord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				const EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->getTexCoord();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_setTexCoord_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texCoord_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &texCoord = *(EarthView::World::Spatial::Math::CVector4*) texCoord_j;
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				pObjectX->setTexCoord(texCoord);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_setTexCoord_1CVector4_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong texCoord_j, jint index_j)
			{
				const EarthView::World::Spatial::Math::CVector4 &texCoord = *(EarthView::World::Spatial::Math::CVector4*) texCoord_j;
				int index = (int) index_j;
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				pObjectX->setTexCoord(texCoord, index);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_getColour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				const EarthView::World::Graphic::CColourValue& __values1 = pObjectX->getColour();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_setColour_1CColourValue(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong colour_j)
			{
				const EarthView::World::Graphic::CColourValue &colour = *(EarthView::World::Graphic::CColourValue*) colour_j;
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				pObjectX->setColour(colour);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_OperatorConvertionCVector3_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
			{
				EarthView::World::Geometry3D::CVertex& pObjectX = *(EarthView::World::Geometry3D::CVertex*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX ;
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1position_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_position);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1position_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_position = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1normal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_normal);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1normal_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_normal = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1tangent_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_tangent);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1tangent_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_tangent = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord1);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord1_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord1 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord2);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord2_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord2 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord3_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord3);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord3_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord3 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord4_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord4);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord4_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord4 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord5_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord5);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord5_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord5 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord6_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord6);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord6_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord6 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1texCoord7_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_texCoord7);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1texCoord7_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_texCoord7 = *(EarthView::World::Spatial::Math::CVector4*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_Vertex_get_1m_1colour_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->m_colour);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_Vertex_set_1m_1colour_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Geometry3D::CVertex *pObjectX = (EarthView::World::Geometry3D::CVertex*)pObjXXXX;
				pObjectX->m_colour = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VertexVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong index_j )
			{
				EarthView::World::Geometry3D::CVertexVector& pObjectX = *(EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				ev_size_t index = (ev_size_t) index_j;
				const EarthView::World::Geometry3D::CVertex& __values1 = pObjectX[index];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VertexVector_getVertex_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				EarthView::World::Geometry3D::CVertex& __values1 = pObjectX->getVertex(pos);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VertexVector_addVertex_1CVertex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vertex_j)
			{
				const EarthView::World::Geometry3D::CVertex &vertex = *(EarthView::World::Geometry3D::CVertex*) vertex_j;
				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				pObjectX->addVertex(vertex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VertexVector_insertVertex_1ev_1size_1t_1CVertex(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong vertex_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				const EarthView::World::Geometry3D::CVertex &vertex = *(EarthView::World::Geometry3D::CVertex*) vertex_j;
				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				pObjectX->insertVertex(pos, vertex);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VertexVector_removeVertex_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				pObjectX->removeVertex(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VertexVector_removeAllVertexs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				pObjectX->removeAllVertexs();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VertexVector_getCapacity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCapacity();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_VertexVector_setCapacity_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				pObjectX->setCapacity(count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_VertexVector_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CVertexVector *pObjectX = (EarthView::World::Geometry3D::CVertexVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_IndexVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong index_j )
			{
				EarthView::World::Geometry3D::CIndexVector& pObjectX = *(EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				ev_size_t index = (ev_size_t) index_j;
				ev_uint32 __values1 = pObjectX[index];
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_IndexVector_getIndices_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getIndices(pos);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_IndexVector_addIndices_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong indices_j)
			{
				ev_uint32 indices = (ev_uint32) indices_j;
				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				pObjectX->addIndices(indices);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_IndexVector_insertIndices_1ev_1size_1t_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jint indices_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				ev_uint16 indices = (ev_uint16) indices_j;
				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				pObjectX->insertIndices(pos, indices);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_IndexVector_removeIndices_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				pObjectX->removeIndices(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_IndexVector_removeAllIndices_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				pObjectX->removeAllIndices();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_IndexVector_getCapacity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCapacity();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_geometry3d_IndexVector_setCapacity_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				pObjectX->setCapacity(count);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_geometry3d_IndexVector_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Geometry3D::CIndexVector *pObjectX = (EarthView::World::Geometry3D::CIndexVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
