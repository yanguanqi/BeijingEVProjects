package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfeatureclassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifeatureclass emptyInstance = new Ifeatureclass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
