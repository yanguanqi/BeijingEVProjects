package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlDataSourceFactory emptyInstance = new KmlDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
