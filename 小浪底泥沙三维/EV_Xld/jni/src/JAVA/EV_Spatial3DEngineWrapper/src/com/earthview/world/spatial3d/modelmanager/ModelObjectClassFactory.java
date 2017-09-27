package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelObject emptyInstance = new ModelObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
