package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstancedGeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstancedGeometry emptyInstance = new InstancedGeometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
