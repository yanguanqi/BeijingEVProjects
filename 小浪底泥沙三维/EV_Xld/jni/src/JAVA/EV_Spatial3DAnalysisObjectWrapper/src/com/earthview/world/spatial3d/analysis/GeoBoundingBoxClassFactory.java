package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoBoundingBoxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoBoundingBox emptyInstance = new GeoBoundingBox(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
