package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Point2PointTargetListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Point2PointTargetList emptyInstance = new Point2PointTargetList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
