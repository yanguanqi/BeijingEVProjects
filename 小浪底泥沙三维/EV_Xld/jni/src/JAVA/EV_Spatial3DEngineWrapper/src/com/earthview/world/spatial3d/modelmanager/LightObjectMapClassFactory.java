package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightObjectMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LightObjectMap emptyInstance = new LightObjectMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
