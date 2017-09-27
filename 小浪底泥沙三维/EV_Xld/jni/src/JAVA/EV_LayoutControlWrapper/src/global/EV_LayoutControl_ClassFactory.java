package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_LayoutControl_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandDeleteElement", new com.earthview.world.layout.controls.CommandDeleteElementClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandDeleteElementProxy", new com.earthview.world.layout.controls.CommandDeleteElementClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandElementBottom", new com.earthview.world.layout.controls.CommandElementBottomClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandElementBottomProxy", new com.earthview.world.layout.controls.CommandElementBottomClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandElementDownward", new com.earthview.world.layout.controls.CommandElementDownwardClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandElementDownwardProxy", new com.earthview.world.layout.controls.CommandElementDownwardClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandElementTop", new com.earthview.world.layout.controls.CommandElementTopClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandElementTopProxy", new com.earthview.world.layout.controls.CommandElementTopClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandElementUpward", new com.earthview.world.layout.controls.CommandElementUpwardClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandElementUpwardProxy", new com.earthview.world.layout.controls.CommandElementUpwardClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandFullExtentInPage", new com.earthview.world.layout.controls.CommandFullExtentInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandFullExtentInPageProxy", new com.earthview.world.layout.controls.CommandFullExtentInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertLegend", new com.earthview.world.layout.controls.CommandInsertLegendClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertLegendProxy", new com.earthview.world.layout.controls.CommandInsertLegendClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertMapFrame", new com.earthview.world.layout.controls.CommandInsertMapFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertMapFrameProxy", new com.earthview.world.layout.controls.CommandInsertMapFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertMapTitle", new com.earthview.world.layout.controls.CommandInsertMapTitleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertMapTitleProxy", new com.earthview.world.layout.controls.CommandInsertMapTitleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertNorthArrow", new com.earthview.world.layout.controls.CommandInsertNorthArrowClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertNorthArrowProxy", new com.earthview.world.layout.controls.CommandInsertNorthArrowClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertPicture", new com.earthview.world.layout.controls.CommandInsertPictureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertPictureProxy", new com.earthview.world.layout.controls.CommandInsertPictureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertScaleBar", new com.earthview.world.layout.controls.CommandInsertScaleBarClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertScaleBarProxy", new com.earthview.world.layout.controls.CommandInsertScaleBarClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertScaleText", new com.earthview.world.layout.controls.CommandInsertScaleTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertScaleTextProxy", new com.earthview.world.layout.controls.CommandInsertScaleTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandInsertText", new com.earthview.world.layout.controls.CommandInsertTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandInsertTextProxy", new com.earthview.world.layout.controls.CommandInsertTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandLayoutRedo", new com.earthview.world.layout.controls.CommandLayoutRedoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandLayoutRedoProxy", new com.earthview.world.layout.controls.CommandLayoutRedoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandLayoutUndo", new com.earthview.world.layout.controls.CommandLayoutUndoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandLayoutUndoProxy", new com.earthview.world.layout.controls.CommandLayoutUndoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandMapExport", new com.earthview.world.layout.controls.CommandMapExportClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandMapExportProxy", new com.earthview.world.layout.controls.CommandMapExportClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandNextPageView", new com.earthview.world.layout.controls.CommandNextPageViewClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandNextPageViewProxy", new com.earthview.world.layout.controls.CommandNextPageViewClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandNextViewInPage", new com.earthview.world.layout.controls.CommandNextViewInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandNextViewInPageProxy", new com.earthview.world.layout.controls.CommandNextViewInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandPageFullExtent", new com.earthview.world.layout.controls.CommandPageFullExtentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandPageFullExtentProxy", new com.earthview.world.layout.controls.CommandPageFullExtentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandPageNormal", new com.earthview.world.layout.controls.CommandPageNormalClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandPageNormalProxy", new com.earthview.world.layout.controls.CommandPageNormalClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandPageSetting", new com.earthview.world.layout.controls.CommandPageSettingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandPageSettingProxy", new com.earthview.world.layout.controls.CommandPageSettingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandPreviousPageView", new com.earthview.world.layout.controls.CommandPreviousPageViewClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandPreviousPageViewProxy", new com.earthview.world.layout.controls.CommandPreviousPageViewClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandPreviousViewInPage", new com.earthview.world.layout.controls.CommandPreviousViewInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandPreviousViewInPageProxy", new com.earthview.world.layout.controls.CommandPreviousViewInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandZoomInByFixedScale", new com.earthview.world.layout.controls.CommandZoomInByFixedScaleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandZoomInByFixedScaleProxy", new com.earthview.world.layout.controls.CommandZoomInByFixedScaleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CCommandZoomOutByFixedScale", new com.earthview.world.layout.controls.CommandZoomOutByFixedScaleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCCommandZoomOutByFixedScaleProxy", new com.earthview.world.layout.controls.CommandZoomOutByFixedScaleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutCommand", new com.earthview.world.layout.controls.LayoutCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutCommandProxy", new com.earthview.world.layout.controls.LayoutCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutControlAgent", new com.earthview.world.layout.controls.LayoutControlAgentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutControlAgentProxy", new com.earthview.world.layout.controls.LayoutControlAgentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutControl", new com.earthview.world.layout.controls.LayoutControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutControlProxy", new com.earthview.world.layout.controls.LayoutControlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutOperation", new com.earthview.world.layout.controls.LayoutOperationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCLayoutOperationProxy", new com.earthview.world.layout.controls.LayoutOperationClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::ILayoutIndexObserver", new com.earthview.world.layout.controls.IlayoutindexobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JILayoutIndexObserverProxy", new com.earthview.world.layout.controls.IlayoutindexobserverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutOperationManager", new com.earthview.world.layout.controls.LayoutOperationManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CLayoutSublineRender", new com.earthview.world.layout.controls.LayoutSublineRenderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolElementSelection", new com.earthview.world.layout.controls.ToolElementSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolElementSelectionProxy", new com.earthview.world.layout.controls.ToolElementSelectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolLayout", new com.earthview.world.layout.controls.ToolLayoutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolLayoutProxy", new com.earthview.world.layout.controls.ToolLayoutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolPagePan", new com.earthview.world.layout.controls.ToolPagePanClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolPagePanProxy", new com.earthview.world.layout.controls.ToolPagePanClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolPageZoomIn", new com.earthview.world.layout.controls.ToolPageZoomInClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolPageZoomInProxy", new com.earthview.world.layout.controls.ToolPageZoomInClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolPageZoomOut", new com.earthview.world.layout.controls.ToolPageZoomOutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolPageZoomOutProxy", new com.earthview.world.layout.controls.ToolPageZoomOutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolPanInPage", new com.earthview.world.layout.controls.ToolPanInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolPanInPageProxy", new com.earthview.world.layout.controls.ToolPanInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolZoomInInPage", new com.earthview.world.layout.controls.ToolZoomInInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolZoomInInPageProxy", new com.earthview.world.layout.controls.ToolZoomInInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::CToolZoomOutInPage", new com.earthview.world.layout.controls.ToolZoomOutInPageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Layout::Controls::JCToolZoomOutInPageProxy", new com.earthview.world.layout.controls.ToolZoomOutInPageClassFactory());
	}
}

