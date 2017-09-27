package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LegendItemVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LegendItemVector emptyInstance = new LegendItemVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
