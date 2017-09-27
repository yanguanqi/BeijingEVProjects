package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Polygon3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Polygon3D emptyInstance = new Polygon3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
