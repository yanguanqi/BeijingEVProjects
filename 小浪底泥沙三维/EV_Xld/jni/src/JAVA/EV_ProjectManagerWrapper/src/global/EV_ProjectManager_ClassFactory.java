package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_ProjectManager_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::ISymbolListener", new com.earthview.world.spatial.display.IsymbollistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Display::JISymbolListenerProxy", new com.earthview.world.spatial.display.IsymbollistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjectManager", new com.earthview.world.spatial.utility.ProjectManagerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener", new com.earthview.world.spatial.utility.ProjectManager.IprojectmanagerlistenerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::Spatial::Utility::CProjectManager::JIProjectManagerListenerProxy", new com.earthview.world.spatial.utility.ProjectManager.IprojectmanagerlistenerClassFactory());
	}
}

