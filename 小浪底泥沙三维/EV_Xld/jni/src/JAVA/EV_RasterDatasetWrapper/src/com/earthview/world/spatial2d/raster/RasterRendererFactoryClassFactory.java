package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterRendererFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterRendererFactory emptyInstance = new RasterRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
