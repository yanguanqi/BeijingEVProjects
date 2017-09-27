using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_TileUtility_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CAttributionElement", new EarthView.World.Spatial.AttributionElementClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CAttributionTile", new EarthView.World.Spatial.AttributionTileClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CDecode", new EarthView.World.Spatial.DecodeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CGeoElement", new EarthView.World.Spatial.GeoElementClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CGeoElementDrawing", new EarthView.World.Spatial.GeoElementDrawingClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CImageTileMetaInfo", new EarthView.World.Spatial.ImageTileMetaInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CImageTileMetaInfoProxy", new EarthView.World.Spatial.ImageTileMetaInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileDataset", new EarthView.World.Spatial.ItiledatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileDatasetProxy", new EarthView.World.Spatial.ItiledatasetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileMetaInfo", new EarthView.World.Spatial.ItilemetainfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileMetaInfoProxy", new EarthView.World.Spatial.ItilemetainfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CLabelAlongLineAlgorithm", new EarthView.World.Spatial.LabelAlongLineAlgorithmClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CLabelDrawAlgorithm", new EarthView.World.Spatial.LabelDrawAlgorithmClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CLabelWithInAlgorithm", new EarthView.World.Spatial.LabelWithInAlgorithmClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::MeshStream", new EarthView.World.Spatial.MeshStreamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CMeshStreamPackageTool", new EarthView.World.Spatial.MeshStreamPackageToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CPixelPoint", new EarthView.World.Spatial.PixelPointClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachmentPtr", new EarthView.World.Spatial.ItileattachmentptrClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachment", new EarthView.World.Spatial.ItileattachmentClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachmentProxy", new EarthView.World.Spatial.ItileattachmentClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::ITileAttachment::LodParam", new EarthView.World.Spatial.Itileattachment.LodParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileBlockInfo", new EarthView.World.Spatial.TileBlockInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileData", new EarthView.World.Spatial.TileDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileDBPathRule", new EarthView.World.Spatial.TileDBPathRuleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileDBPathRuleProxy", new EarthView.World.Spatial.TileDBPathRuleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileFilePathRule", new EarthView.World.Spatial.TileFilePathRuleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileFilePathRuleProxy", new EarthView.World.Spatial.TileFilePathRuleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileInfo", new EarthView.World.Spatial.TileInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileLevel", new EarthView.World.Spatial.TileLevelClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileLevelInfo", new EarthView.World.Spatial.TileLevelInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileOrigin", new EarthView.World.Spatial.TileOriginClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePath", new EarthView.World.Spatial.TilePathClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePathRule", new EarthView.World.Spatial.TilePathRuleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePathRuleProxy", new EarthView.World.Spatial.TilePathRuleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePathRuleFactory", new EarthView.World.Spatial.TilePathRuleFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilePixelSize", new EarthView.World.Spatial.TilePixelSizeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileReference", new EarthView.World.Spatial.TileReferenceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileReferenceFactory", new EarthView.World.Spatial.TileReferenceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTileRule", new EarthView.World.Spatial.TileRuleClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CTilesInfo", new EarthView.World.Spatial.TilesInfoClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::CVectorTile", new EarthView.World.Spatial.VectorTileClassFactory());
	}
}

