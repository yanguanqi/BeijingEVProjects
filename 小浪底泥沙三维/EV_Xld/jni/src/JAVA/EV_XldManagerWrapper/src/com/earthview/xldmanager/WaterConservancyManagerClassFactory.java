package com.earthview.xldmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WaterConservancyManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WaterConservancyManager emptyInstance = new WaterConservancyManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
