package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Point emptyInstance = new Point(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
