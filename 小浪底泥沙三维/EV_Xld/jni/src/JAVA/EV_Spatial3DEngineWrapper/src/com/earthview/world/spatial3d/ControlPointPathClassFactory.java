package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlPointPathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControlPointPath emptyInstance = new ControlPointPath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
