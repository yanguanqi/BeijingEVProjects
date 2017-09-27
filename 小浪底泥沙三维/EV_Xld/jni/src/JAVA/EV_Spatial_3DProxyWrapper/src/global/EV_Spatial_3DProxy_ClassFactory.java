package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_Spatial_3DProxy_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectDBManager", new com.earthview.world.spatial3dproxy.EffectDBManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectInfoPanelParam", new com.earthview.world.spatial3dproxy.EffectInfoPanelParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCEffectInfoPanelParamProxy", new com.earthview.world.spatial3dproxy.EffectInfoPanelParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CAnimationTrailListener", new com.earthview.world.spatial3dproxy.AnimationTrailListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCAnimationTrailListenerProxy", new com.earthview.world.spatial3dproxy.AnimationTrailListenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectMgrEventObject", new com.earthview.world.spatial3dproxy.EffectMgrEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCEffectMgrEventObjectProxy", new com.earthview.world.spatial3dproxy.EffectMgrEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CEffectTreeviewEvent", new com.earthview.world.spatial3dproxy.EffectTreeviewEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CGlobeViewEventObject", new com.earthview.world.spatial3dproxy.GlobeViewEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCGlobeViewEventObjectProxy", new com.earthview.world.spatial3dproxy.GlobeViewEventObjectClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent", new com.earthview.world.spatial3dproxy.kmlmanager.KmlLayerEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent", new com.earthview.world.spatial3dproxy.kmlmanager.KmlLayerObjectEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent", new com.earthview.world.spatial3dproxy.kmlmanager.KmlAddFolderEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent", new com.earthview.world.spatial3dproxy.kmlmanager.KmlFileEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent", new com.earthview.world.spatial3dproxy.kmlmanager.KmlEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent", new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeNodeEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager", new com.earthview.world.spatial3dproxy.kmlmanager.KmlFeatureEditToolManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCKmlFeatureEditToolManagerProxy", new com.earthview.world.spatial3dproxy.kmlmanager.KmlFeatureEditToolManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler", new com.earthview.world.spatial3dproxy.kmlmanager.Gui360EventHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCGui360EventHandlerProxy", new com.earthview.world.spatial3dproxy.kmlmanager.Gui360EventHandlerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360", new com.earthview.world.spatial3dproxy.kmlmanager.GotoListener360ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCGotoListener360Proxy", new com.earthview.world.spatial3dproxy.kmlmanager.GotoListener360ClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers", new com.earthview.world.spatial3dproxy.kmlmanager.AllGlobeControlLayersClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager", new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::KmlManager::JCKmlTreeManagerProxy", new com.earthview.world.spatial3dproxy.kmlmanager.KmlTreeManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDataSourceTool", new com.earthview.world.spatial3dproxy.ModelDataSourceToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CModelDataStreamSourcePublishTool", new com.earthview.world.spatial3dproxy.ModelDataStreamSourcePublishToolClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDB::CModelDBEvent", new com.earthview.world.spatial3dproxy.modeldb.ModelDBEventClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CModelEffectDBManager", new com.earthview.world.spatial3dproxy.ModelEffectDBManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam", new com.earthview.world.spatial3dproxy.modeldb.ModelInfoPanelParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::ModelDB::JCModelInfoPanelParamProxy", new com.earthview.world.spatial3dproxy.modeldb.ModelInfoPanelParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CModelProperty", new com.earthview.world.spatial3dproxy.ModelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCModelPropertyProxy", new com.earthview.world.spatial3dproxy.ModelPropertyClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CNodeParam", new com.earthview.world.spatial3dproxy.NodeParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCNodeParamProxy", new com.earthview.world.spatial3dproxy.NodeParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CTrailParam", new com.earthview.world.spatial3dproxy.TrailParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCTrailParamProxy", new com.earthview.world.spatial3dproxy.TrailParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::CLightParam", new com.earthview.world.spatial3dproxy.LightParamClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial3DProxy::JCLightParamProxy", new com.earthview.world.spatial3dproxy.LightParamClassFactory());
	}
}

