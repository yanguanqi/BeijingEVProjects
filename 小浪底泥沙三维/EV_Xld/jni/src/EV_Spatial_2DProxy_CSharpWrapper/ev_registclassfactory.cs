using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial_2DProxy_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CCommandSaveEdits", new EarthView.World.Spatial2D.Controls.CommandSaveEditsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CCommandSaveEditsProxy", new EarthView.World.Spatial2D.Controls.CommandSaveEditsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CCommandStartEditing", new EarthView.World.Spatial2D.Controls.CommandStartEditingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CCommandStartEditingProxy", new EarthView.World.Spatial2D.Controls.CommandStartEditingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CCommandStopEditing", new EarthView.World.Spatial2D.Controls.CommandStopEditingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial2D::Controls::CCommandStopEditingProxy", new EarthView.World.Spatial2D.Controls.CommandStopEditingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CEditingLayerSet", new EditingLayerSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CEditingLayerSetProxy", new EditingLayerSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CEditingTaskSet", new EditingTaskSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CEditingTaskSetProxy", new EditingTaskSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CEditorButton", new EditorButtonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CEditorButtonProxy", new EditorButtonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdLayer", new NacmdlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdLayerProxy", new NacmdlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdDataset", new NacmddatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdDatasetProxy", new NacmddatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdNew", new NacmdnewClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdNewProxy", new NacmdnewClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdNewRouteLayer", new NacmdnewroutelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdNewRouteLayerProxy", new NacmdnewroutelayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdSolve", new NacmdsolveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNACmdSolveProxy", new NacmdsolveClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNetworkAnalystToolBar", new NetworkAnalystToolBarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNAToolAdjust", new NatooladjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNAToolAdjustProxy", new NatooladjustClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNAToolBarriar", new NatoolbarriarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNAToolBarriarProxy", new NatoolbarriarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNAToolStop", new NatoolstopClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("CNAToolStopProxy", new NatoolstopClassFactory());
	}
}

