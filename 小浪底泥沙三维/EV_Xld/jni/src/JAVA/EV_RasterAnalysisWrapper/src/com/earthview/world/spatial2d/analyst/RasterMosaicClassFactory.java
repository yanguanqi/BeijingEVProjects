package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterMosaicClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterMosaic emptyInstance = new RasterMosaic(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
