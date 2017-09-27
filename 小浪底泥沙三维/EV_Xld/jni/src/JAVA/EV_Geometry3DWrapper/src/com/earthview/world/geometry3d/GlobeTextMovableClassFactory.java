package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeTextMovableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeTextMovable emptyInstance = new GlobeTextMovable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
