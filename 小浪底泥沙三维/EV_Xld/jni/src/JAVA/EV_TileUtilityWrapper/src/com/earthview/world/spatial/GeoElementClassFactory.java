package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoElementClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoElement emptyInstance = new GeoElement(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
