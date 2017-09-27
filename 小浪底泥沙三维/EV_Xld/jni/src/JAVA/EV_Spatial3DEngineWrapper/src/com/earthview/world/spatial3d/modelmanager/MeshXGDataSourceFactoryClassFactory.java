package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXGDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXGDataSourceFactory emptyInstance = new MeshXGDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
