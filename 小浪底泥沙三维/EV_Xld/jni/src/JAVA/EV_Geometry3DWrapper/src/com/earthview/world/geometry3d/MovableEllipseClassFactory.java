package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableEllipseClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableEllipse emptyInstance = new MovableEllipse(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
