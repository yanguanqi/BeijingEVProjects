package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapTitleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapTitle emptyInstance = new MapTitle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
