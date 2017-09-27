package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Point2PointTargetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Point2PointTarget emptyInstance = new Point2PointTarget(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
