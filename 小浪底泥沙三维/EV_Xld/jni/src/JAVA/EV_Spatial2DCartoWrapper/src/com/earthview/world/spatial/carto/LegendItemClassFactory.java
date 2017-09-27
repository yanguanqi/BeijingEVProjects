package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LegendItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LegendItem emptyInstance = new LegendItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
