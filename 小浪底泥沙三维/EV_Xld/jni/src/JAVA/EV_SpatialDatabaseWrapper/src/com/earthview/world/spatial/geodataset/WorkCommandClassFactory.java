package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WorkCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WorkCommand emptyInstance = new WorkCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
