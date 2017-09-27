package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibilityPointListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VisibilityPointList emptyInstance = new VisibilityPointList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
