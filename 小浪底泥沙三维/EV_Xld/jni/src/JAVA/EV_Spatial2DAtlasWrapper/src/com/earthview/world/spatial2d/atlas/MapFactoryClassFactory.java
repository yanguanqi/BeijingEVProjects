package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapFactory emptyInstance = new MapFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
