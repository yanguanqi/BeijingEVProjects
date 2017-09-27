package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlPointsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControlPoints emptyInstance = new ControlPoints(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
