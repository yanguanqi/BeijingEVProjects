package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeNodeTrackAnimationPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeNodeTrackAnimationPtr emptyInstance = new GlobeNodeTrackAnimationPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
