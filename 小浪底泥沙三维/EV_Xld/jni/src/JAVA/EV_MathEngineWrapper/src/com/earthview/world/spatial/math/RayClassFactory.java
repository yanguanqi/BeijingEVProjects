package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RayClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ray emptyInstance = new Ray(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
