package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlCacheManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlCacheManager emptyInstance = new KmlCacheManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
