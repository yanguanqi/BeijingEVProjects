package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackAnimationTimeListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackAnimationTimeListener emptyInstance = new TrackAnimationTimeListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
