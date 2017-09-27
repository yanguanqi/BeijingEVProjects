package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterAttributeTableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterAttributeTable emptyInstance = new RasterAttributeTable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
