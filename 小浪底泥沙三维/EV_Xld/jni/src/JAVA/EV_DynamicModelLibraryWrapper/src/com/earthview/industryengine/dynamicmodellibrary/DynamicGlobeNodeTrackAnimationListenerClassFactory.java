package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicGlobeNodeTrackAnimationListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicGlobeNodeTrackAnimationListener emptyInstance = new DynamicGlobeNodeTrackAnimationListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
