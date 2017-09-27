package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LineStringClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LineString emptyInstance = new LineString(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
