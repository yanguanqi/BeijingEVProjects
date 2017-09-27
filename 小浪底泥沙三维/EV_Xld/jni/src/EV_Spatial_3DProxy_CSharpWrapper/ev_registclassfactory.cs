using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_Spatial_3DProxy_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectDBManager", new EarthView.World.Spatial3DProxy.EffectDBManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectInfoPanelParam", new EarthView.World.Spatial3DProxy.EffectInfoPanelParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectInfoPanelParamProxy", new EarthView.World.Spatial3DProxy.EffectInfoPanelParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CAnimationTrailListener", new EarthView.World.Spatial3DProxy.AnimationTrailListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CAnimationTrailListenerProxy", new EarthView.World.Spatial3DProxy.AnimationTrailListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectMgrEventObject", new EarthView.World.Spatial3DProxy.EffectMgrEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectMgrEventObjectProxy", new EarthView.World.Spatial3DProxy.EffectMgrEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CEffectTreeviewEvent", new EarthView.World.Spatial3DProxy.EffectTreeviewEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CGlobeViewEventObject", new EarthView.World.Spatial3DProxy.GlobeViewEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CGlobeViewEventObjectProxy", new EarthView.World.Spatial3DProxy.GlobeViewEventObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerEvent", new EarthView.World.Spatial3DProxy.KmlManager.KmlLayerEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlLayerObjectEvent", new EarthView.World.Spatial3DProxy.KmlManager.KmlLayerObjectEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlAddFolderEvent", new EarthView.World.Spatial3DProxy.KmlManager.KmlAddFolderEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlFileEvent", new EarthView.World.Spatial3DProxy.KmlManager.KmlFileEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlEvent", new EarthView.World.Spatial3DProxy.KmlManager.KmlEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeNodeEvent", new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeNodeEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManager", new EarthView.World.Spatial3DProxy.KmlManager.KmlFeatureEditToolManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlFeatureEditToolManagerProxy", new EarthView.World.Spatial3DProxy.KmlManager.KmlFeatureEditToolManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandler", new EarthView.World.Spatial3DProxy.KmlManager.Gui360EventHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGui360EventHandlerProxy", new EarthView.World.Spatial3DProxy.KmlManager.Gui360EventHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360", new EarthView.World.Spatial3DProxy.KmlManager.GotoListener360ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CGotoListener360Proxy", new EarthView.World.Spatial3DProxy.KmlManager.GotoListener360ClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::AllGlobeControlLayers", new EarthView.World.Spatial3DProxy.KmlManager.AllGlobeControlLayersClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManager", new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::KmlManager::CKmlTreeManagerProxy", new EarthView.World.Spatial3DProxy.KmlManager.KmlTreeManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::ModelDataSourceTool", new EarthView.World.Spatial3DProxy.ModelDataSourceToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CModelDataStreamSourcePublishTool", new EarthView.World.Spatial3DProxy.ModelDataStreamSourcePublishToolClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::ModelDB::CModelDBEvent", new EarthView.World.Spatial3DProxy.ModelDB.ModelDBEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CModelEffectDBManager", new EarthView.World.Spatial3DProxy.ModelEffectDBManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParam", new EarthView.World.Spatial3DProxy.ModelDB.ModelInfoPanelParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::ModelDB::CModelInfoPanelParamProxy", new EarthView.World.Spatial3DProxy.ModelDB.ModelInfoPanelParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CModelProperty", new EarthView.World.Spatial3DProxy.ModelPropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CModelPropertyProxy", new EarthView.World.Spatial3DProxy.ModelPropertyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CNodeParam", new EarthView.World.Spatial3DProxy.NodeParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CNodeParamProxy", new EarthView.World.Spatial3DProxy.NodeParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CTrailParam", new EarthView.World.Spatial3DProxy.TrailParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CTrailParamProxy", new EarthView.World.Spatial3DProxy.TrailParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CLightParam", new EarthView.World.Spatial3DProxy.LightParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial3DProxy::CLightParamProxy", new EarthView.World.Spatial3DProxy.LightParamClassFactory());
	}
}

