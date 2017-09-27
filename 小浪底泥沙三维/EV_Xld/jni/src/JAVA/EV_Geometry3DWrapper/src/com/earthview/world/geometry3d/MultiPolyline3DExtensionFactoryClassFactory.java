package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiPolyline3DExtensionFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiPolyline3DExtensionFactory emptyInstance = new MultiPolyline3DExtensionFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
