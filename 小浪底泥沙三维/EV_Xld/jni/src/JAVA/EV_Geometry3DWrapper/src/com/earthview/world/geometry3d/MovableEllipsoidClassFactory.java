package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableEllipsoidClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableEllipsoid emptyInstance = new MovableEllipsoid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
