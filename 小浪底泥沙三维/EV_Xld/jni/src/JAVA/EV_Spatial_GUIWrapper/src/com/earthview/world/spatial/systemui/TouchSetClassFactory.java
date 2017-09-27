package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TouchSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TouchSet emptyInstance = new TouchSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
