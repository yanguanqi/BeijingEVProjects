package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Sphere emptyInstance = new Sphere(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
