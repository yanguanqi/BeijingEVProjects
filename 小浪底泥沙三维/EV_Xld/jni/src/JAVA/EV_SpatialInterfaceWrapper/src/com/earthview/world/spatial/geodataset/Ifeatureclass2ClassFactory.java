package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Ifeatureclass2ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifeatureclass2 emptyInstance = new Ifeatureclass2(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
