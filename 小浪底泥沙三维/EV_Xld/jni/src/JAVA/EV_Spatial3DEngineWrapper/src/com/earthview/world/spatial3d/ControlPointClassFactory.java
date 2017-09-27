package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ControlPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ControlPoint emptyInstance = new ControlPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
