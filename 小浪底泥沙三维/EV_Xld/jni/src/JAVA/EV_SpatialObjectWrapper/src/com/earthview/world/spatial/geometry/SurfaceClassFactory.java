package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SurfaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Surface emptyInstance = new Surface(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
