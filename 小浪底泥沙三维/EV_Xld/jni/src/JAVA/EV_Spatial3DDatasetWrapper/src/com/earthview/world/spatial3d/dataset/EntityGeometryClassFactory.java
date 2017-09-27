package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityGeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityGeometry emptyInstance = new EntityGeometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
