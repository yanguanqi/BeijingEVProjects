package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelCommand emptyInstance = new ModelCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
