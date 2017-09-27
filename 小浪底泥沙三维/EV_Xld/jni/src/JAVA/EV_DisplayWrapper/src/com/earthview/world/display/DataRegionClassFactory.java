package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataRegionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataRegion emptyInstance = new DataRegion(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
