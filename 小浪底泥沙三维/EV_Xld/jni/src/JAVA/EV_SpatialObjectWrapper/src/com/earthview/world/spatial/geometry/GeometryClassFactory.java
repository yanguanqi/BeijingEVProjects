package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Geometry emptyInstance = new Geometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
