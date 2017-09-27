package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackAnimationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackAnimation emptyInstance = new TrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
