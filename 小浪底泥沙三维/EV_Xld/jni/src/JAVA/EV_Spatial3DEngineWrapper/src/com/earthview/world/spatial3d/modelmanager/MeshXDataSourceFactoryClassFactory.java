package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXDataSourceFactory emptyInstance = new MeshXDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
