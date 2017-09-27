using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial_LASConvertProxy_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLASConverter", new EarthView.World.SpatialLASConvertProxy.LasconverterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLASConverterListener", new EarthView.World.SpatialLASConvertProxy.LasconverterlistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLASConverterListenerProxy", new EarthView.World.SpatialLASConvertProxy.LasconverterlistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListener", new EarthView.World.SpatialLASConvertProxy.LasLODGenerateListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerateListenerProxy", new EarthView.World.SpatialLASConvertProxy.LasLODGenerateListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODParam", new EarthView.World.SpatialLASConvertProxy.LasLODParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasLODGenerator", new EarthView.World.SpatialLASConvertProxy.LasLODGeneratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CTempVertex", new EarthView.World.SpatialLASConvertProxy.TempVertexClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CTempVertexVector", new EarthView.World.SpatialLASConvertProxy.TempVertexVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasOptimizeParams", new EarthView.World.SpatialLASConvertProxy.LasOptimizeParamsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::SpatialLASConvertProxy::CLasOptimizeTool", new EarthView.World.SpatialLASConvertProxy.LasOptimizeToolClassFactory());
	}
}

