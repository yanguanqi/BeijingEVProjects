package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LightObject emptyInstance = new LightObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
