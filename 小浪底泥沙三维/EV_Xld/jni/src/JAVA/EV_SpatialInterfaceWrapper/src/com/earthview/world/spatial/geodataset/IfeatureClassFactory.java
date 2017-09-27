package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifeature emptyInstance = new Ifeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
