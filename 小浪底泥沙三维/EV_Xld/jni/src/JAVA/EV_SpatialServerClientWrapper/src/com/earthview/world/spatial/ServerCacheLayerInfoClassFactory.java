package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerCacheLayerInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerCacheLayerInfo emptyInstance = new ServerCacheLayerInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
