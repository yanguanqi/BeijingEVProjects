package global;

import com.earthview.world.core.GlobalClassFactoryMap;

public class EV_VideoRecordingProxy_ClassFactory
{
	public static void registerAll()
	{
		GlobalClassFactoryMap.put("Video::VideoPlayer", new com.video.VideoPlayerClassFactory());
		GlobalClassFactoryMap.put("EarthView::World::UtilityTools::VideoRecording", new com.earthview.world.utilitytools.VideoRecordingClassFactory());
	}
}

