package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DynamicCameraNodeTrackAnimationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynamicCameraNodeTrackAnimation emptyInstance = new DynamicCameraNodeTrackAnimation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
