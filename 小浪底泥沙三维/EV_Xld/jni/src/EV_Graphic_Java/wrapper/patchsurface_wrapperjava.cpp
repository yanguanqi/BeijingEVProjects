/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/patchsurface.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_PatchSurface_00024PatchSurfaceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPatchSurface::PST_BEZIER
				};
				jintArray array = __env->NewIntArray(1);
				__env->SetIntArrayRegion(array, 0, 1, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_PatchSurface_00024SubdivisionLevelHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPatchSurface::AUTO_LEVEL
				};
				jintArray array = __env->NewIntArray(1);
				__env->SetIntArrayRegion(array, 0, 1, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_PatchSurface_00024VisibleSideHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CPatchSurface::VS_FRONT,
					CPatchSurface::VS_BACK,
					CPatchSurface::VS_BOTH
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_defineSurface_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1PatchSurfaceType_1ev_1size_1t_1ev_1size_1t_1VisibleSide(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controlPointBuffer_j, jlong ref_declaration_j, jlong width_j, jlong height_j, jint pType_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j, jint visibleSide_j)
			{
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *ref_declaration = (EarthView::World::Graphic::CVertexDeclaration*) ref_declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType = (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType) pType_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface::VisibleSide visibleSide = (EarthView::World::Graphic::CPatchSurface::VisibleSide) visibleSide_j;
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->defineSurface(controlPointBuffer, ref_declaration, width, height, pType, uMaxSubdivisionLevel, vMaxSubdivisionLevel, visibleSide);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_defineSurface_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1PatchSurfaceType_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controlPointBuffer_j, jlong ref_declaration_j, jlong width_j, jlong height_j, jint pType_j, jlong uMaxSubdivisionLevel_j, jlong vMaxSubdivisionLevel_j)
			{
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *ref_declaration = (EarthView::World::Graphic::CVertexDeclaration*) ref_declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType = (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType) pType_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				ev_size_t vMaxSubdivisionLevel = (ev_size_t) vMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->defineSurface(controlPointBuffer, ref_declaration, width, height, pType, uMaxSubdivisionLevel, vMaxSubdivisionLevel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_defineSurface_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1PatchSurfaceType_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controlPointBuffer_j, jlong ref_declaration_j, jlong width_j, jlong height_j, jint pType_j, jlong uMaxSubdivisionLevel_j)
			{
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *ref_declaration = (EarthView::World::Graphic::CVertexDeclaration*) ref_declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType = (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType) pType_j;
				ev_size_t uMaxSubdivisionLevel = (ev_size_t) uMaxSubdivisionLevel_j;
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->defineSurface(controlPointBuffer, ref_declaration, width, height, pType, uMaxSubdivisionLevel);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_defineSurface_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t_1PatchSurfaceType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controlPointBuffer_j, jlong ref_declaration_j, jlong width_j, jlong height_j, jint pType_j)
			{
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *ref_declaration = (EarthView::World::Graphic::CVertexDeclaration*) ref_declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				EarthView::World::Graphic::CPatchSurface::PatchSurfaceType pType = (EarthView::World::Graphic::CPatchSurface::PatchSurfaceType) pType_j;
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->defineSurface(controlPointBuffer, ref_declaration, width, height, pType);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_defineSurface_1void_1CVertexDeclaration_1ev_1size_1t_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong controlPointBuffer_j, jlong ref_declaration_j, jlong width_j, jlong height_j)
			{
				void *controlPointBuffer = (void*) controlPointBuffer_j;
				EarthView::World::Graphic::CVertexDeclaration *ref_declaration = (EarthView::World::Graphic::CVertexDeclaration*) ref_declaration_j;
				ev_size_t width = (ev_size_t) width_j;
				ev_size_t height = (ev_size_t) height_j;
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->defineSurface(controlPointBuffer, ref_declaration, width, height);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PatchSurface_getRequiredVertexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getRequiredVertexCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PatchSurface_getRequiredIndexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getRequiredIndexCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PatchSurface_getCurrentIndexCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getCurrentIndexCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PatchSurface_getIndexOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getIndexOffset();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PatchSurface_getVertexOffset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				ev_size_t __values1 = pObjectX->getVertexOffset();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PatchSurface_getBounds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX->getBounds();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_PatchSurface_getBoundingSphereRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				Real __values1 = pObjectX->getBoundingSphereRadius();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_build_1CHardwareVertexBufferSharedPtr_1ev_1size_1t_1CHardwareIndexBufferSharedPtr_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong destVertexBuffer_j, jlong vertexStart_j, jlong destIndexBuffer_j, jlong indexStart_j)
			{
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr destVertexBuffer = *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*) destVertexBuffer_j;
				ev_size_t vertexStart = (ev_size_t) vertexStart_j;
				EarthView::World::Graphic::CHardwareIndexBufferSharedPtr destIndexBuffer = *(EarthView::World::Graphic::CHardwareIndexBufferSharedPtr*) destIndexBuffer_j;
				ev_size_t indexStart = (ev_size_t) indexStart_j;
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->build(destVertexBuffer, vertexStart, destIndexBuffer, indexStart);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_setSubdivisionFactor_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble factor_j)
			{
				Real factor = (Real) factor_j;
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->setSubdivisionFactor(factor);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_PatchSurface_getSubdivisionFactor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				Real __values1 = pObjectX->getSubdivisionFactor();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_PatchSurface_getControlPointBuffer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				void* __values1 = pObjectX->getControlPointBuffer();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_PatchSurface_notifyControlPointBufferDeallocated_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CPatchSurface *pObjectX = (EarthView::World::Graphic::CPatchSurface*) pObjXXXX;
				pObjectX->notifyControlPointBufferDeallocated();
			}
		}
	}
}
