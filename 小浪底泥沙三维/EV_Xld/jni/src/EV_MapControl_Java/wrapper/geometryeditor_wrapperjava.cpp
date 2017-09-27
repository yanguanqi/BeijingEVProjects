/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/geometryeditor.h"
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
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_setGeometryType_1EVGeometryType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint type_j)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType type = (EarthView::World::Spatial::Geometry::EVGeometryType) type_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->setGeometryType(type);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getGeometryType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType __values1 = pObjectX->getGeometryType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_loadGeometry_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
				{
					ev_int32 id = (ev_int32) id_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->loadGeometry(id);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getGeometryID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getGeometryID();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getSketchSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSketchSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_setSketchSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->setSketchSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getSketchVertexSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSketchVertexSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_setSketchVertexSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->setSketchVertexSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getEndVertexSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getEndVertexSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_setEndVertexSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->setEndVertexSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getGeometry_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::IGeometry* __values1 = pObjectX->getGeometry();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_setActiveType_1EditingObjectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint objectType_j)
				{
					EarthView::World::Spatial2D::Controls::EditingObjectType objectType = (EarthView::World::Spatial2D::Controls::EditingObjectType) objectType_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->setActiveType(objectType);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getActiveType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::EditingObjectType __values1 = pObjectX->getActiveType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getActiveObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->getActiveObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getActivePart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->getActivePart();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_getEditingSketch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingSketch* __values1 = pObjectX->getEditingSketch();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_updateSketch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->updateSketch();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->reset();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_registerObject_1CEditingObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong object_j)
				{
					EarthView::World::Spatial2D::Controls::CEditingObject *object = (EarthView::World::Spatial2D::Controls::CEditingObject*) object_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					pObjectX->registerObject(object);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_GeometryEditor_newObject_1EditingObjectType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint objectType_j)
				{
					EarthView::World::Spatial2D::Controls::EditingObjectType objectType = (EarthView::World::Spatial2D::Controls::EditingObjectType) objectType_j;
					EarthView::World::Spatial2D::Controls::CGeometryEditor *pObjectX = (EarthView::World::Spatial2D::Controls::CGeometryEditor*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->newObject(objectType);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
