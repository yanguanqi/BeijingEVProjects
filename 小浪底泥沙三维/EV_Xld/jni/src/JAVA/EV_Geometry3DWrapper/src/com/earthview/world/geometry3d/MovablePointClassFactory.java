package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovablePointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovablePoint emptyInstance = new MovablePoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
