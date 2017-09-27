package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiPolygon3DExtensionFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiPolygon3DExtensionFactory emptyInstance = new MultiPolygon3DExtensionFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
