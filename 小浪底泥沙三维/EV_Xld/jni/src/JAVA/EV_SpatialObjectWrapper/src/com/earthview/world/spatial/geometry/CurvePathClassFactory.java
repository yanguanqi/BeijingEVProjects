package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CurvePathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CurvePath emptyInstance = new CurvePath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
