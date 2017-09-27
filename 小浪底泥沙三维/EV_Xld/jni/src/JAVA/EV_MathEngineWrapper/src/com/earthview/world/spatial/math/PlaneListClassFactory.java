package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaneListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PlaneList emptyInstance = new PlaneList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
