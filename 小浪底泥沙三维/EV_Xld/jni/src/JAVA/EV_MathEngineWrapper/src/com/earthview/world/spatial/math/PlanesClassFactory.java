package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlanesClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Planes emptyInstance = new Planes(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
