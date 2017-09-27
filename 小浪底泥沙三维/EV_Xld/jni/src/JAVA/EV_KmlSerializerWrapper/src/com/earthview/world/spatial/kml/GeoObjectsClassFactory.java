package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoObjectsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoObjects emptyInstance = new GeoObjects(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
