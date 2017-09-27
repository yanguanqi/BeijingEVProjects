package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterStretchRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterStretchRenderer emptyInstance = new RasterStretchRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
