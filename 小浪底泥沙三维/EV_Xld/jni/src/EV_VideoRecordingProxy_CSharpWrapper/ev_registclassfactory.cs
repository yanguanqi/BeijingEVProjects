using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

public static class EV_VideoRecordingProxy_ClassFactory
{
	public static void RegisterAll()
	{
		EarthView.World.Core.GlobalClassFactoryMap.Put("Video::VideoPlayer", new Video.VideoPlayerClassFactory());
		EarthView.World.Core.GlobalClassFactoryMap.Put("EarthView::World::UtilityTools::VideoRecording", new EarthView.World.UtilityTools.VideoRecordingClassFactory());
	}
}

