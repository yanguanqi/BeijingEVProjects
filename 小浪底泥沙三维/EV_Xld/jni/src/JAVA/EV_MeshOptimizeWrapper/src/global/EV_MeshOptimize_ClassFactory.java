package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_MeshOptimize_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimizeParams", new com.earthview.meshoptimize.MeshOptimizeParamsClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimize", new com.earthview.meshoptimize.MeshOptimizeClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimizeData", new com.earthview.meshoptimize.MeshOptimizeDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::MeshOptimizeDataList", new com.earthview.meshoptimize.MeshOptimizeDataListClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CMeshOptimizeDataSource", new com.earthview.meshoptimize.MeshOptimizeDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CModelLODGenerateListener", new com.earthview.meshoptimize.ModelLODGenerateListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::JCModelLODGenerateListenerProxy", new com.earthview.meshoptimize.ModelLODGenerateListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CModelLODParam", new com.earthview.meshoptimize.ModelLODParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CModelLODGenerator", new com.earthview.meshoptimize.ModelLODGeneratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqQuadTreeParam", new com.earthview.meshoptimize.ObqQuadTreeParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqMergeListener", new com.earthview.meshoptimize.ObqMergeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::JCObqMergeListenerProxy", new com.earthview.meshoptimize.ObqMergeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqMergeInstanceData", new com.earthview.meshoptimize.ObqMergeInstanceDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqMergeInstanceDataList", new com.earthview.meshoptimize.ObqMergeInstanceDataListClassFactory());
		GlobalClassFactoryMap.put("EarthView::MeshOptimize::CObqMerge", new com.earthview.meshoptimize.ObqMergeClassFactory());
	}
}

