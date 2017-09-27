package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial_GUI_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CControlEvent", new com.earthview.world.spatial.systemui.ControlEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CDatasetEditEvent", new com.earthview.world.spatial.systemui.DatasetEditEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CLayerEditingEvent", new com.earthview.world.spatial.systemui.LayerEditingEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CTouchPoint", new com.earthview.world.spatial.systemui.TouchPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CTouchSet", new com.earthview.world.spatial.systemui.TouchSetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CTouchData", new com.earthview.world.spatial.systemui.TouchDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CGUIEvent", new com.earthview.world.spatial.systemui.GuieventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CGUIEventPtr", new com.earthview.world.spatial.systemui.GuieventptrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IActionFactory", new com.earthview.world.spatial.systemui.IactionfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIActionFactoryProxy", new com.earthview.world.spatial.systemui.IactionfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::ICommand", new com.earthview.world.spatial.systemui.IcommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JICommandProxy", new com.earthview.world.spatial.systemui.IcommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IEntryBox", new com.earthview.world.spatial.systemui.IentryboxClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIEntryBoxProxy", new com.earthview.world.spatial.systemui.IentryboxClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IItem", new com.earthview.world.spatial.systemui.IitemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIItemProxy", new com.earthview.world.spatial.systemui.IitemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IMenu", new com.earthview.world.spatial.systemui.ImenuClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIMenuProxy", new com.earthview.world.spatial.systemui.ImenuClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::ISpatialControl", new com.earthview.world.spatial.atlas.IspatialcontrolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Atlas::JISpatialControlProxy", new com.earthview.world.spatial.atlas.IspatialcontrolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::MotionEventPoint", new com.earthview.world.spatial.systemui.MotionEventPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::MotionEvent", new com.earthview.world.spatial.systemui.MotionEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::ITool", new com.earthview.world.spatial.systemui.ItoolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIToolProxy", new com.earthview.world.spatial.systemui.ItoolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IToolBar", new com.earthview.world.spatial.systemui.ItoolbarClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIToolBarProxy", new com.earthview.world.spatial.systemui.ItoolbarClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::IToolButton", new com.earthview.world.spatial.systemui.ItoolbuttonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JIToolButtonProxy", new com.earthview.world.spatial.systemui.ItoolbuttonClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::IViewListener", new com.earthview.world.spatial.IviewlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JIViewListenerProxy", new com.earthview.world.spatial.IviewlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CLayoutActiveEvent", new com.earthview.world.spatial.systemui.LayoutActiveEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CLayoutOperationEvent", new com.earthview.world.spatial.systemui.LayoutOperationEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CMapActiveEvent", new com.earthview.world.spatial.systemui.MapActiveEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent", new com.earthview.world.spatial.systemui.MapLayersAddedEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent", new com.earthview.world.spatial.systemui.MapLayerActiveEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CMapOperationEvent", new com.earthview.world.spatial.systemui.MapOperationEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CPopUpMenuEvent", new com.earthview.world.spatial.systemui.PopUpMenuEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CSceneActiveEvent", new com.earthview.world.spatial.systemui.SceneActiveEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent", new com.earthview.world.spatial.systemui.SceneLayerActiveEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CSelectionChangedEvent", new com.earthview.world.spatial.systemui.SelectionChangedEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::CSeparatorCommand", new com.earthview.world.spatial.systemui.SeparatorCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::SystemUI::JCSeparatorCommandProxy", new com.earthview.world.spatial.systemui.SeparatorCommandClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::IViewArgs", new com.earthview.world.spatial.IviewargsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JIViewArgsProxy", new com.earthview.world.spatial.IviewargsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CMapViewArgs", new com.earthview.world.spatial.MapViewArgsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCMapViewArgsProxy", new com.earthview.world.spatial.MapViewArgsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CSceneViewArgs", new com.earthview.world.spatial.SceneViewArgsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCSceneViewArgsProxy", new com.earthview.world.spatial.SceneViewArgsClassFactory());
	}
}

