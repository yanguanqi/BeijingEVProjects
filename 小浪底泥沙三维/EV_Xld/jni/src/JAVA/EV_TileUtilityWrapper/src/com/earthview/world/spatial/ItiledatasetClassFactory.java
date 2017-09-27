package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ItiledatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Itiledataset emptyInstance = new Itiledataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
