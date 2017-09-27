package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterHistogramClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterHistogram emptyInstance = new RasterHistogram(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
