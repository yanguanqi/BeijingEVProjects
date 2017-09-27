package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LodObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LodObject emptyInstance = new LodObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
