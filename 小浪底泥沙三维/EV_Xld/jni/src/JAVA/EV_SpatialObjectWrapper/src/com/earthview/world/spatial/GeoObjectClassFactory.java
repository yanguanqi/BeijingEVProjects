package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoObject emptyInstance = new GeoObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
