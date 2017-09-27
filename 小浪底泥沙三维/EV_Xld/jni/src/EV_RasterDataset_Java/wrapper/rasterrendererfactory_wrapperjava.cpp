/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterrendererfactory.h"
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
			namespace Raster
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterRendererFactory_createRendererFromStream_1CDataStream(JNIEnv *__env , jclass __clazz, jlong stream_j)
				{
					EarthView::World::Core::CDataStream &stream = *(EarthView::World::Core::CDataStream*) stream_j;
					EarthView::World::Spatial2D::Raster::IRasterRenderer* __values1 = EarthView::World::Spatial2D::Raster::CRasterRendererFactory::createRendererFromStream(stream);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_raster_RasterRendererFactory_createRendererFromXmlElement_1CXmlElement(JNIEnv *__env , jclass __clazz, jlong element_j)
				{
					EarthView::World::Core::CXmlElement &element = *(EarthView::World::Core::CXmlElement*) element_j;
					EarthView::World::Spatial2D::Raster::IRasterRenderer* __values1 = EarthView::World::Spatial2D::Raster::CRasterRendererFactory::createRendererFromXmlElement(element);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_raster_RasterRendererFactory_destroyRenderer_1IRasterRenderer(JNIEnv *__env , jclass __clazz, jlong pRenderer_j)
				{
					EarthView::World::Spatial2D::Raster::IRasterRenderer *pRenderer = (EarthView::World::Spatial2D::Raster::IRasterRenderer*) pRenderer_j;
					EarthView::World::Spatial2D::Raster::CRasterRendererFactory::destroyRenderer(pRenderer);
				}
			}
		}
	}
}
