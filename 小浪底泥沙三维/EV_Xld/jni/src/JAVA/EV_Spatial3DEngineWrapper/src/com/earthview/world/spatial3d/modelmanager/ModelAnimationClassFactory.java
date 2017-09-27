package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelAnimationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelAnimation emptyInstance = new ModelAnimation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
