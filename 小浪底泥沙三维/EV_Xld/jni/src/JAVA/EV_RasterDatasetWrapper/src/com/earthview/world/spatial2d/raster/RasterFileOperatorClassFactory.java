package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterFileOperatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterFileOperator emptyInstance = new RasterFileOperator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
