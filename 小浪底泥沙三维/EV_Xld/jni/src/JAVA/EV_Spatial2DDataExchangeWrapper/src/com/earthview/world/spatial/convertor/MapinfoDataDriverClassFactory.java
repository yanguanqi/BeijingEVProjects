package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapinfoDataDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapinfoDataDriver emptyInstance = new MapinfoDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
