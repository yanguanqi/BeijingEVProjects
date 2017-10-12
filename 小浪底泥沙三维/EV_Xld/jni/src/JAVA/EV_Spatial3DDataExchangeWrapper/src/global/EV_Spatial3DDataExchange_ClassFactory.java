package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial3DDataExchange_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CShapeDataExchange", new com.earthview.world.spatial3d.dataexchange.ShapeDataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::JCShapeDataExchangeProxy", new com.earthview.world.spatial3d.dataexchange.ShapeDataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CDatasourceHelper", new com.earthview.world.spatial3d.dataexchange.DatasourceHelperClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CDataSourceUrl", new com.earthview.world.spatial3d.dataexchange.DataSourceUrlClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CEarthViewModelDriver", new com.earthview.world.spatial3d.dataexchange.EarthViewModelDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CEntityMetaData", new com.earthview.world.spatial3d.dataexchange.EntityMetaDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshFileLoader", new com.earthview.world.spatial3d.dataexchange.MeshFileLoaderClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshAnalyse", new com.earthview.world.spatial3d.dataexchange.MeshAnalyseClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshResourceItem", new com.earthview.world.spatial3d.dataexchange.MeshResourceItemClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshResourceMap", new com.earthview.world.spatial3d.dataexchange.MeshResourceMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::MeshAttrMap", new com.earthview.world.spatial3d.dataexchange.MeshAttrMapClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshData", new com.earthview.world.spatial3d.dataexchange.MeshDataClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshDataCreator", new com.earthview.world.spatial3d.dataexchange.MeshDataCreatorClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshFileDriver", new com.earthview.world.spatial3d.dataexchange.MeshFileDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshParams", new com.earthview.world.spatial3d.dataexchange.MeshParamsClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CMeshUtility", new com.earthview.world.spatial3d.dataexchange.MeshUtilityClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataDriver", new com.earthview.world.spatial3d.dataexchange.ModelDataDriverClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataDriverFactory", new com.earthview.world.spatial3d.dataexchange.ModelDataDriverFactoryClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataExchange", new com.earthview.world.spatial3d.dataexchange.ModelDataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::JCModelDataExchangeProxy", new com.earthview.world.spatial3d.dataexchange.ModelDataExchangeClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelDataExchangeListener", new com.earthview.world.spatial3d.dataexchange.ModelDataExchangeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::JCModelDataExchangeListenerProxy", new com.earthview.world.spatial3d.dataexchange.ModelDataExchangeListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CModelSceneSerialzier", new com.earthview.world.spatial3d.dataexchange.ModelSceneSerialzierClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::ShapeFieldsList", new com.earthview.world.spatial3d.dataexchange.ShapeFieldsListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::EntityMetaDataList", new com.earthview.world.spatial3d.dataexchange.EntityMetaDataListClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CParseShapeFile", new com.earthview.world.spatial3d.dataexchange.ParseShapeFileClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CScaleField", new com.earthview.world.spatial3d.dataexchange.ScaleFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CQuationField", new com.earthview.world.spatial3d.dataexchange.QuationFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CSkewField", new com.earthview.world.spatial3d.dataexchange.SkewFieldClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3D::DataExchange::CShapeAssignedFields", new com.earthview.world.spatial3d.dataexchange.ShapeAssignedFieldsClassFactory());
	}
}

