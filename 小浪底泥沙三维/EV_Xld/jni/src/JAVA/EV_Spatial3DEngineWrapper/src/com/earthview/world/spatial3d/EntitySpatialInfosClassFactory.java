package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntitySpatialInfosClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntitySpatialInfos emptyInstance = new EntitySpatialInfos(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
