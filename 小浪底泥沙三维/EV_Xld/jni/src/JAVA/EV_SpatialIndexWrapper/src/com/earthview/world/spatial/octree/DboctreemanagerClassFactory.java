package com.earthview.world.spatial.octree;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DboctreemanagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dboctreemanager emptyInstance = new Dboctreemanager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
