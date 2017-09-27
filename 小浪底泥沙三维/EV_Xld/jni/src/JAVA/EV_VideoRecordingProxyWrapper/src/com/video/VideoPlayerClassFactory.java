package com.video;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.graphic.*;
import com.earthview.world.core.*;

public class VideoPlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VideoPlayer emptyInstance = new VideoPlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
