package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelNodeAnimationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelNodeAnimation emptyInstance = new ModelNodeAnimation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
