package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Smart3DDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Smart3DDataSourceFactory emptyInstance = new Smart3DDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
