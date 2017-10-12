package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapCacheParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapCacheParam emptyInstance = new MapCacheParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
