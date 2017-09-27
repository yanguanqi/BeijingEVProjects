package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DbrasterdatasourcefactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Dbrasterdatasourcefactory emptyInstance = new Dbrasterdatasourcefactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
