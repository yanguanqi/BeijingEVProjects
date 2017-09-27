package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoStatistics3DExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoStatistics3DExtension emptyInstance = new GeoStatistics3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
