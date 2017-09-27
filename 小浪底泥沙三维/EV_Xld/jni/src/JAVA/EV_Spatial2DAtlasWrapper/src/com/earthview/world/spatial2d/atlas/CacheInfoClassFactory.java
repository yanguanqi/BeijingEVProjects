package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CacheInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CacheInfo emptyInstance = new CacheInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
