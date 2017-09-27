package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipsoidClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ellipsoid emptyInstance = new Ellipsoid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
