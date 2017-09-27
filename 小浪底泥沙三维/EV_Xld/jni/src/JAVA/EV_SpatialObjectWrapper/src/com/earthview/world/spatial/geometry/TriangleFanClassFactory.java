package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TriangleFanClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TriangleFan emptyInstance = new TriangleFan(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
