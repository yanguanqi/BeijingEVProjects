using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_ProjectManager_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbolListener", new EarthView.World.Spatial.Display.IsymbollistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Display::ISymbolListenerProxy", new EarthView.World.Spatial.Display.IsymbollistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Utility::CProjectManager", new EarthView.World.Spatial.Utility.ProjectManagerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener", new EarthView.World.Spatial.Utility.ProjectManager.IprojectmanagerlistenerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListenerProxy", new EarthView.World.Spatial.Utility.ProjectManager.IprojectmanagerlistenerClassFactory());
	}
}

