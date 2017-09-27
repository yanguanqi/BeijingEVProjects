package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoElementDrawingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoElementDrawing emptyInstance = new GeoElementDrawing(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
