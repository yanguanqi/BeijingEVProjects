using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial3DDataExchange_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CDatasourceHelper", new EarthView.World.Spatial3D.DataExchange.DatasourceHelperClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CDataSourceUrl", new EarthView.World.Spatial3D.DataExchange.DataSourceUrlClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CEarthViewModelDriver", new EarthView.World.Spatial3D.DataExchange.EarthViewModelDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CEntityMetaData", new EarthView.World.Spatial3D.DataExchange.EntityMetaDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshFileLoader", new EarthView.World.Spatial3D.DataExchange.MeshFileLoaderClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshAnalyse", new EarthView.World.Spatial3D.DataExchange.MeshAnalyseClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshResourceItem", new EarthView.World.Spatial3D.DataExchange.MeshResourceItemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshResourceMap", new EarthView.World.Spatial3D.DataExchange.MeshResourceMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::MeshAttrMap", new EarthView.World.Spatial3D.DataExchange.MeshAttrMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshData", new EarthView.World.Spatial3D.DataExchange.MeshDataClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshDataCreator", new EarthView.World.Spatial3D.DataExchange.MeshDataCreatorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshFileDriver", new EarthView.World.Spatial3D.DataExchange.MeshFileDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshParams", new EarthView.World.Spatial3D.DataExchange.MeshParamsClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CMeshUtility", new EarthView.World.Spatial3D.DataExchange.MeshUtilityClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataDriver", new EarthView.World.Spatial3D.DataExchange.ModelDataDriverClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory", new EarthView.World.Spatial3D.DataExchange.ModelDataDriverFactoryClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataExchange", new EarthView.World.Spatial3D.DataExchange.ModelDataExchangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataExchangeProxy", new EarthView.World.Spatial3D.DataExchange.ModelDataExchangeClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener", new EarthView.World.Spatial3D.DataExchange.ModelDataExchangeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListenerProxy", new EarthView.World.Spatial3D.DataExchange.ModelDataExchangeListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier", new EarthView.World.Spatial3D.DataExchange.ModelSceneSerialzierClassFactory());
	}
}

