package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterBlockClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterBlock emptyInstance = new RasterBlock(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
