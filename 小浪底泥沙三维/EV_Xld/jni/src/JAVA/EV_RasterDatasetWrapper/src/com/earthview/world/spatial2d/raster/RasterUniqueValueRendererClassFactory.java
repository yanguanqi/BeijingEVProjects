package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterUniqueValueRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterUniqueValueRenderer emptyInstance = new RasterUniqueValueRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
