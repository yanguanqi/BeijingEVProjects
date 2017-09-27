package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LegendClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Legend emptyInstance = new Legend(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
