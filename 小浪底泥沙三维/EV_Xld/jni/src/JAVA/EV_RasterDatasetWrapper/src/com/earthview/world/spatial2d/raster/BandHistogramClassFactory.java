package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BandHistogramClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BandHistogram emptyInstance = new BandHistogram(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
