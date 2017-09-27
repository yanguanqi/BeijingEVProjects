package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeFlyPathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeFlyPath emptyInstance = new GlobeFlyPath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
