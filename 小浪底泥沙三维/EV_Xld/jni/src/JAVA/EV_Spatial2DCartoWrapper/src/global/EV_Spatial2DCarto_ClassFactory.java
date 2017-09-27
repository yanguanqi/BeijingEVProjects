package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial2DCarto_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CCartoOutput2D", new com.earthview.world.spatial.carto.CartoOutput2DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCCartoOutput2DProxy", new com.earthview.world.spatial.carto.CartoOutput2DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CGeometryInsert", new com.earthview.world.spatial.carto.GeometryInsertClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCGeometryInsertProxy", new com.earthview.world.spatial.carto.GeometryInsertClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CGraticales", new com.earthview.world.spatial.carto.GraticalesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCGraticalesProxy", new com.earthview.world.spatial.carto.GraticalesClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CKilometerGrid", new com.earthview.world.spatial.carto.KilometerGridClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCKilometerGridProxy", new com.earthview.world.spatial.carto.KilometerGridClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegend", new com.earthview.world.spatial.carto.LegendClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCLegendProxy", new com.earthview.world.spatial.carto.LegendClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegendItem", new com.earthview.world.spatial.carto.LegendItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCLegendItemProxy", new com.earthview.world.spatial.carto.LegendItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegendItemVector", new com.earthview.world.spatial.carto.LegendItemVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCLegendItemVectorProxy", new com.earthview.world.spatial.carto.LegendItemVectorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CLegendItemManager", new com.earthview.world.spatial.carto.LegendItemManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CMapFrame", new com.earthview.world.spatial.carto.MapFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCMapFrameProxy", new com.earthview.world.spatial.carto.MapFrameClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CMapTitle", new com.earthview.world.spatial.carto.MapTitleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCMapTitleProxy", new com.earthview.world.spatial.carto.MapTitleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CMarkNorthArrow", new com.earthview.world.spatial.carto.MarkNorthArrowClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCMarkNorthArrowProxy", new com.earthview.world.spatial.carto.MarkNorthArrowClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CPage", new com.earthview.world.spatial.carto.PageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCPageProxy", new com.earthview.world.spatial.carto.PageClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CPageLayout", new com.earthview.world.spatial.carto.PageLayoutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCPageLayoutProxy", new com.earthview.world.spatial.carto.PageLayoutClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CPageUnitConverter", new com.earthview.world.spatial.carto.PageUnitConverterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CPictureInsert", new com.earthview.world.spatial.carto.PictureInsertClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCPictureInsertProxy", new com.earthview.world.spatial.carto.PictureInsertClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CReferenceGrid", new com.earthview.world.spatial.carto.ReferenceGridClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCReferenceGridProxy", new com.earthview.world.spatial.carto.ReferenceGridClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CScaleBar", new com.earthview.world.spatial.carto.ScaleBarClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCScaleBarProxy", new com.earthview.world.spatial.carto.ScaleBarClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CScaleText", new com.earthview.world.spatial.carto.ScaleTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCScaleTextProxy", new com.earthview.world.spatial.carto.ScaleTextClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CSquareGrid", new com.earthview.world.spatial.carto.SquareGridClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCSquareGridProxy", new com.earthview.world.spatial.carto.SquareGridClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CSymbolConvertor", new com.earthview.world.spatial.carto.SymbolConvertorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::CTextInsert", new com.earthview.world.spatial.carto.TextInsertClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Carto::JCTextInsertProxy", new com.earthview.world.spatial.carto.TextInsertClassFactory());
	}
}

