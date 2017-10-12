package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalImageDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalImageDataSource emptyInstance = new LocalImageDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
