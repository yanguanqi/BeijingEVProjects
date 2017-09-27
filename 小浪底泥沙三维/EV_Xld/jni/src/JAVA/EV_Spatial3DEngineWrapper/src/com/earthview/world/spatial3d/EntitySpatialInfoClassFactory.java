package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntitySpatialInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntitySpatialInfo emptyInstance = new EntitySpatialInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
