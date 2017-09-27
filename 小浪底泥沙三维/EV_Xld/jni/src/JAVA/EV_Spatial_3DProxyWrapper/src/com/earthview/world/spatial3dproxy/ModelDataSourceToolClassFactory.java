package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataSourceToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDataSourceTool emptyInstance = new ModelDataSourceTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
