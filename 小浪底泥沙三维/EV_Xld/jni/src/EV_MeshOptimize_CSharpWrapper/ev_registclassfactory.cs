using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_MeshOptimize_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimizeParams", new EarthView.MeshOptimize.MeshOptimizeParamsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimize", new EarthView.MeshOptimize.MeshOptimizeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimizeData", new EarthView.MeshOptimize.MeshOptimizeDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::MeshOptimizeDataList", new EarthView.MeshOptimize.MeshOptimizeDataListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CMeshOptimizeDataSource", new EarthView.MeshOptimize.MeshOptimizeDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODGenerateListener", new EarthView.MeshOptimize.ModelLODGenerateListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODGenerateListenerProxy", new EarthView.MeshOptimize.ModelLODGenerateListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODParam", new EarthView.MeshOptimize.ModelLODParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CModelLODGenerator", new EarthView.MeshOptimize.ModelLODGeneratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqQuadTreeParam", new EarthView.MeshOptimize.ObqQuadTreeParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeListener", new EarthView.MeshOptimize.ObqMergeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeListenerProxy", new EarthView.MeshOptimize.ObqMergeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeInstanceData", new EarthView.MeshOptimize.ObqMergeInstanceDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMergeInstanceDataList", new EarthView.MeshOptimize.ObqMergeInstanceDataListClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::MeshOptimize::CObqMerge", new EarthView.MeshOptimize.ObqMergeClassFactory());
	}
}

