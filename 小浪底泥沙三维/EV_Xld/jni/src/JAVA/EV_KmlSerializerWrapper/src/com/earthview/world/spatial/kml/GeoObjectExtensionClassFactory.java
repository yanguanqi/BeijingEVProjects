package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoObjectExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoObjectExtension emptyInstance = new GeoObjectExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
