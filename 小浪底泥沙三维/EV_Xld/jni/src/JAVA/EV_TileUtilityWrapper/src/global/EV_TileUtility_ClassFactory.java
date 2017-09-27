package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_TileUtility_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CAttributionElement", new com.earthview.world.spatial.AttributionElementClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CAttributionTile", new com.earthview.world.spatial.AttributionTileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CDecode", new com.earthview.world.spatial.DecodeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeoElement", new com.earthview.world.spatial.GeoElementClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CGeoElementDrawing", new com.earthview.world.spatial.GeoElementDrawingClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CImageTileMetaInfo", new com.earthview.world.spatial.ImageTileMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCImageTileMetaInfoProxy", new com.earthview.world.spatial.ImageTileMetaInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileDataset", new com.earthview.world.spatial.ItiledatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JITileDatasetProxy", new com.earthview.world.spatial.ItiledatasetClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileMetaInfo", new com.earthview.world.spatial.ItilemetainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JITileMetaInfoProxy", new com.earthview.world.spatial.ItilemetainfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CLabelAlongLineAlgorithm", new com.earthview.world.spatial.LabelAlongLineAlgorithmClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CLabelDrawAlgorithm", new com.earthview.world.spatial.LabelDrawAlgorithmClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CLabelWithInAlgorithm", new com.earthview.world.spatial.LabelWithInAlgorithmClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::MeshStream", new com.earthview.world.spatial.MeshStreamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CMeshStreamPackageTool", new com.earthview.world.spatial.MeshStreamPackageToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CPixelPoint", new com.earthview.world.spatial.PixelPointClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileAttachmentPtr", new com.earthview.world.spatial.ItileattachmentptrClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileAttachment", new com.earthview.world.spatial.ItileattachmentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JITileAttachmentProxy", new com.earthview.world.spatial.ItileattachmentClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::ITileAttachment::LodParam", new com.earthview.world.spatial.Itileattachment.LodParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileBlockInfo", new com.earthview.world.spatial.TileBlockInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileData", new com.earthview.world.spatial.TileDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileDBPathRule", new com.earthview.world.spatial.TileDBPathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCTileDBPathRuleProxy", new com.earthview.world.spatial.TileDBPathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileFilePathRule", new com.earthview.world.spatial.TileFilePathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCTileFilePathRuleProxy", new com.earthview.world.spatial.TileFilePathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileInfo", new com.earthview.world.spatial.TileInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileLevel", new com.earthview.world.spatial.TileLevelClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileLevelInfo", new com.earthview.world.spatial.TileLevelInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileOrigin", new com.earthview.world.spatial.TileOriginClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePath", new com.earthview.world.spatial.TilePathClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePathRule", new com.earthview.world.spatial.TilePathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::JCTilePathRuleProxy", new com.earthview.world.spatial.TilePathRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePathRuleFactory", new com.earthview.world.spatial.TilePathRuleFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilePixelSize", new com.earthview.world.spatial.TilePixelSizeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileReference", new com.earthview.world.spatial.TileReferenceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileReferenceFactory", new com.earthview.world.spatial.TileReferenceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTileRule", new com.earthview.world.spatial.TileRuleClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CTilesInfo", new com.earthview.world.spatial.TilesInfoClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::CVectorTile", new com.earthview.world.spatial.VectorTileClassFactory());
	}
}

