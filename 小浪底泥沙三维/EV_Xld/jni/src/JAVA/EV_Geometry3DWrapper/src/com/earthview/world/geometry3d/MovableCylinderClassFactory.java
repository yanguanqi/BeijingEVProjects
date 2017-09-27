package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MovableCylinderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MovableCylinder emptyInstance = new MovableCylinder(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
