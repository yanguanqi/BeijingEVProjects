package com.earthview.world.spatial.math;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VertexListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VertexList emptyInstance = new VertexList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
