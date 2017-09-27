package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlPolygonFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlPolygonFactory emptyInstance = new KmlPolygonFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
