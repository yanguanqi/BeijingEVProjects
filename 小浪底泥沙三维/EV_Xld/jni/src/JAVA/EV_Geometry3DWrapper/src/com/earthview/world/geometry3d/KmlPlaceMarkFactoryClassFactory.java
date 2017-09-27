package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlPlaceMarkFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlPlaceMarkFactory emptyInstance = new KmlPlaceMarkFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
