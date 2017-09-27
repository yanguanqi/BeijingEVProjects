package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiPoint3DExtensionFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiPoint3DExtensionFactory emptyInstance = new MultiPoint3DExtensionFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
