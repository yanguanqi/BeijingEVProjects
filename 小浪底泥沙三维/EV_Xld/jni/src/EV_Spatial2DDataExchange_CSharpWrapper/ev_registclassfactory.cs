using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial2DDataExchange_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataDriver", new EarthView.World.Spatial.Convertor.DataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataDriverProxy", new EarthView.World.Spatial.Convertor.DataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataDriverFactory", new EarthView.World.Spatial.Convertor.DataDriverFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataExchangeParam", new EarthView.World.Spatial.Convertor.DataExchangeParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataExchange", new EarthView.World.Spatial.Convertor.DataExchangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataExchangeProxy", new EarthView.World.Spatial.Convertor.DataExchangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataExchange2D", new EarthView.World.Spatial.Convertor.DataExchange2DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataExchange2DProxy", new EarthView.World.Spatial.Convertor.DataExchange2DClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataExchangeListener", new EarthView.World.Spatial.Convertor.DataExchangeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDataExchangeListenerProxy", new EarthView.World.Spatial.Convertor.DataExchangeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDBRasterDriver", new EarthView.World.Spatial.Convertor.DbrasterdriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDBRasterDriverProxy", new EarthView.World.Spatial.Convertor.DbrasterdriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CDBRasterExchangeParam", new EarthView.World.Spatial.Convertor.DbrasterexchangeparamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver", new EarthView.World.Spatial.Convertor.EarthViewDataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriverProxy", new EarthView.World.Spatial.Convertor.EarthViewDataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver2", new EarthView.World.Spatial.Convertor.EarthViewDataDriver2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CEarthViewDataDriver2Proxy", new EarthView.World.Spatial.Convertor.EarthViewDataDriver2ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CFileRasterDriver", new EarthView.World.Spatial.Convertor.FileRasterDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CFileRasterDriverProxy", new EarthView.World.Spatial.Convertor.FileRasterDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CMapinfoDataDriver", new EarthView.World.Spatial.Convertor.MapinfoDataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CMapinfoDataDriverProxy", new EarthView.World.Spatial.Convertor.MapinfoDataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CShapefileDataDriver", new EarthView.World.Spatial.Convertor.ShapefileDataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CShapefileDataDriverProxy", new EarthView.World.Spatial.Convertor.ShapefileDataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Convertor::CSQLKeyChecker", new EarthView.World.Spatial.Convertor.SqlkeycheckerClassFactory());
	}
}

