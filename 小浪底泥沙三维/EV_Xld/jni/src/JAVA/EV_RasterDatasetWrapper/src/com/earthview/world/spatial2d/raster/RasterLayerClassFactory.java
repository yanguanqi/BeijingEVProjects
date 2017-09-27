package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterLayer emptyInstance = new RasterLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
