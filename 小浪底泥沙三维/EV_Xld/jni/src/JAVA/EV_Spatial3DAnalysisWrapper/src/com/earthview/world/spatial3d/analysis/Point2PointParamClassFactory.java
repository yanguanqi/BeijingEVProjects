package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Point2PointParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Point2PointParam emptyInstance = new Point2PointParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
