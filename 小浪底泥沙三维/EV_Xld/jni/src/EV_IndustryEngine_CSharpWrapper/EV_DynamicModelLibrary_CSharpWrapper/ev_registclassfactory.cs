using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_DynamicModelLibrary_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandler", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicCameraLockHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraLockHandlerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicCameraLockHandlerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimation", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicCameraNodeTrackAnimationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicCameraNodeTrackAnimationProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicCameraNodeTrackAnimationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicDistanceLodStrategy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicDistanceLodStrategyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicDistanceLodStrategyProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicDistanceLodStrategyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimation", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategyProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListener", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyListenerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItem", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItemClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicLodStrategy::CDynamicLodStrategyItemMap", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicLodStrategy.DynamicLodStrategyItemMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListener", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelManagerListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelManagerListenerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelManagerListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListenerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectResourceListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListenerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicGlobeNodeTrackAnimationListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam", new EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParamClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet", new EarthView.IndustryEngine.DynamicModelLibrary.CameraAnimationParamSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet", new EarthView.IndustryEngine.DynamicModelLibrary.GlobeControlPointSetClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject.DynamicAnimationListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListenerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObject.DynamicAnimationListenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManagerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectMap", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectMapClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIteratorPair", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorPairClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager::CDynamicModelObjectIterator", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicModelObjectManager.DynamicModelObjectIteratorClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEventManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManagerProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicObjectEventManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicPixelLodStrategyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CDynamicPixelLodStrategyProxy", new EarthView.IndustryEngine.DynamicModelLibrary.DynamicPixelLodStrategyClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent", new EarthView.IndustryEngine.DynamicModelLibrary.GlobeNodeTrackAnimationStartEventClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEventProxy", new EarthView.IndustryEngine.DynamicModelLibrary.GlobeNodeTrackAnimationStartEventClassFactory());
	}
}

