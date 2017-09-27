package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idataset emptyInstance = new Idataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
