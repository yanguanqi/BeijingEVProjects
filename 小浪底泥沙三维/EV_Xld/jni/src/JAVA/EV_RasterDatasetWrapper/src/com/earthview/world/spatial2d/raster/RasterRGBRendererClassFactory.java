package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterRGBRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterRGBRenderer emptyInstance = new RasterRGBRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
