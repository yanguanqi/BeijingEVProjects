package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial2DDataExchange_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataDriver", new com.earthview.world.spatial.convertor.DataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataDriverProxy", new com.earthview.world.spatial.convertor.DataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataDriverFactory", new com.earthview.world.spatial.convertor.DataDriverFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchangeParam", new com.earthview.world.spatial.convertor.DataExchangeParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchange", new com.earthview.world.spatial.convertor.DataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataExchangeProxy", new com.earthview.world.spatial.convertor.DataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchange2D", new com.earthview.world.spatial.convertor.DataExchange2DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataExchange2DProxy", new com.earthview.world.spatial.convertor.DataExchange2DClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDataExchangeListener", new com.earthview.world.spatial.convertor.DataExchangeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDataExchangeListenerProxy", new com.earthview.world.spatial.convertor.DataExchangeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDBRasterDriver", new com.earthview.world.spatial.convertor.DbrasterdriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCDBRasterDriverProxy", new com.earthview.world.spatial.convertor.DbrasterdriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CDBRasterExchangeParam", new com.earthview.world.spatial.convertor.DbrasterexchangeparamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver", new com.earthview.world.spatial.convertor.EarthViewDataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCEarthViewDataDriverProxy", new com.earthview.world.spatial.convertor.EarthViewDataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver2", new com.earthview.world.spatial.convertor.EarthViewDataDriver2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCEarthViewDataDriver2Proxy", new com.earthview.world.spatial.convertor.EarthViewDataDriver2ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CFileRasterDriver", new com.earthview.world.spatial.convertor.FileRasterDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCFileRasterDriverProxy", new com.earthview.world.spatial.convertor.FileRasterDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CMapinfoDataDriver", new com.earthview.world.spatial.convertor.MapinfoDataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCMapinfoDataDriverProxy", new com.earthview.world.spatial.convertor.MapinfoDataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CShapefileDataDriver", new com.earthview.world.spatial.convertor.ShapefileDataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::JCShapefileDataDriverProxy", new com.earthview.world.spatial.convertor.ShapefileDataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Convertor::CSQLKeyChecker", new com.earthview.world.spatial.convertor.SqlkeycheckerClassFactory());
	}
}

