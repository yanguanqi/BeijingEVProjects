package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryInsertClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryInsert emptyInstance = new GeometryInsert(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
