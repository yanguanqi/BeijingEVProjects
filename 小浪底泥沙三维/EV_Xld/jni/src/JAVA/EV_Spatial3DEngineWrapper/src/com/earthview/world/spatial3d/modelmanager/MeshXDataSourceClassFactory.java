package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXDataSource emptyInstance = new MeshXDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
