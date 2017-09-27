package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterLayerFactory emptyInstance = new RasterLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
