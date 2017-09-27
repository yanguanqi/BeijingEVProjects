package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MotionEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MotionEvent emptyInstance = new MotionEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
