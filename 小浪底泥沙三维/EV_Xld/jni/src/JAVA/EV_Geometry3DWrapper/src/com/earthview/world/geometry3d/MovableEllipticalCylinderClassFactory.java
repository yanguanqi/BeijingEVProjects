package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableEllipticalCylinderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableEllipticalCylinder emptyInstance = new MovableEllipticalCylinder(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
