package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiGeometry3DExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiGeometry3DExtension emptyInstance = new MultiGeometry3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
