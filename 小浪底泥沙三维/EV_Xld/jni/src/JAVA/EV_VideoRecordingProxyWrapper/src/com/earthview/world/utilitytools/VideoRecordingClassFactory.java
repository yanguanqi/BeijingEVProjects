package com.earthview.world.utilitytools;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VideoRecordingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VideoRecording emptyInstance = new VideoRecording(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
