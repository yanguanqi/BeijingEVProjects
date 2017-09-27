package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelNodeAnimationListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelNodeAnimationList emptyInstance = new ModelNodeAnimationList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
