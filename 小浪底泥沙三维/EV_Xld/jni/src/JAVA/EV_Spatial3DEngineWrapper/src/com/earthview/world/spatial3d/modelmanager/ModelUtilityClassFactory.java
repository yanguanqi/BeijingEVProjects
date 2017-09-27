package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelUtility emptyInstance = new ModelUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
