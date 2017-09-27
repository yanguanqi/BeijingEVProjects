package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoObjectExtensionAttributeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoObjectExtensionAttribute emptyInstance = new GeoObjectExtensionAttribute(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
