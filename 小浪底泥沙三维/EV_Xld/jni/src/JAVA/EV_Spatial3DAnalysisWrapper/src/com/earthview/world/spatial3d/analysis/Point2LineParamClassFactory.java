package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Point2LineParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Point2LineParam emptyInstance = new Point2LineParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
