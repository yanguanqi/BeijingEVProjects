package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BilcacheClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Bilcache emptyInstance = new Bilcache(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
