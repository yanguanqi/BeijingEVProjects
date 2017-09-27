package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LegendItemManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LegendItemManager emptyInstance = new LegendItemManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
