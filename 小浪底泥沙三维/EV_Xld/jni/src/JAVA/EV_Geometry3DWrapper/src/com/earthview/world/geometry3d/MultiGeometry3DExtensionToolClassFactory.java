package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiGeometry3DExtensionToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiGeometry3DExtensionTool emptyInstance = new MultiGeometry3DExtensionTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
