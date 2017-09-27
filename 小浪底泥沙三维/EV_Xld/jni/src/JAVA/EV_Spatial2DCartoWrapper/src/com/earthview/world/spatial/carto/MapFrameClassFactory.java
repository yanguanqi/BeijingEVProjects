package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapFrameClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapFrame emptyInstance = new MapFrame(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
