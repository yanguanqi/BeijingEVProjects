package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MotionEventPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MotionEventPoint emptyInstance = new MotionEventPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
