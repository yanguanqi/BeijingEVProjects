package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlPointMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControlPointMap emptyInstance = new ControlPointMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
