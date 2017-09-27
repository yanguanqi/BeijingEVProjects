package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_VectorFileParser_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister", new com.earthview.world.spatial.vectorfileparser.EvfeatureclassdriverregisterClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver", new com.earthview.world.spatial.vectorfileparser.FeatureClassDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JCFeatureClassDriverProxy", new com.earthview.world.spatial.vectorfileparser.FeatureClassDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileAnnoLayer", new com.earthview.world.spatial.vectorfileparser.IvectorfileannolayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileAnnoLayerProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfileannolayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileAnnoLayerFactory", new com.earthview.world.spatial.vectorfileparser.IvectorfileannolayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileAnnoLayerFactoryProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfileannolayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayer", new com.earthview.world.spatial.vectorfileparser.IvectorfiledatalayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileDataLayerProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfiledatalayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory", new com.earthview.world.spatial.vectorfileparser.IvectorfiledatalayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileDataLayerFactoryProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfiledatalayerfactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerLabelProperty", new com.earthview.world.spatial.vectorfileparser.IvectorfiledatalayerlabelpropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileDataLayerLabelPropertyProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfiledatalayerlabelpropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeature", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileFeatureProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureClass", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureclassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileFeatureClassProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureclassClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureIterator", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileFeatureIteratorProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureiteratorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileFeatureSelection", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureselectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileFeatureSelectionProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfilefeatureselectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileLayerSelection", new com.earthview.world.spatial.vectorfileparser.IvectorfilelayerselectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileLayerSelectionProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfilelayerselectionClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::IVectorFileTableProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfiletableproxyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JIVectorFileTableProxyProxy", new com.earthview.world.spatial.vectorfileparser.IvectorfiletableproxyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::CVectorFileDataSource", new com.earthview.world.spatial.vectorfileparser.VectorFileDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JCVectorFileDataSourceProxy", new com.earthview.world.spatial.vectorfileparser.VectorFileDataSourceClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::CVectorFileDataSourceFactory", new com.earthview.world.spatial.vectorfileparser.VectorFileDataSourceFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::VectorFileParser::JCVectorFileDataSourceFactoryProxy", new com.earthview.world.spatial.vectorfileparser.VectorFileDataSourceFactoryClassFactory());
	}
}

