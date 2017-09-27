package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrasterdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irasterdataset emptyInstance = new Irasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
