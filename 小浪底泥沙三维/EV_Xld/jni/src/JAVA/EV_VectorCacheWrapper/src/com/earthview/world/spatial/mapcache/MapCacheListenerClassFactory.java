package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapCacheListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapCacheListener emptyInstance = new MapCacheListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
