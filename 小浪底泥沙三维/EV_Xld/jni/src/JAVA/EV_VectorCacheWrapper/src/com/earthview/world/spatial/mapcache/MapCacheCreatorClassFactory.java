package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapCacheCreatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapCacheCreator emptyInstance = new MapCacheCreator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
