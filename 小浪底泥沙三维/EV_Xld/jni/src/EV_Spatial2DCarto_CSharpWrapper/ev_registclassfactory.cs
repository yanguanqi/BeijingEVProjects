using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial2DCarto_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CCartoOutput2D", new EarthView.World.Spatial.Carto.CartoOutput2DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CCartoOutput2DProxy", new EarthView.World.Spatial.Carto.CartoOutput2DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CGeometryInsert", new EarthView.World.Spatial.Carto.GeometryInsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CGeometryInsertProxy", new EarthView.World.Spatial.Carto.GeometryInsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CGraticales", new EarthView.World.Spatial.Carto.GraticalesClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CGraticalesProxy", new EarthView.World.Spatial.Carto.GraticalesClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CKilometerGrid", new EarthView.World.Spatial.Carto.KilometerGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CKilometerGridProxy", new EarthView.World.Spatial.Carto.KilometerGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CLegend", new EarthView.World.Spatial.Carto.LegendClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CLegendProxy", new EarthView.World.Spatial.Carto.LegendClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CLegendItem", new EarthView.World.Spatial.Carto.LegendItemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CLegendItemProxy", new EarthView.World.Spatial.Carto.LegendItemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CLegendItemVector", new EarthView.World.Spatial.Carto.LegendItemVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CLegendItemVectorProxy", new EarthView.World.Spatial.Carto.LegendItemVectorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CLegendItemManager", new EarthView.World.Spatial.Carto.LegendItemManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CMapFrame", new EarthView.World.Spatial.Carto.MapFrameClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CMapFrameProxy", new EarthView.World.Spatial.Carto.MapFrameClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CMapTitle", new EarthView.World.Spatial.Carto.MapTitleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CMapTitleProxy", new EarthView.World.Spatial.Carto.MapTitleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CMarkNorthArrow", new EarthView.World.Spatial.Carto.MarkNorthArrowClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CMarkNorthArrowProxy", new EarthView.World.Spatial.Carto.MarkNorthArrowClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPage", new EarthView.World.Spatial.Carto.PageClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPageProxy", new EarthView.World.Spatial.Carto.PageClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPageLayout", new EarthView.World.Spatial.Carto.PageLayoutClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPageLayoutProxy", new EarthView.World.Spatial.Carto.PageLayoutClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPageUnitConverter", new EarthView.World.Spatial.Carto.PageUnitConverterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPictureInsert", new EarthView.World.Spatial.Carto.PictureInsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CPictureInsertProxy", new EarthView.World.Spatial.Carto.PictureInsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CReferenceGrid", new EarthView.World.Spatial.Carto.ReferenceGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CReferenceGridProxy", new EarthView.World.Spatial.Carto.ReferenceGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CScaleBar", new EarthView.World.Spatial.Carto.ScaleBarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CScaleBarProxy", new EarthView.World.Spatial.Carto.ScaleBarClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CScaleText", new EarthView.World.Spatial.Carto.ScaleTextClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CScaleTextProxy", new EarthView.World.Spatial.Carto.ScaleTextClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CSquareGrid", new EarthView.World.Spatial.Carto.SquareGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CSquareGridProxy", new EarthView.World.Spatial.Carto.SquareGridClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CSymbolConvertor", new EarthView.World.Spatial.Carto.SymbolConvertorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CTextInsert", new EarthView.World.Spatial.Carto.TextInsertClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Carto::CTextInsertProxy", new EarthView.World.Spatial.Carto.TextInsertClassFactory());
	}
}

