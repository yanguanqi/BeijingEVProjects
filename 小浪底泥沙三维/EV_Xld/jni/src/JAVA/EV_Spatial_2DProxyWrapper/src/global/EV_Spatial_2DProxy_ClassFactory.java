package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial_2DProxy_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CCommandSaveEdits", new com.earthview.world.spatial2d.controls.CommandSaveEditsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCCommandSaveEditsProxy", new com.earthview.world.spatial2d.controls.CommandSaveEditsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CCommandStartEditing", new com.earthview.world.spatial2d.controls.CommandStartEditingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCCommandStartEditingProxy", new com.earthview.world.spatial2d.controls.CommandStartEditingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::CCommandStopEditing", new com.earthview.world.spatial2d.controls.CommandStopEditingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial2D::Controls::JCCommandStopEditingProxy", new com.earthview.world.spatial2d.controls.CommandStopEditingClassFactory());
		GlobalClassFactoryMap.put("CEditingLayerSet", new EditingLayerSetClassFactory());
		GlobalClassFactoryMap.put("JCEditingLayerSetProxy", new EditingLayerSetClassFactory());
		GlobalClassFactoryMap.put("CEditingTaskSet", new EditingTaskSetClassFactory());
		GlobalClassFactoryMap.put("JCEditingTaskSetProxy", new EditingTaskSetClassFactory());
		GlobalClassFactoryMap.put("CEditorButton", new EditorButtonClassFactory());
		GlobalClassFactoryMap.put("JCEditorButtonProxy", new EditorButtonClassFactory());
		GlobalClassFactoryMap.put("CNACmdLayer", new NacmdlayerClassFactory());
		GlobalClassFactoryMap.put("JCNACmdLayerProxy", new NacmdlayerClassFactory());
		GlobalClassFactoryMap.put("CNACmdDataset", new NacmddatasetClassFactory());
		GlobalClassFactoryMap.put("JCNACmdDatasetProxy", new NacmddatasetClassFactory());
		GlobalClassFactoryMap.put("CNACmdNew", new NacmdnewClassFactory());
		GlobalClassFactoryMap.put("JCNACmdNewProxy", new NacmdnewClassFactory());
		GlobalClassFactoryMap.put("CNACmdNewRouteLayer", new NacmdnewroutelayerClassFactory());
		GlobalClassFactoryMap.put("JCNACmdNewRouteLayerProxy", new NacmdnewroutelayerClassFactory());
		GlobalClassFactoryMap.put("CNACmdSolve", new NacmdsolveClassFactory());
		GlobalClassFactoryMap.put("JCNACmdSolveProxy", new NacmdsolveClassFactory());
		GlobalClassFactoryMap.put("CNetworkAnalystToolBar", new NetworkAnalystToolBarClassFactory());
		GlobalClassFactoryMap.put("CNAToolAdjust", new NatooladjustClassFactory());
		GlobalClassFactoryMap.put("JCNAToolAdjustProxy", new NatooladjustClassFactory());
		GlobalClassFactoryMap.put("CNAToolBarriar", new NatoolbarriarClassFactory());
		GlobalClassFactoryMap.put("JCNAToolBarriarProxy", new NatoolbarriarClassFactory());
		GlobalClassFactoryMap.put("CNAToolStop", new NatoolstopClassFactory());
		GlobalClassFactoryMap.put("JCNAToolStopProxy", new NatoolstopClassFactory());
	}
}

