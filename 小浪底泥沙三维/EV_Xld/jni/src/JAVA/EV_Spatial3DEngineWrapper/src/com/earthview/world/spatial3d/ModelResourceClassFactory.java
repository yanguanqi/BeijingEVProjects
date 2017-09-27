package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelResourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelResource emptyInstance = new ModelResource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
