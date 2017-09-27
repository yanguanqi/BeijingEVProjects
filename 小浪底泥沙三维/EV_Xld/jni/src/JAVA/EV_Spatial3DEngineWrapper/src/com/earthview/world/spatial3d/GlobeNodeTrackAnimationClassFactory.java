package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeNodeTrackAnimationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeNodeTrackAnimation emptyInstance = new GlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
