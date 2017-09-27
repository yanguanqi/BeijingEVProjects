package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeAtmosphereClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeAtmosphere emptyInstance = new GlobeAtmosphere(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
