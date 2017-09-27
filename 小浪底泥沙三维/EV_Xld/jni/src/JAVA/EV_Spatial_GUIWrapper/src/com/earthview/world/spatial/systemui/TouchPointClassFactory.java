package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TouchPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TouchPoint emptyInstance = new TouchPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
