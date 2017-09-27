package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightPointNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LightPointNode emptyInstance = new LightPointNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
