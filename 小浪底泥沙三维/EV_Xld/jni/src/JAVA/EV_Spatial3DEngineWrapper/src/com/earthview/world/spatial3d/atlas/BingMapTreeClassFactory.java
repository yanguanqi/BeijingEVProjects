package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BingMapTreeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BingMapTree emptyInstance = new BingMapTree(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
