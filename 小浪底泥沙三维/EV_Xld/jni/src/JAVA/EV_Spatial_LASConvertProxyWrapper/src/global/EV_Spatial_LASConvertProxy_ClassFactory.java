package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial_LASConvertProxy_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLASConverter", new com.earthview.world.spatiallasconvertproxy.LasconverterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLASConverterListener", new com.earthview.world.spatiallasconvertproxy.LasconverterlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::JCLASConverterListenerProxy", new com.earthview.world.spatiallasconvertproxy.LasconverterlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener", new com.earthview.world.spatiallasconvertproxy.LasLODGenerateListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::JCLasLODGenerateListenerProxy", new com.earthview.world.spatiallasconvertproxy.LasLODGenerateListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasLODParam", new com.earthview.world.spatiallasconvertproxy.LasLODParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerator", new com.earthview.world.spatiallasconvertproxy.LasLODGeneratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CTempVertex", new com.earthview.world.spatiallasconvertproxy.TempVertexClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CTempVertexVector", new com.earthview.world.spatiallasconvertproxy.TempVertexVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams", new com.earthview.world.spatiallasconvertproxy.LasOptimizeParamsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool", new com.earthview.world.spatiallasconvertproxy.LasOptimizeToolClassFactory());
	}
}

