package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbrasterdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dbrasterdataset emptyInstance = new Dbrasterdataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
