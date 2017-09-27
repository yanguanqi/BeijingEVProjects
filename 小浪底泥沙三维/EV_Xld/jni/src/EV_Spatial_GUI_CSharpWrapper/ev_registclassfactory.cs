using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial_GUI_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CControlEvent", new EarthView.World.Spatial.SystemUI.ControlEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CDatasetEditEvent", new EarthView.World.Spatial.SystemUI.DatasetEditEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CLayerEditingEvent", new EarthView.World.Spatial.SystemUI.LayerEditingEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CTouchPoint", new EarthView.World.Spatial.SystemUI.TouchPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CTouchSet", new EarthView.World.Spatial.SystemUI.TouchSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CTouchData", new EarthView.World.Spatial.SystemUI.TouchDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CGUIEvent", new EarthView.World.Spatial.SystemUI.GuieventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CGUIEventPtr", new EarthView.World.Spatial.SystemUI.GuieventptrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IActionFactory", new EarthView.World.Spatial.SystemUI.IactionfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IActionFactoryProxy", new EarthView.World.Spatial.SystemUI.IactionfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::ICommand", new EarthView.World.Spatial.SystemUI.IcommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::ICommandProxy", new EarthView.World.Spatial.SystemUI.IcommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IEntryBox", new EarthView.World.Spatial.SystemUI.IentryboxClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IEntryBoxProxy", new EarthView.World.Spatial.SystemUI.IentryboxClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IItem", new EarthView.World.Spatial.SystemUI.IitemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IItemProxy", new EarthView.World.Spatial.SystemUI.IitemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IMenu", new EarthView.World.Spatial.SystemUI.ImenuClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IMenuProxy", new EarthView.World.Spatial.SystemUI.ImenuClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialControl", new EarthView.World.Spatial.Atlas.IspatialcontrolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Atlas::ISpatialControlProxy", new EarthView.World.Spatial.Atlas.IspatialcontrolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::MotionEventPoint", new EarthView.World.Spatial.SystemUI.MotionEventPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::MotionEvent", new EarthView.World.Spatial.SystemUI.MotionEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::ITool", new EarthView.World.Spatial.SystemUI.ItoolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IToolProxy", new EarthView.World.Spatial.SystemUI.ItoolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IToolBar", new EarthView.World.Spatial.SystemUI.ItoolbarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IToolBarProxy", new EarthView.World.Spatial.SystemUI.ItoolbarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IToolButton", new EarthView.World.Spatial.SystemUI.ItoolbuttonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::IToolButtonProxy", new EarthView.World.Spatial.SystemUI.ItoolbuttonClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewListener", new EarthView.World.Spatial.IviewlistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewListenerProxy", new EarthView.World.Spatial.IviewlistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CLayoutActiveEvent", new EarthView.World.Spatial.SystemUI.LayoutActiveEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CLayoutOperationEvent", new EarthView.World.Spatial.SystemUI.LayoutOperationEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CMapActiveEvent", new EarthView.World.Spatial.SystemUI.MapActiveEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent", new EarthView.World.Spatial.SystemUI.MapLayersAddedEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent", new EarthView.World.Spatial.SystemUI.MapLayerActiveEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CMapOperationEvent", new EarthView.World.Spatial.SystemUI.MapOperationEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CPopUpMenuEvent", new EarthView.World.Spatial.SystemUI.PopUpMenuEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CSceneActiveEvent", new EarthView.World.Spatial.SystemUI.SceneActiveEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent", new EarthView.World.Spatial.SystemUI.SceneLayerActiveEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CSelectionChangedEvent", new EarthView.World.Spatial.SystemUI.SelectionChangedEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CSeparatorCommand", new EarthView.World.Spatial.SystemUI.SeparatorCommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::SystemUI::CSeparatorCommandProxy", new EarthView.World.Spatial.SystemUI.SeparatorCommandClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewArgs", new EarthView.World.Spatial.IviewargsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::IViewArgsProxy", new EarthView.World.Spatial.IviewargsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CMapViewArgs", new EarthView.World.Spatial.MapViewArgsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CMapViewArgsProxy", new EarthView.World.Spatial.MapViewArgsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CSceneViewArgs", new EarthView.World.Spatial.SceneViewArgsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CSceneViewArgsProxy", new EarthView.World.Spatial.SceneViewArgsClassFactory());
	}
}

