package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlasdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlasdataset emptyInstance = new Evlasdataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
