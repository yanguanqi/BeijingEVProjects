package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Point2AreaParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Point2AreaParam emptyInstance = new Point2AreaParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
