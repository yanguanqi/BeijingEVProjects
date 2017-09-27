package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicGlobeNodeTrackAnimationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicGlobeNodeTrackAnimation emptyInstance = new DynamicGlobeNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
