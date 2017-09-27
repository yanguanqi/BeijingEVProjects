package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Geometry3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Geometry3D emptyInstance = new Geometry3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
