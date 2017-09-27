package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiPolygon3DExtensionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiPolygon3DExtension emptyInstance = new MultiPolygon3DExtension(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
