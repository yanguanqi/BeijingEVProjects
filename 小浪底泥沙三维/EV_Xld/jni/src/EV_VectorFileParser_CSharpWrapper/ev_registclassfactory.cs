using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_VectorFileParser_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister", new EarthView.World.Spatial.VectorFileParser.EvfeatureclassdriverregisterClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver", new EarthView.World.Spatial.VectorFileParser.FeatureClassDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CFeatureClassDriverProxy", new EarthView.World.Spatial.VectorFileParser.FeatureClassDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileAnnoLayer", new EarthView.World.Spatial.VectorFileParser.IvectorfileannolayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileAnnoLayerProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfileannolayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileAnnoLayerFactory", new EarthView.World.Spatial.VectorFileParser.IvectorfileannolayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileAnnoLayerFactoryProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfileannolayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayer", new EarthView.World.Spatial.VectorFileParser.IvectorfiledatalayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfiledatalayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory", new EarthView.World.Spatial.VectorFileParser.IvectorfiledatalayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactoryProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfiledatalayerfactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty", new EarthView.World.Spatial.VectorFileParser.IvectorfiledatalayerlabelpropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelPropertyProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfiledatalayerlabelpropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeature", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureclassClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClassProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureclassClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureIterator", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureiteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureIteratorProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureiteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelectionProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfilefeatureselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileLayerSelection", new EarthView.World.Spatial.VectorFileParser.IvectorfilelayerselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileLayerSelectionProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfilelayerselectionClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfiletableproxyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxyProxy", new EarthView.World.Spatial.VectorFileParser.IvectorfiletableproxyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CVectorFileDataSource", new EarthView.World.Spatial.VectorFileParser.VectorFileDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CVectorFileDataSourceProxy", new EarthView.World.Spatial.VectorFileParser.VectorFileDataSourceClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CVectorFileDataSourceFactory", new EarthView.World.Spatial.VectorFileParser.VectorFileDataSourceFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::VectorFileParser::CVectorFileDataSourceFactoryProxy", new EarthView.World.Spatial.VectorFileParser.VectorFileDataSourceFactoryClassFactory());
	}
}

