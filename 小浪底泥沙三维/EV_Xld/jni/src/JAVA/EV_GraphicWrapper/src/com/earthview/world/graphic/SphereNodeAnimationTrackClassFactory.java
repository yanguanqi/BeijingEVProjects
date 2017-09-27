package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereNodeAnimationTrackClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SphereNodeAnimationTrack emptyInstance = new SphereNodeAnimationTrack(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
