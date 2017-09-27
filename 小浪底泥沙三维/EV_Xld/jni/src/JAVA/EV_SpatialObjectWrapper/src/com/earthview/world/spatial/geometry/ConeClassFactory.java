package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Cone emptyInstance = new Cone(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
