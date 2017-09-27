package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TriangleStripClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TriangleStrip emptyInstance = new TriangleStrip(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
