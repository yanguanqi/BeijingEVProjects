package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlasdatasourcefactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlasdatasourcefactory emptyInstance = new Evlasdatasourcefactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
