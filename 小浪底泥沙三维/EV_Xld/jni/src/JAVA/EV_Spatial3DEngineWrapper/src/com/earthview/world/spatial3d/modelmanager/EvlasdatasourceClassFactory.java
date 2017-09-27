package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlasdatasourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlasdatasource emptyInstance = new Evlasdatasource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
