package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlPolylineFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlPolylineFactory emptyInstance = new KmlPolylineFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
